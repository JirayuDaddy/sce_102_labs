#include <stdio.h>

int main()
{
    int age;
    
    for(int i=0;i < 10; ++i){
    printf("Enter age for person #%d: ",i+1);
    scanf("%d", &age);
    if(age < 0){
        printf("ERROR!\n");
    }

    


    }
    printf("------");

    
    return 0 ;

}
