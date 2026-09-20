#include <stdio.h>
#include <string.h>

struct car
{
    char color [50];
    float maxspeed;
    float weight;
    float fueltank;
    int cartype;
};
void newline_remover(char *stpid_new_line)
{
    stpid_new_line[strcspn(stpid_new_line, "\n")] = '\0';
}
void clear_input(void)
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}
int main()
{
    struct car cars[3];

    printf("Enter properties for 3 car\n");
    printf("----------------------------\n");

    for(int i = 0 ; i < 3 ; i++)
    {
        printf("Car #%d\n", i + 1);
        printf("Enter color: ");
        fgets(cars[i].color, sizeof(cars[i].color), stdin);
        newline_remover(cars[i].color);
        printf("Enter max speed: ");
        scanf("%f", &cars[i].maxspeed);
        printf("Enter weight: ");
        scanf("%f", &cars[i].weight);
        printf("Enter fuel tank: ");
        scanf("%f", &cars[i].fueltank);
        printf("Car type: ");
        scanf("%d", &cars[i].cartype);
        clear_input();
        printf("\n");
    }

    for(int i = 0 ; i < 3 ; i++)
    {
        printf("Car #%d\n", i + 1);
        printf("Color = %s\n", cars[i].color);
        printf("Max Speed = %.2f\n", cars[i].maxspeed);
        printf("Weight = %.2f\n", cars[i].weight);
        printf("Fuel Tank = %.2f\n", cars[i].fueltank);
        printf("Car Type = %d\n\n", cars[i].cartype);
    }

    return 0;
}