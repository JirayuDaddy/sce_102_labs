#include <stdio.h>
#include <stdlib.h>
int main()
{
    int order;
    float price;
    char iname;
    printf("Snack shop \n\n");
    printf("Enter number of order : ");
    scanf("%d",&order);
    printf("enter price per order : ");
    scanf("%f",&price);
    printf("enter customer initial : ");
    scanf(" %c",&iname);
    printf("\nSnack price %f,ordered %d\n",price,order);
    printf("ordered by %c\n",iname);
    return 0;

}