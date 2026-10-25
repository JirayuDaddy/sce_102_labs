#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct car {
    char color[20];
    float max_speed;
    float weight;
    float fuel_tank;
    int car_type;
};

int main() {
    srand(time(NULL));

    char colors[4][20] = {"Black", "White", "Red", "Blue"};
    struct car cars[100];

    char engine;
    int car_type, num_cars;

    printf("Car Assembly Line\n");
    printf("-----------------\n");
    printf("Select engine (A, B, or C): ");
    scanf(" %c", &engine);
    printf("Select car type (1 or 2): ");
    scanf("%d", &car_type);
    printf("How many to make: ");
    scanf("%d", &num_cars);
    printf("\n");

    float engine_speed = 0.0, engine_weight = 0.0;
    if (engine == 'A' || engine == 'a') {
        engine_speed = 160.0;
        engine_weight = 395.0;
    } else if (engine == 'B' || engine == 'b') {
        engine_speed = 110.0;
        engine_weight = 250.8;
    } else if (engine == 'C' || engine == 'c') {
        engine_speed = 184.63;
        engine_weight = 535.64;
    }

    float body_weight = 0.0, fuel_tank = 0.0;
    if (car_type == 1) {
        body_weight = 529.8;
        fuel_tank = 44.32;
    } else if (car_type == 2) {
        body_weight = 633.4;
        fuel_tank = 57.46;
    }

    for (int i = 0; i < num_cars; i++) {
        int color_index = rand() % 4;
        
        int j = 0;
        while (colors[color_index][j] != '\0') {
            cars[i].color[j] = colors[color_index][j];
            j++;
        }
        cars[i].color[j] = '\0';

        cars[i].max_speed = engine_speed;
        cars[i].weight = engine_weight + body_weight;
        cars[i].fuel_tank = fuel_tank;
        cars[i].car_type = car_type;
    }

    int display_count = (num_cars < 5) ? num_cars : 5;

    for (int i = 0; i < display_count; i++) {
        printf("Car #%d properties\n", i + 1);
        printf("------------------\n");
        printf("Color = %s\n", cars[i].color);
        printf("Max Speed = %.2f\n", cars[i].max_speed);
        printf("Weight = %.2f\n", cars[i].weight);
        printf("Fuel Tank = %.2f\n", cars[i].fuel_tank);
        printf("Car Type = %d\n", cars[i].car_type);
        
        if (i < display_count - 1) {
            printf("\n");
        }
    }

    return 0;
}