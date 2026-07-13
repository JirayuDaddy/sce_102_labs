#include <stdio.h>

int main() 
{
    
    int age = 18;          
    float gpa = 3.75;      
    char grade = 'A';     
 
    printf("Student Age: %d years old\n", age);
    printf("Student GPA: %.2f\n", gpa); // %.2f คือแสดงทศนิยม 2 ตำแหน่ง
    printf("Programming Grade: %c\n", grade);

    return 0;
}