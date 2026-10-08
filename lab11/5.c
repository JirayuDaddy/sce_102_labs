#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#define MAX_CARS 100

struct car
{
    char color[50];
    float maxSpeed;
    float weight;
    float fuelTank;
    int carType;
};

int main()
{
    struct car line[MAX_CARS];
    const char *colors[4] = {"Black", "White", "Red", "Blue"};
    char engine;
    int type, n, i, show;
    float engSpeed, engWeight, frameWeight, tank;

    srand((unsigned)time(NULL));

    printf("Car Assembly Line\n");
    printf("-----------------------\n");

    /* เลือกเครื่องยนต์ */
    do
    {
        printf("Select engine (A, B, or C): ");
        scanf(" %c", &engine);
        engine = toupper(engine);
    } while (engine != 'A' && engine != 'B' && engine != 'C');

    /* เลือกชนิดรถ */
    do
    {
        printf("Select car type (1 or 2): ");
        scanf("%d", &type);
    } while (type != 1 && type != 2);

    /* จำนวนรถ (1-100) */
    do
    {
        printf("How many to make: ");
        scanf("%d", &n);
    } while (n < 1 || n > MAX_CARS);

    if (engine == 'A')      { engSpeed = 160;    engWeight = 395;    }
    else if (engine == 'B') { engSpeed = 110;    engWeight = 250.8;  }
    else                    { engSpeed = 184.63; engWeight = 535.64; }

    if (type == 1) { frameWeight = 529.8; tank = 44.32; }
    else           { frameWeight = 633.4; tank = 57.46; }

    /* ผลิตรถทุกคัน ค่าเหมือนกันหมด ยกเว้นสีที่สุ่ม */
    for (i = 0; i < n; i++)
    {
        strcpy(line[i].color, colors[rand() % 4]);
        line[i].maxSpeed = engSpeed;
        line[i].weight = engWeight + frameWeight;
        line[i].fuelTank = tank;
        line[i].carType = type;
    }

    /* แสดงผลไม่เกิน 5 คันแรก */
    show = (n < 5) ? n : 5;
    for (i = 0; i < show; i++)
    {
        printf("Car #%d properties\n", i + 1);
        printf("---------------\n");
        printf("Color = %s\n", line[i].color);
        printf("Max Speed = %.2f\n", line[i].maxSpeed);
        printf("Weight = %.2f\n", line[i].weight);
        printf("Fuel Tank = %.2f\n", line[i].fuelTank);
        printf("Car Type = %d\n", line[i].carType);
    }

    return 0;
}