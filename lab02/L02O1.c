#include <stdio.h> 
#include <stdlib.h> 
 
int main() 
{ 
    int age; 
    float height; 
    char grade; 
    printf("Enter age: "); 
    scanf("%d", &age); 
    printf("Enter height: "); 
    scanf("%f", &height); 
    printf("Enter grade: "); 
    scanf(" %c", &grade); 
    printf("age = %d\n",age);
    printf("height = %.2f\n",height);
    printf("grade = %c\n",grade);
    return 0; 
}