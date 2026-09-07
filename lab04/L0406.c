<<<<<<< HEAD
#include <stdio.h>
#include <math.h>

int main(){
    int members;
    float width,length;
    printf("Baan Sai Thong\n");
    printf("Enter land width: \n");
    scanf("%f", &width);
    printf("Enter land length: \n");
    scanf("%f", &length);
    printf("Enter number of family members: \n");
    scanf("%d", &members);
    if(width <= 0 || length <= 0 || members <= 0){
        printf("Error inputs\n");
    }
    else{
        float total_area = width*length;
        float area_per_member = total_area/members;
        printf("Each member will receive a %.4f sp.m. of land\n", area_per_member);
    if(area_per_member < 50){
        printf("Not optimal for family members");
    }
}
return 0;
=======
#include <stdio.h>
#include <math.h>

int main(){
    int members;
    float width,length;
    printf("Baan Sai Thong\n");
    printf("Enter land width: \n");
    scanf("%f", &width);
    printf("Enter land length: \n");
    scanf("%f", &length);
    printf("Enter number of family members: \n");
    scanf("%d", &members);
    if(width <= 0 || length <= 0 || members <= 0){
        printf("Error inputs\n");
    }
    else{
        float total_area = width*length;
        float area_per_member = total_area/members;
        printf("Each member will receive a %.4f sp.m. of land\n", area_per_member);
    if(area_per_member < 50){
        printf("Not optimal for family members");
    }
}
return 0;
>>>>>>> b49dcfd2d22634d610dba96f1da2ad43d5909583
}