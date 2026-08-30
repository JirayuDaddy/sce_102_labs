#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float height [30];
int stu;

float avg(float a[], int n)
{
    float sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum/n;
}   

int main()
{
    for(stu=0;stu<30;stu++)
    {
        printf("Enter the height of student %d: ", stu + 1);
        scanf("%f",&height[stu]);
        if(height[stu]<= 0){
            break;
        }
    }
    float sum = avg(height, stu);
    printf("The average height is: %.2f\n", sum);
    printf("number of students: %d\n", stu);
    
    return 0;
}