#include <stdio.h>

int main()
{
    float width=0,length=0,area_each=0,area=0,length2=0;
    int n=0;

    while(width<=0 || length <=0 || n<=0)
    {
        printf("Enter width : ");
        scanf("%f",&width);
        printf("Enter length : ");
        scanf("%f",&length);
        printf("Enter number of areas (n) : ");
        scanf("%d",&n);
        if(width>0 && length >0 && n>0)
        {   
            break;
        }
        printf("Error input\n");

    }
        if(width > length)
        {
        length2 = width;
        width = length;
        length = length2;
        }

        area = width * length ;
        area_each = area / n ;

        printf("Width : %.2f",width);
        printf("\nLength : %.2f",length);
        printf("\nArea for each n  : %.2f",area_each);
    

        return 0;



}