#include <stdio.h>

int main()
{
    int age;
    float height;
    char grade;
    printf("Enter your age : ");
    scanf("%d",&age);
    printf("Enter your height : ");
    scanf("%f",&height);
    fflush(stdout);
    printf("Enter your grade : ");
    scanf(" %c",&grade);

    printf("\nAge : %d\n",age);
    printf("Height : %.2f\n",height);
    printf("Grade : %c\n",grade);

    return 0;
}