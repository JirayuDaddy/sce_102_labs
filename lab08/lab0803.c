#include <stdio.h>
#include <stdlib.h>

float avgheight(float sum,float i)
{
       float avg;
       avg = sum/(i);
       return avg;
}

int main()
{
    int i;
    float ppl[30],sum=0,avg,age;
    for(i=0;i<=29;i++)
    {
        printf("Enter height for student #%d : ",i+1);
        scanf("%f",&age);
        if(age<0)
        {
            break;
        }
        else
        {
            ppl[i] = age;
            sum += ppl[i];
        }
    }
    avg = avgheight(sum,i);
    printf("Average height is %.2f\n",avg);
    printf("Number of students is %d",i);
    return 0;
}