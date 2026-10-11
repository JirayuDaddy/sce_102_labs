#include <stdio.stdio.h>
#include <stdio.h>

struct car {
    char color[50];
    float max_speed;
    float weight;
    float fuel_tank;
    int car_type;
};

int main() {
    struct car cars[3];

    printf("Enter properties for 3 cars\n");
    printf("---------------------------\n");

    for (int i = 0; i < 3; i++) {
        printf("Car #%d\n", i + 1);
        printf("Enter color: ");
        scanf("%s", cars[i].color);
        printf("Enter max speed: ");
        scanf("%f", &cars[i].max_speed);
        printf("Enter weight: ");
        scanf("%f", &cars[i].weight);
        printf("Enter fuel tank: ");
        scanf("%f", &cars[i].fuel_tank);
        printf("Car type: ");
        scanf("%d", &cars[i].car_type);
        printf("\n");
    }

    printf("Entered properties\n");
    printf("---------------------------\n");

    for (int i = 0; i < 3; i++) {
        printf("Car #%d properties\n", i + 1);
        printf("-------------------\n");
        printf("Color = %s\n", cars[i].color);
        printf("Max Speed = %.2f\n", cars[i].max_speed);
        printf("Weight = %.2f\n", cars[i].weight);
        printf("Fuel Tank = %.2f\n", cars[i].fuel_tank);
        printf("Car Type = %d\n", cars[i].car_type);
    }

    return 0;
}