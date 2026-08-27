#include <stdio.h>

int main()
{
    int person[10];
    int age;
    for(int i=0;i<=9;i++)
    {
        printf("Enter age for person #%d : ",i+1);
        scanf("%d",&age);
        if(age < 0 )
        {
            printf("Error\n");
            i--;
            continue;
        }
        person[i] = age ;
    }
    for(int j = 9 ; j>=0; j--)
    {
        printf("Person #%d age %d\n",j,person[j]);
    }
    return 0;
    
}