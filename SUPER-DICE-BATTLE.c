#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef struct {
    int face;     
    int locked;   
    int disabled;
} Die;

typedef enum {
    SUPER_POWER_NONE,
    SUPER_POWER_GUIDED_SHOT,
    SUPER_POWER_FLASH_STRIKE,
    SUPER_POWER_REGENERATION,
    SUPER_POWER_STONE_SKIN,
    SUPER_POWER_VAMPIRISM,
    SUPER_POWER_WEAKEN,
    SUPER_POWER_GRAND_THEFT,
    SUPER_POWER_DENY,
    SUPER_POWER_SURRENDER
} SuperPowerType;

typedef struct {
    int health;
    int tokens;
    Die dice[6];
    SuperPowerType selected_powers[3];
} Player;

typedef struct {
    SuperPowerType type;
    int priority;
    int cost;
    int effect_level;
    int cost_paid;
    int direct_damage;
    int shield_ignoring_damage;
    int heal_per_axe;
    int flat_heal;
    int helmet_bonus;
    int shield_bonus;
    int extra_tokens_per_hand;
    int dice_to_remove;
} SuperPower;

enum { NORMAL_DICE_PRIORITY = 5, NO_POWER_PRIORITY = 99 };

int read_player_choice(int *choice) {
    char input[64];
    if(fgets(input, sizeof(input), stdin) == NULL) return 0;

    char *start = input;
    while(*start == ' ' || *start == '\t') start++;
    if(*start == 's' || *start == 'S') {
        *choice = -1;
        return 1;
    }
    return sscanf(start, "%d", choice) == 1;
}

int confirm_roll(int player_num, int reroll) {
    char input[64];
    while(1) {
        printf("Player %d, confirm %s? (y/n, S to surrender): ", player_num,
               reroll ? "reroll" : "rolling the dice");
        if(fgets(input, sizeof(input), stdin) == NULL) return -1;

        char *answer = input;
        while(*answer == ' ' || *answer == '\t') answer++;
        if(*answer == 'y' || *answer == 'Y') return 1;
        if(*answer == 'n' || *answer == 'N') return 0;
        if(*answer == 's' || *answer == 'S') return -1;
        printf("Please answer y or n, or enter S to surrender.\n");
    }
}

int select_first_player(int *surrendered_by) {
    int guess;
    while(1) {
        printf("Player 1, choose the coin side: 1. Heads, 2. Tails (S to surrender): ");
        if(!read_player_choice(&guess)) continue;
        if(guess == -1) {
            *surrendered_by = 1;
            return 1;
        }
        if(guess != 1 && guess != 2) {
            printf("Choose 1 for Heads or 2 for Tails.\n");
            continue;
        }

        int coin_side = rand() % 2 + 1;
        printf("The coin landed on %s.\n", coin_side == 1 ? "Heads" : "Tails");
        if(guess == coin_side) {
            printf("Player 1 guessed correctly and rolls first.\n");
            return 1;
        }
        printf("Player 1 guessed incorrectly. Player 2 rolls first.\n");
        return 2;
    }
}

void print_game_rules(void) {
    printf("\n--- HOW TO PLAY ---\n");
    printf("Reduce your opponent's health from 20 to 0 to win.\n");
    printf("Each player rolls 6 dice and may lock any dice then reroll any remaining dice up to two times.\n");
    printf("Axes attack and helmets block axes; arrows attack and shields block arrows.\n");
    printf("Hand dice steal 1 token, and each token die adds 2 tokens.\n");
    printf("Each player selects 3 different Super Powers and may activate at most 1 per round.\n");
    printf("Spend tokens on power; the coin toss picks the first roller, alternating each round.\n");
    printf("Lower priority numbers power resolve sooner; normal dice have priority 5.\n");
    printf("Type S to surrender.\n\n");
}

const char *super_power_name(SuperPowerType type) {
    switch(type) {
        case SUPER_POWER_GUIDED_SHOT: return "Guided Shot";
        case SUPER_POWER_FLASH_STRIKE: return "Flash Strike";
        case SUPER_POWER_REGENERATION: return "Regeneration";
        case SUPER_POWER_STONE_SKIN: return "Stone Skin";
        case SUPER_POWER_VAMPIRISM: return "Vampirism";
        case SUPER_POWER_WEAKEN: return "Weaken";
        case SUPER_POWER_GRAND_THEFT: return "Grand Theft";
        case SUPER_POWER_DENY: return "Deny";
        default: return "Unknown";
    }
}

int super_power_priority(SuperPowerType type) {
    switch(type) {
        case SUPER_POWER_WEAKEN: return 1;
        case SUPER_POWER_DENY: return 2;
        case SUPER_POWER_GRAND_THEFT: return 3;
        case SUPER_POWER_GUIDED_SHOT:
        case SUPER_POWER_STONE_SKIN:
        case SUPER_POWER_VAMPIRISM: return 4;
        case SUPER_POWER_FLASH_STRIKE: return 6;
        case SUPER_POWER_REGENERATION: return 7;
        default: return NO_POWER_PRIORITY;
    }
}

void print_super_power_effects(SuperPowerType type) {
    printf("%s (priority %d) effects:\n", super_power_name(type),
           super_power_priority(type));
    switch(type) {
        case SUPER_POWER_GUIDED_SHOT:
            printf("  tier 1: pay 3 tokens: 2 arrow ignore shields;\n");
            printf("  tier 2: pay 5 tokens: 3 arrow ignore shields;\n");
            printf("  tier 3: pay 7 tokens: 4 arrow ignore shields.\n");
            break;
        case SUPER_POWER_FLASH_STRIKE:
            printf("  tier 1: pay 4 tokens: deal 2 direct damage;\n");
            printf("  tier 2: pay 8 tokens: deal 5 direct damage;\n");
            printf("  tier 3: pay 12 tokens: deal 8 direct damage.\n");
            break;
        case SUPER_POWER_REGENERATION:
            printf("  tier 1: pay 4 tokens: heal 2;\n");
            printf("  tier 2: pay 7 tokens: heal 4;\n");
            printf("  tier 3: pay 10 tokens: heal 7.\n");
            break;
        case SUPER_POWER_STONE_SKIN:
            printf("  tier 1: pay 4 tokens: add 1 helmet and shield;\n");
            printf("  tier 2: pay 7 tokens: add 2 helmets and shields;\n");
            printf("  tier 3: pay 9 tokens: add 3 helmets and shields.\n");
            break;
        case SUPER_POWER_VAMPIRISM:
            printf("  tier 1: pay 6 tokens: heal 1 per axe damage;\n");
            printf("  tier 2: pay 11 tokens: heal 2 per axe damage;\n");
            printf("  tier 3: pay 16 tokens: heal 3 per axe damage.\n");
            break;
        case SUPER_POWER_WEAKEN:
            printf("  tier 1: pay 3 tokens: reduce the opponent's power by 1 tier;\n");
            printf("  tier 2: pay 5 tokens: reduce the opponent's power by 2 tiers;\n");
            printf("  tier 3: pay 7 tokens: reduce the opponent's power by 3 tiers.\n");
            break;
        case SUPER_POWER_GRAND_THEFT:
            printf("  tier 1: pay 4 tokens: steal 1 extra token per Hand dice;\n");
            printf("  tier 2: pay 8 tokens: steal 2 extra tokens per Hand dice;\n");
            printf("  tier 3: pay 11 tokens: steal 3 extra tokens per Hand dice.\n");
            break;
        case SUPER_POWER_DENY:
            printf("  tier 1: pay 3 tokens: remove 1 random dice;\n");
            printf("  tier 2: pay 6 tokens: remove 2 random dice;\n");
            printf("  tier 3: pay 9 tokens: remove 3 random dice.\n");
            break;
        default:
            break;
    }
}

int select_player_powers(Player *player, int player_num) {
    int selected_count = 0;
    printf("\nPlayer %d, select 3 different Super Powers for this game.\n", player_num);
    printf("Your choices do not remove powers from Player %d's options.\n", player_num == 1 ? 2 : 1);

    while(1) {
        while(selected_count < 3) {
            printf("Choose power %d of 3: ", selected_count + 1);
                     printf("1. Guided Shot (priority %d), 2. Flash Strike (priority %d), ",
                     super_power_priority(SUPER_POWER_GUIDED_SHOT),
                     super_power_priority(SUPER_POWER_FLASH_STRIKE));
                     printf("3. Regeneration (priority %d), 4. Stone Skin (priority %d), ",
                     super_power_priority(SUPER_POWER_REGENERATION),
                     super_power_priority(SUPER_POWER_STONE_SKIN));
                     printf("5. Vampirism (priority %d), 6. Weaken (priority %d), ",
                     super_power_priority(SUPER_POWER_VAMPIRISM),
                     super_power_priority(SUPER_POWER_WEAKEN));
                     printf("7. Grand Theft (priority %d), 8. Deny (priority %d), (S to surrender): ",
                     super_power_priority(SUPER_POWER_GRAND_THEFT),
                     super_power_priority(SUPER_POWER_DENY));

            int choice;
            if(!read_player_choice(&choice)) continue;
            if(choice == -1) return 1;
            if(choice < SUPER_POWER_GUIDED_SHOT || choice > SUPER_POWER_DENY) {
                printf("Choose a number from 1 to 8.\n");
                continue;
            }

            int already_selected = 0;
            for(int i = 0; i < selected_count; i++) {
                if(player->selected_powers[i] == (SuperPowerType)choice) {
                    already_selected = 1;
                    break;
                }
            }
            if(already_selected) {
                printf("You already selected that Super Power. Choose a different one.\n");
                continue;
            }

            SuperPowerType selected_power = (SuperPowerType)choice;
            print_super_power_effects(selected_power);
            while(1) {
                printf("Add this power to your loadout? (y/n, S to surrender): ");
                char confirmation[32];
                if(fgets(confirmation, sizeof(confirmation), stdin) == NULL) return 1;
                char answer = confirmation[0];
                if(answer == 's' || answer == 'S') return 1;
                if(answer == 'y' || answer == 'Y') {
                    player->selected_powers[selected_count++] = selected_power;
                    printf("Added %s.\n", super_power_name(selected_power));
                    break;
                }
                if(answer == 'n' || answer == 'N') break;
                printf("Please answer y or n.\n");
            }
        }

        printf("\nPlayer %d's selected powers:\n", player_num);
        for(int i = 0; i < 3; i++) {
            printf("%d. %s\n", i + 1,
                   super_power_name(player->selected_powers[i]));
        }
        printf("Confirm this loadout? (y/n, S to surrender): ");
        char review_input[32];
        if(fgets(review_input, sizeof(review_input), stdin) == NULL) return 1;
        char review_choice = review_input[0];
        if(review_choice == 's' || review_choice == 'S') return 1;
        if(review_choice == 'y' || review_choice == 'Y') return 0;
        if(review_choice != 'n' && review_choice != 'N') {
            printf("Please answer y or n.\n");
            continue;
        }

        printf("Enter the slot number to remove (1-3): ");
        int remove_slot;
        if(!read_player_choice(&remove_slot)) continue;
        if(remove_slot == -1) return 1;
        if(remove_slot < 1 || remove_slot > 3) {
            printf("Choose a slot from 1 to 3.\n");
            continue;
        }
        printf("Removed %s. Choose a replacement.\n",
               super_power_name(player->selected_powers[remove_slot - 1]));
        for(int i = remove_slot - 1; i < 2; i++) {
            player->selected_powers[i] = player->selected_powers[i + 1];
        }
        selected_count--;
    }
}

void print_face(int face) {
    switch(face) {
        case 0: printf("[Axe]     "); break;
        case 1: printf("[Arrow]   "); break;
        case 2: printf("[Helmet]  "); break;
        case 3: printf("[Shield]  "); break;
        case 4: printf("[Hand]    "); break;
        case 5: printf("[Token]   "); break;
        default: printf("[Unknown] "); break;
    }
}

void display_dice(Player *p, int player_num) {
    printf("\n--- Player %d's Final Dice ---\n", player_num);
    for(int i = 0; i < 6; i++) {
        printf("Dice %d: ", i + 1);
        print_face(p->dice[i].face);
        printf("\n");
    }
}

int player_turn(Player *p, int player_num) {
    printf("\n=============================\n");
    printf("      PLAYER %d'S TURN       \n", player_num);
    printf("=============================\n");
    int confirmation;
    do {
        confirmation = confirm_roll(player_num, 0);
        if(confirmation == 0) printf("Confirm the roll to continue your turn.\n");
    } while(confirmation == 0);
    if(confirmation < 0) return 1;
    printf("Rolling 6 dice...\n");

    for(int i = 0; i < 6; i++) {
        p->dice[i].face = rand() % 6;
        p->dice[i].locked = 0;
        p->dice[i].disabled = 0;
    }

    int rerolls_left = 2;
    while(rerolls_left > 0) {
        printf("\n--- Current Dice ---\n");
        for(int i = 0; i < 6; i++) {
            printf("Dice %d: ", i + 1);
            print_face(p->dice[i].face);
            if(p->dice[i].locked) printf("(LOCKED)");
            printf("\n");
        }
        
        printf("\nYou have %d re-rolls left.\n", rerolls_left);
        printf("Commands: 1-6 (Toggle Lock), 9 (Re-roll unlocked), 0 (Done), S (Surrender): ");
        
        int choice;
        if(!read_player_choice(&choice)) break;

        if(choice == -1) return 1;

        if(choice == 0) {
            break;
        } else if(choice >= 1 && choice <= 6) {
            int index = choice - 1;
            p->dice[index].locked = !p->dice[index].locked;
        } else if(choice == 9) {
            confirmation = confirm_roll(player_num, 1);
            if(confirmation < 0) return 1;
            if(confirmation == 0) continue;
            for(int i = 0; i < 6; i++) {
                if(!p->dice[i].locked) {
                    p->dice[i].face = rand() % 6;
                }
            }
            rerolls_left--;
        }
    }
    display_dice(p, player_num);
    printf("\nPress Enter to pass the turn, or type S to surrender: ");
    int choice;
    if(read_player_choice(&choice) && choice == -1) return 1;
    return 0;
}

int pay_super_power(SuperPower *power, Player *owner, int player_num) {
    if(power->type == SUPER_POWER_NONE) return 0;
    if(power->cost_paid) return 1;
    if(owner->tokens < power->cost) {
        printf("Player %d cannot afford the selected Super Power after token generation.\n",
               player_num);
        power->type = SUPER_POWER_NONE;
        power->priority = NO_POWER_PRIORITY;
        return 0;
    }
    owner->tokens -= power->cost;
    power->cost_paid = 1;
    return 1;
}

int steal_tokens(Player *thief, Player *target, int hand_dice, int extra_per_hand) {
    int steal_amount = hand_dice * (1 + extra_per_hand);
    int stolen = steal_amount < target->tokens ? steal_amount : target->tokens;
    target->tokens -= stolen;
    thief->tokens += stolen;
    return stolen;
}

void set_super_power_level(SuperPower *power, int level) {
    power->effect_level = level;
    power->direct_damage = 0;
    power->shield_ignoring_damage = 0;
    power->heal_per_axe = 0;
    power->flat_heal = 0;
    power->helmet_bonus = 0;
    power->shield_bonus = 0;
    power->dice_to_remove = 0;

    if(level <= 0) return;

    switch(power->type) {
        case SUPER_POWER_GUIDED_SHOT:
            power->shield_ignoring_damage = level + 1;
            break;
        case SUPER_POWER_FLASH_STRIKE:
            power->direct_damage = level == 1 ? 2 : (level == 2 ? 5 : 8);
            break;
        case SUPER_POWER_REGENERATION:
            power->flat_heal = level == 1 ? 2 : (level == 2 ? 4 : 7);
            break;
        case SUPER_POWER_STONE_SKIN:
            power->helmet_bonus = level;
            power->shield_bonus = level;
            break;
        case SUPER_POWER_VAMPIRISM:
            power->heal_per_axe = level;
            break;
        case SUPER_POWER_WEAKEN:
            break;
        case SUPER_POWER_GRAND_THEFT:
            power->extra_tokens_per_hand = level;
            break;
        case SUPER_POWER_DENY:
            power->dice_to_remove = level;
            break;
        default:
            break;
    }
}

void resolve_weaken(SuperPower *weaken, Player *owner, int player_num,
                       SuperPower *target, Player *target_player, int target_num) {
    if(weaken->type != SUPER_POWER_WEAKEN || owner->health <= 0) return;
    if(!pay_super_power(weaken, owner, player_num)) return;
    if(weaken->effect_level <= 0) {
        printf("Player %d's Weaken was reduced to level %d and has no effect.\n",
               player_num, weaken->effect_level);
        return;
    }
    if(target->type == SUPER_POWER_NONE) {
        printf("Player %d's Weaken has no target power; its cost is still spent.\n",
               player_num);
        return;
    }

    int original_level = target->effect_level;
    int reduced_level = original_level - weaken->effect_level;
    set_super_power_level(target, reduced_level);

    printf("Player %d's Weaken reduces Player %d's %s from level %d to level %d.\n",
           player_num, target_num, super_power_name(target->type), original_level,
           reduced_level);
    if(reduced_level <= 0) {
        if(pay_super_power(target, target_player, target_num)) {
            printf("Player %d still pays %d tokens, but the level %d power does not activate.\n",
                   target_num, target->cost, reduced_level);
        }
    }
}

void resolve_deny(SuperPower *deny, Player *owner, Player *target,
                  int player_num, int target_num) {
    if(deny->type != SUPER_POWER_DENY || owner->health <= 0) return;
    if(!pay_super_power(deny, owner, player_num)) return;
    if(deny->effect_level <= 0) return;

    int available_dice[6];
    int available_count = 0;
    for(int i = 0; i < 6; i++) {
        if(!target->dice[i].disabled) available_dice[available_count++] = i;
    }

    int remove_count = deny->dice_to_remove < available_count
                           ? deny->dice_to_remove : available_count;
    for(int i = 0; i < remove_count; i++) {
        int selected = i + rand() % (available_count - i);
        int die_index = available_dice[selected];
        available_dice[selected] = available_dice[i];
        available_dice[i] = die_index;
        target->dice[die_index].disabled = 1;
         printf("Player %d's Deny removes dice %d from Player %d.\n",
             player_num, die_index + 1, target_num);
    }
}

void resolve_early_super_power(SuperPower *power, Player *owner, Player *opponent,
                               int *helmets, int *shields, int *damage_dealt,
                               int player_num) {
    if(power->type == SUPER_POWER_NONE || power->priority >= NORMAL_DICE_PRIORITY ||
         power->type == SUPER_POWER_WEAKEN || power->type == SUPER_POWER_DENY ||
         owner->health <= 0) return;
    if(!pay_super_power(power, owner, player_num)) return;
     if(power->effect_level <= 0) return;

    if(power->type == SUPER_POWER_GUIDED_SHOT) {
        opponent->health -= power->shield_ignoring_damage;
        *damage_dealt += power->shield_ignoring_damage;
        printf("Player %d's Guided Shot deals %d damage, ignoring shields.\n",
               player_num, power->shield_ignoring_damage);
    } else if(power->type == SUPER_POWER_STONE_SKIN) {
        *helmets += power->helmet_bonus;
        *shields += power->shield_bonus;
        printf("Player %d's Stone Skin adds %d helmets and shields.\n",
               player_num, power->helmet_bonus);
    } else if(power->type == SUPER_POWER_VAMPIRISM) {
        printf("Player %d activates Vampirism (priority %d).\n",
               player_num, power->priority);
    } else if(power->type == SUPER_POWER_GRAND_THEFT) {
        printf("Player %d activates Grand Theft: +%d token(s) for each Hand dice rolled.\n",
               player_num, power->extra_tokens_per_hand);
    }
}

void resolve_late_super_power(SuperPower *power, Player *owner, Player *opponent,
                              int *damage_dealt, int player_num) {
    if(power->type == SUPER_POWER_NONE || power->priority <= NORMAL_DICE_PRIORITY ||
       owner->health <= 0) return;
    if(!pay_super_power(power, owner, player_num)) return;
    if(power->effect_level <= 0) return;

    if(power->type == SUPER_POWER_FLASH_STRIKE) {
        opponent->health -= power->direct_damage;
        *damage_dealt += power->direct_damage;
        printf("Player %d's Flash Strike deals %d damage.\n",
               player_num, power->direct_damage);
    } else if(power->type == SUPER_POWER_REGENERATION && owner->health > 0) {
        owner->health += power->flat_heal;
        if(owner->health > 20) owner->health = 20;
        printf("Player %d regenerates %d health. Health: %d\n",
               player_num, power->flat_heal, owner->health);
    }
}

SuperPower choose_super_power(Player *player, int player_num) {
    SuperPower power = { .type = SUPER_POWER_NONE, .priority = NO_POWER_PRIORITY };

    while(1) {
        printf("Player %d has %d tokens. Choose a Super Power by slot (S to surrender): ",
               player_num, player->tokens);
        for(int i = 0; i < 3; i++) {
             SuperPowerType selected_power = player->selected_powers[i];
             printf("%d. %s (priority %d), ", i + 1,
                 super_power_name(selected_power),
                 super_power_priority(selected_power));
        }
        printf("0. None: ");
        int loadout_choice;
        if(!read_player_choice(&loadout_choice)) return power;
        if(loadout_choice == -1) {
            power.type = SUPER_POWER_SURRENDER;
            return power;
        }
        if(loadout_choice == 0) return power;
        if(loadout_choice < 1 || loadout_choice > 3) {
            printf("Choose a slot from 1 to 3, or 0 for None.\n");
            continue;
        }

        int power_choice = player->selected_powers[loadout_choice - 1];

        int effect_choice;
        int cost;

        if(power_choice == SUPER_POWER_GUIDED_SHOT) {
            print_super_power_effects(SUPER_POWER_GUIDED_SHOT);
            printf("Choose tier (0. Back): ");
            if(!read_player_choice(&effect_choice)) return power;
            if(effect_choice == -1) {
                power.type = SUPER_POWER_SURRENDER;
                return power;
            }

            if(effect_choice == 0) continue;
            if(effect_choice == 1) {
                cost = 3;
                power.shield_ignoring_damage = 2;
            } else if(effect_choice == 2) {
                cost = 5;
                power.shield_ignoring_damage = 3;
            } else if(effect_choice == 3) {
                cost = 7;
                power.shield_ignoring_damage = 4;
            } else {
                printf("Invalid effect choice.\n");
                continue;
            }
            power.type = SUPER_POWER_GUIDED_SHOT;
            power.priority = 4;
        } else if(power_choice == SUPER_POWER_FLASH_STRIKE) {
            print_super_power_effects(SUPER_POWER_FLASH_STRIKE);
            printf("Choose tier (0. Back): ");
            if(!read_player_choice(&effect_choice)) return power;
            if(effect_choice == -1) {
                power.type = SUPER_POWER_SURRENDER;
                return power;
            }

            if(effect_choice == 0) continue;
            if(effect_choice == 1) {
                cost = 4;
                power.direct_damage = 2;
            } else if(effect_choice == 2) {
                cost = 8;
                power.direct_damage = 5;
            } else if(effect_choice == 3) {
                cost = 12;
                power.direct_damage = 8;
            } else {
                printf("Invalid effect choice.\n");
                continue;
            }
            power.type = SUPER_POWER_FLASH_STRIKE;
            power.priority = 6;
        } else if(power_choice == SUPER_POWER_REGENERATION) {
            print_super_power_effects(SUPER_POWER_REGENERATION);
            printf("Choose tier (0. Back): ");
            if(!read_player_choice(&effect_choice)) return power;
            if(effect_choice == -1) {
                power.type = SUPER_POWER_SURRENDER;
                return power;
            }

            if(effect_choice == 0) continue;
            if(effect_choice == 1) {
                cost = 4;
                power.flat_heal = 2;
            } else if(effect_choice == 2) {
                cost = 7;
                power.flat_heal = 4;
            } else if(effect_choice == 3) {
                cost = 10;
                power.flat_heal = 7;
            } else {
                printf("Invalid effect choice.\n");
                continue;
            }
            power.type = SUPER_POWER_REGENERATION;
            power.priority = 7;
        } else if(power_choice == SUPER_POWER_STONE_SKIN) {
            print_super_power_effects(SUPER_POWER_STONE_SKIN);
            printf("Choose tier (0. Back): ");
            if(!read_player_choice(&effect_choice)) return power;
            if(effect_choice == -1) {
                power.type = SUPER_POWER_SURRENDER;
                return power;
            }

            if(effect_choice == 0) continue;
            if(effect_choice == 1) {
                cost = 4;
                power.helmet_bonus = 1;
                power.shield_bonus = 1;
            } else if(effect_choice == 2) {
                cost = 7;
                power.helmet_bonus = 2;
                power.shield_bonus = 2;
            } else if(effect_choice == 3) {
                cost = 9;
                power.helmet_bonus = 3;
                power.shield_bonus = 3;
            } else {
                printf("Invalid effect choice.\n");
                continue;
            }
            power.type = SUPER_POWER_STONE_SKIN;
            power.priority = 4;
        } else if(power_choice == SUPER_POWER_VAMPIRISM) {
            print_super_power_effects(SUPER_POWER_VAMPIRISM);
            printf("Choose tier (0. Back): ");
            if(!read_player_choice(&effect_choice)) return power;
            if(effect_choice == -1) {
                power.type = SUPER_POWER_SURRENDER;
                return power;
            }

            if(effect_choice == 0) continue;
            if(effect_choice == 1) {
                cost = 6;
                power.heal_per_axe = 1;
            } else if(effect_choice == 2) {
                cost = 11;
                power.heal_per_axe = 2;
            } else if(effect_choice == 3) {
                cost = 16;
                power.heal_per_axe = 3;
            } else {
                printf("Invalid effect choice.\n");
                continue;
            }
            power.type = SUPER_POWER_VAMPIRISM;
            power.priority = 4;
        } else if(power_choice == SUPER_POWER_WEAKEN) {
            print_super_power_effects(SUPER_POWER_WEAKEN);
            printf("Choose tier (0. Back): ");
            if(!read_player_choice(&effect_choice)) return power;
            if(effect_choice == -1) {
                power.type = SUPER_POWER_SURRENDER;
                return power;
            }

            if(effect_choice == 0) continue;
            if(effect_choice == 1) {
                cost = 3;
            } else if(effect_choice == 2) {
                cost = 5;
            } else if(effect_choice == 3) {
                cost = 7;
            } else {
                printf("Invalid effect choice.\n");
                continue;
            }
            power.type = SUPER_POWER_WEAKEN;
            power.priority = 1;
        } else if(power_choice == SUPER_POWER_GRAND_THEFT) {
            print_super_power_effects(SUPER_POWER_GRAND_THEFT);
            printf("Choose tier (0. Back): ");
            if(!read_player_choice(&effect_choice)) return power;
            if(effect_choice == -1) {
                power.type = SUPER_POWER_SURRENDER;
                return power;
            }

            if(effect_choice == 0) continue;
            if(effect_choice == 1) {
                cost = 4;
            } else if(effect_choice == 2) {
                cost = 8;
            } else if(effect_choice == 3) {
                cost = 11;
            } else {
                printf("Invalid effect choice.\n");
                continue;
            }
            power.type = SUPER_POWER_GRAND_THEFT;
            power.priority = 3;
        } else if(power_choice == SUPER_POWER_DENY) {
            print_super_power_effects(SUPER_POWER_DENY);
            printf("Choose tier (0. Back): ");
            if(!read_player_choice(&effect_choice)) return power;
            if(effect_choice == -1) {
                power.type = SUPER_POWER_SURRENDER;
                return power;
            }

            if(effect_choice == 0) continue;
            if(effect_choice == 1) {
                cost = 3;
            } else if(effect_choice == 2) {
                cost = 6;
            } else if(effect_choice == 3) {
                cost = 9;
            } else {
                printf("Invalid effect choice.\n");
                continue;
            }
            power.type = SUPER_POWER_DENY;
            power.priority = 2;
        } else {
            printf("Invalid Super Power choice.\n");
            return power;
        }

        power.cost = cost;
        power.effect_level = effect_choice;
        if(power.type == SUPER_POWER_GUIDED_SHOT) {
            printf("Player %d selects Guided Shot (priority %d, cost %d).\n",
                   player_num, power.priority, power.cost);
        } else if(power.type == SUPER_POWER_FLASH_STRIKE) {
            printf("Player %d selects Flash Strike (priority %d, cost %d).\n",
                   player_num, power.priority, power.cost);
        } else if(power.type == SUPER_POWER_REGENERATION) {
            printf("Player %d selects Regeneration (priority %d, cost %d).\n",
                   player_num, power.priority, power.cost);
        } else if(power.type == SUPER_POWER_STONE_SKIN) {
            printf("Player %d selects Stone Skin (priority %d, cost %d).\n",
                   player_num, power.priority, power.cost);
        } else if(power.type == SUPER_POWER_VAMPIRISM) {
            printf("Player %d selects Vampirism (priority %d, cost %d).\n",
                   player_num, power.priority, power.cost);
        } else if(power.type == SUPER_POWER_WEAKEN) {
            printf("Player %d selects Weaken (priority %d, cost %d).\n",
                   player_num, power.priority, power.cost);
        } else if(power.type == SUPER_POWER_GRAND_THEFT) {
            printf("Player %d selects Grand Theft (priority %d, cost %d).\n",
                   player_num, power.priority, power.cost);
        } else {
            printf("Player %d selects Deny (priority %d, cost %d).\n",
                   player_num, power.priority, power.cost);
        }
        return power;
    }
}

int main() {
    srand(time(NULL));

    char replay_choice;
    do {
        Player p1 = { .health = 20, .tokens = 0 };
        Player p2 = { .health = 20, .tokens = 0 };
        int surrendered_by = 0;
        int first_player;

        printf("=== SUPER DICE BATTLE ===\n");
        printf("Both players start with 20 Health Stones. First to 0 loses!\n");
        print_game_rules();
        first_player = select_first_player(&surrendered_by);
        if(surrendered_by == 0) {
            printf("It's your turn, Player %d! You will roll first.\n", first_player);
            if(first_player == 1) {
                if(select_player_powers(&p1, 1)) surrendered_by = 1;
                if(surrendered_by == 0 && select_player_powers(&p2, 2)) {
                    surrendered_by = 2;
                }
            } else {
                if(select_player_powers(&p2, 2)) surrendered_by = 2;
                if(surrendered_by == 0 && select_player_powers(&p1, 1)) {
                    surrendered_by = 1;
                }
            }
        }

        int round = 1;
        while(p1.health > 0 && p2.health > 0 && surrendered_by == 0) {
        printf("\n*****************************\n");
        printf("          ROUND %d           \n", round);
        printf("*****************************\n");
        printf("Status -> P1 Health: %d (Tokens: %d) | P2 Health: %d (Tokens: %d)\n", 
               p1.health, p1.tokens, p2.health, p2.tokens);

        // 1. Turns, beginning with the current initiative holder.
        if(first_player == 1) {
            printf("It's Player 1's turn to roll.\n");
            if(player_turn(&p1, 1)) {
                surrendered_by = 1;
                break;
            }
            printf("It's Player 2's turn to roll.\n");
            if(player_turn(&p2, 2)) {
                surrendered_by = 2;
                break;
            }
        } else {
            printf("It's Player 2's turn to roll.\n");
            if(player_turn(&p2, 2)) {
                surrendered_by = 2;
                break;
            }
            printf("It's Player 1's turn to roll.\n");
            if(player_turn(&p1, 1)) {
                surrendered_by = 1;
                break;
            }
        }

        // 2. Super Power Selection
        printf("\n--- SUPER POWER PHASE ---\n");
        printf("Choose a Super Power and one of its effects.\n\n");

        printf("It's Player 1's Super Power turn.\n");
        SuperPower p1_power = choose_super_power(&p1, 1);
        if(p1_power.type == SUPER_POWER_SURRENDER) {
            surrendered_by = 1;
            break;
        }
        printf("It's Player 2's Super Power turn.\n");
        SuperPower p2_power = choose_super_power(&p2, 2);
        if(p2_power.type == SUPER_POWER_SURRENDER) {
            surrendered_by = 2;
            break;
        }

        // Token generation resolves for both players before other actions.
        int p1_tokens_gained = 0;
        for(int i = 0; i < 6; i++) {
            if(p1.dice[i].face == 5) p1_tokens_gained += 2;
        }

        int p2_tokens_gained = 0;
        for(int i = 0; i < 6; i++) {
            if(p2.dice[i].face == 5) p2_tokens_gained += 2;
        }

        p1.tokens += p1_tokens_gained;
        p2.tokens += p2_tokens_gained;

        int p1_damage_taken = 0;
        int p2_damage_taken = 0;

        // Weaken resolves first. If both players use it, initiative breaks the tie.
        if(first_player == 1) {
            resolve_weaken(&p1_power, &p1, 1, &p2_power, &p2, 2);
            resolve_weaken(&p2_power, &p2, 2, &p1_power, &p1, 1);
        } else {
            resolve_weaken(&p2_power, &p2, 2, &p1_power, &p1, 1);
            resolve_weaken(&p1_power, &p1, 1, &p2_power, &p2, 2);
        }

        if(first_player == 1) {
            resolve_deny(&p1_power, &p1, &p2, 1, 2);
            resolve_deny(&p2_power, &p2, &p1, 2, 1);
        } else {
            resolve_deny(&p2_power, &p2, &p1, 2, 1);
            resolve_deny(&p1_power, &p1, &p2, 1, 2);
        }

        // Count combat and Hand dice after priority-2 Deny resolves.
        int p1_axes = 0, p1_arrows = 0, p1_hands = 0;
        int p1_helmets = 0, p1_shields = 0;
        for(int i = 0; i < 6; i++) {
            if(p1.dice[i].disabled) continue;
            if(p1.dice[i].face == 0) p1_axes++;
            else if(p1.dice[i].face == 1) p1_arrows++;
            else if(p1.dice[i].face == 2) p1_helmets++;
            else if(p1.dice[i].face == 3) p1_shields++;
            else if(p1.dice[i].face == 4) p1_hands++;
        }

        int p2_axes = 0, p2_arrows = 0, p2_hands = 0;
        int p2_helmets = 0, p2_shields = 0;
        for(int i = 0; i < 6; i++) {
            if(p2.dice[i].disabled) continue;
            if(p2.dice[i].face == 0) p2_axes++;
            else if(p2.dice[i].face == 1) p2_arrows++;
            else if(p2.dice[i].face == 2) p2_helmets++;
            else if(p2.dice[i].face == 3) p2_shields++;
            else if(p2.dice[i].face == 4) p2_hands++;
        }

        // Powers faster than normal dice resolve first; ties go to Player 1.
        if(p1_power.priority <= p2_power.priority) {
            resolve_early_super_power(&p1_power, &p1, &p2, &p1_helmets,
                                      &p1_shields, &p2_damage_taken, 1);
            resolve_early_super_power(&p2_power, &p2, &p1, &p2_helmets,
                                      &p2_shields, &p1_damage_taken, 2);
        } else {
            resolve_early_super_power(&p2_power, &p2, &p1, &p2_helmets,
                                      &p2_shields, &p1_damage_taken, 2);
            resolve_early_super_power(&p1_power, &p1, &p2, &p1_helmets,
                                      &p1_shields, &p2_damage_taken, 1);
        }

        // Normal dice priority 5: axes resolve before arrows, Player 1 first.
        int p1_effective_axes = p1_axes - p2_helmets;
        if(p1_effective_axes < 0) p1_effective_axes = 0;

        int p2_effective_axes = p2_axes - p1_helmets;
        if(p2_effective_axes < 0) p2_effective_axes = 0;

        if(p1.health > 0 && p2.health > 0) {
            p2.health -= p1_effective_axes;
            p2_damage_taken += p1_effective_axes;
            if(p1_power.type == SUPER_POWER_VAMPIRISM && p1.health > 0) {
                int healing = p1_effective_axes * p1_power.heal_per_axe;
                p1.health += healing;
                if(p1.health > 20) p1.health = 20;
                printf("Player 1 heals %d from Vampirism. Health: %d\n", healing, p1.health);
            }
        }

        if(p2.health > 0 && p1.health > 0) {
            p1.health -= p2_effective_axes;
            p1_damage_taken += p2_effective_axes;
            if(p2_power.type == SUPER_POWER_VAMPIRISM && p2.health > 0) {
                int healing = p2_effective_axes * p2_power.heal_per_axe;
                p2.health += healing;
                if(p2.health > 20) p2.health = 20;
                printf("Player 2 heals %d from Vampirism. Health: %d\n", healing, p2.health);
            }
        }

        // Arrows resolve after axes and helmets, with shields applied.
        int p1_effective_arrows = p1_arrows - p2_shields;
        if(p1_effective_arrows < 0) p1_effective_arrows = 0;

        int p2_effective_arrows = p2_arrows - p1_shields;
        if(p2_effective_arrows < 0) p2_effective_arrows = 0;

        if(p1.health > 0 && p2.health > 0) {
            p2.health -= p1_effective_arrows;
            p2_damage_taken += p1_effective_arrows;
        }
        if(p2.health > 0 && p1.health > 0) {
            p1.health -= p2_effective_arrows;
            p1_damage_taken += p2_effective_arrows;
        }

        // Slower powers resolve after normal dice, ordered by priority.
        if(p1_power.priority <= p2_power.priority) {
            resolve_late_super_power(&p1_power, &p1, &p2, &p2_damage_taken, 1);
            resolve_late_super_power(&p2_power, &p2, &p1, &p1_damage_taken, 2);
        } else {
            resolve_late_super_power(&p2_power, &p2, &p1, &p1_damage_taken, 2);
            resolve_late_super_power(&p1_power, &p1, &p2, &p2_damage_taken, 1);
        }

        // Hands steal tokens last, with Player 1 resolving first.
        int p1_extra_per_hand = p1_power.type == SUPER_POWER_GRAND_THEFT &&
                    p1_power.cost_paid ? p1_power.extra_tokens_per_hand : 0;
        int p2_extra_per_hand = p2_power.type == SUPER_POWER_GRAND_THEFT &&
                    p2_power.cost_paid ? p2_power.extra_tokens_per_hand : 0;
        steal_tokens(&p1, &p2, p1_hands, p1_extra_per_hand);
        steal_tokens(&p2, &p1, p2_hands, p2_extra_per_hand);

        // Print Resolution Summary
        printf("\n=============================\n");
        printf("       RESOLUTION PHASE      \n");
        printf("=============================\n");
        printf("Player 1 dealt %d damage to Player 2.\n", p2_damage_taken);
        printf("Player 2 dealt %d damage to Player 1.\n", p1_damage_taken);
        printf("-----------------------------\n");
        printf("End of Round %d -> P1 Health: %d | P2 Health: %d\n", round, p1.health, p2.health);

        round++;
        first_player = first_player == 1 ? 2 : 1;
        printf("Player %d will roll first next round.\n", first_player);
        }

        printf("\n=============================\n");
        if(surrendered_by == 1) {
            printf("Player 1 surrendered. Player 2 wins!\n");
        } else if(surrendered_by == 2) {
            printf("Player 2 surrendered. Player 1 wins!\n");
        } else if(p1.health <= 0 && p2.health <= 0) {
            printf("It's a tie! Both players fell in battle.\n");
        } else if(p1.health <= 0) {
            printf("🏆 PLAYER 2 WINS THE GAME! CHEER! 🏆\n");
        } else {
            printf("🏆 PLAYER 1 WINS THE GAME! CHEER! 🏆\n");
        }

        printf("Play again? (y/n): ");
        char replay_input[16];
        if(fgets(replay_input, sizeof(replay_input), stdin) == NULL) {
            replay_choice = 'n';
        } else {
            replay_choice = replay_input[0];
        }
    } while(replay_choice == 'y' || replay_choice == 'Y');

    return 0;
}