#include <stdio.h>
#include <stdlib.h>

int main(){
<<<<<<< HEAD
    float width, length, area;
=======
    float width,length,area;
>>>>>>> b49dcfd2d22634d610dba96f1da2ad43d5909583
    int n;
    do{
    printf("Enter width: ");
    scanf("%f",&width);
    printf("Enter length:: ");
    scanf("%f",&length);
    printf("Enter number of areas (n): ");
    scanf("%d",&n);
<<<<<<< HEAD
    if(width <=0||length <=0||n <=0){
        printf("Error input\n\n");
    }
    
    }while(width <=0||length <=0||n <=0);
        if(width>length){
            float length,width;
            length=width;
        }
        area=(width*length)/n;
=======
    if(wid<=0||length<=0||n<=0){
        printf("Error input\n\n");
    }
    
    }while(wid<=0||length<=0||n<=0);
        if(width>length){
            float s=lenght;
            lenght=width;
            width=s;
        }
        area=(wid*len)/n;
>>>>>>> b49dcfd2d22634d610dba96f1da2ad43d5909583
        printf("\nWidth :: %.2f\n", width);
        printf("Length :: %.2f\n", length);
        printf("Area for each n :: %.2f\n", area);
        return 0;
    }