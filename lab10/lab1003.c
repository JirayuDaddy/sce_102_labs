#include <stdio.h>
#include <string.h>
char s1[100];
char s2[100];
int main(){
    printf("Enter your string (s1):  ");
    gets(s1);
    printf("Enter your string (s2):  ");
    gets(s2);
    printf("\nBefore\n");
    puts(s1);
    puts(s2);
    printf("\nAfter\n");
    puts(s1);
    strcpy(s2,"No Data");
    puts(s2);
    return 0;
}