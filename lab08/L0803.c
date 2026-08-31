#include <stdio.h>
#include <stdlib.h>

float hei_st(float h[], float n)
{
    float fuk = 0;
    for (int i = 0; i < n; i++)
    {
        fuk += h[i];
    }
    float Avg = fuk / n;
    return Avg;
}

int main()
{

    float h[30];
    int num = 0;
    float Average;
    float Aver_hei;

    while (num <= 30)
    {
        printf("Enter height for student #%d : ", num + 1);
        scanf("%f", &Average);

        if (Average <= 0)
        {
            break;
        }
        h[num] = Average;
        num++;
    }

    printf("\n");

    Aver_hei = hei_st(h, num);
    printf("Average height is %.2f \n", Aver_hei);
    printf("Number of students is %d ", num);

    return 0;
}
