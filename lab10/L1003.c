#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    char s1[100];
    char s2[100]; 

    printf("Enter your fuul name (s1) : ");
    gets(s1);
    printf("Enter your fuul name again (s2) : ");
    gets(s2);

    printf("\nBefore\n");
    puts(s1);
    puts(s2);

    strcpy(s2, "No Data");

    printf("\nAfter\n");
    puts(s1);
    puts(s2);
    
    return 0 ;

}