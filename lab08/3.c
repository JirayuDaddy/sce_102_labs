#include <stdio.h>

int main() {

    int age[10] ={};

    for (int i = 1; i <= 10; i++) {
        printf("Enter age for person %d: ", i);
        scanf("%d", &age[i-1]);
        
        if ( age[i-1] < 0)
        {printf("Error\n");
            
        }
    }
        
        printf("--------\n");
        
       for (int i = 10; i >= 1; i--){
       printf("Person #%d age %d\n" ,i ,age[i-1] );       
       }
        

    

    return 0;
}
