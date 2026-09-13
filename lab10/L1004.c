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

    strcat(s1,s2);

    printf("\nAfter\n");
    puts(s1);

    int num = strlen(s1);
    printf("There are %d charcters in s1",num);
    
    return 0 ;

}