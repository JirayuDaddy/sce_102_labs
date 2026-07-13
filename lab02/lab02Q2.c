#include <stdio.h>
#include <stdlib.h> 
int main() 
{ 
    int length; 
    printf("Enter length in centimeters: "); 
    scanf("%d", &length); 
    printf("%.2f centimeters = %.2f millimeters, %.2f meters, %.2f inches", (float)length, length * 10.0, length / 100.0, length / 2.54); 
    return 0; }