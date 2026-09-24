#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct car {
    char color[50];
    float maxSpeed;
    float weight;
    float fuelTank;
    int carType;
};

int main(){
    struct car factory[100]; 
    char engine_choice;
    int type_choice, amount;
    char color_list[4][10] = {"Black", "White", "Red", "Blue"};
    srand(time(NULL));

    printf("Car Assembly Line\n");
    printf("-----------------\n");
    printf("Select engine (A, B, or C): ");
    scanf(" %c", &engine_choice);
    printf("Select car type (1 or 2): ");
    scanf("%d", &type_choice);
    printf("How many to make: ");
    scanf("%d", &amount);
    printf("\n");
    float eWeight = 0, bWeight = 0, mSpeed = 0, tSize = 0;
    if (engine_choice == 'A' || engine_choice == 'a') {
        mSpeed = 160.0;
        eWeight = 395.0;
    } else if (engine_choice == 'B' || engine_choice == 'b') {
        mSpeed = 110.0;
        eWeight = 250.8;
    } else { // ถ้าไม่ใช่ A หรือ B ก็ถือว่าเป็น C 
        mSpeed = 184.63;
        eWeight = 535.64;
    }
    if (type_choice == 1) {
        bWeight = 529.8;
        tSize = 44.32;
    } else { // ถ้าไม่ใช่ 1 ก็ถือว่าเป็น 2
        bWeight = 633.4;
        tSize = 57.46;
    }
    for (int i = 0; i < amount && i < 100; i++) {
        factory[i].maxSpeed = mSpeed;
        factory[i].weight = eWeight + bWeight; 
        factory[i].fuelTank = tSize;
        factory[i].carType = type_choice;
        int random_index = rand() % 4;
        strcpy(factory[i].color, color_list[random_index]);
    }
    int print_count = amount;
    if (amount > 5) {
        print_count = 5;
    }
    for (int i = 0; i < print_count; i++) {
        printf("Car #%d properties\n", i + 1);
        printf("-----------------\n");
        printf("Color = %s\n", factory[i].color);
        printf("Max Speed = %.2f\n", factory[i].maxSpeed);
        printf("Weight = %.2f\n", factory[i].weight);
        printf("Fuel Tank = %.2f\n", factory[i].fuelTank);
        printf("Car Type = %d\n\n", factory[i].carType);
    }
    return 0;
}