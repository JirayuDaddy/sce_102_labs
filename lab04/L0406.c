#include <stdio.h>
#include <stdlib.h>

    int main(){

        int fam_num;
        float width, length, recive_land;
        

        printf("Baan Sai Thong\n\n");
        printf("Enter land width: ");
        scanf("%f", &width);
        
        printf("Enter land length: ");
        scanf("%f", &length);
        
        printf("Enter number of family members: ");
        scanf("%d", &fam_num);

        if(recive_land = (width * length) / fam_num <= 0){
            printf("Error inputs");
        }
        else if(recive_land = (width * length) / fam_num < 50){
            printf("Each member will receive a %.4f sq.m of land", recive_land = (width * length) / fam_num);
            printf("\nNot optimal for family member.");
        }
        else{
            printf("Each member will receive a %.4f sq.m of land", recive_land = (width * length) / fam_num);
        }
        
        

        


    return 0;
}

