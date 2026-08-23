<<<<<<< HEAD
#include <stdio.h>
#include <math.h>

int main(){
    int n,ans;
    char choice;
    printf("Equation :: ans = 15/2+3-(14*n)\n");
    printf("Enter n:");
    scanf("%d", &n);
    printf("Choices:\n");
    printf("a) -400\n");
    printf("b) -410\n");
    printf("c) -420\n");
    printf("d) -4100\n");
    printf("Enter your answer:");
    scanf(" %c", &choice);
    if(choice == 'b'){
        printf("Correct answer!");
    }
    else{
        printf("wrong answer\n");
    }
    return 0;
=======
#include <stdio.h>
#include <math.h>

int main(){
    int n,ans;
    char choice;
    printf("Equation :: ans = 15/2+3-(14*n)\n");
    printf("Enter n:");
    scanf("%d", &n);
    printf("Choices:\n");
    printf("a) -400\n");
    printf("b) -410\n");
    printf("c) -420\n");
    printf("d) -4100\n");
    printf("Enter your answer:");
    scanf(" %c", &choice);
    if(choice == 'b'){
        printf("Correct answer!");
    }
    else{
        printf("wrong answer\n");
    }
    return 0;
>>>>>>> b49dcfd2d22634d610dba96f1da2ad43d5909583
}