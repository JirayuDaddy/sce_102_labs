#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=0,ans=0;
    char choice;
    printf("Equation :: ans = 15 / 2 + 3 - (14 * n)");
    printf("\nEnter n: ");
    scanf("%d",&n);
    printf("Choices:");
    ans = 15/2+3-(14*n);
    printf("\na) %d",ans+20);
    printf("\nb) %d",ans+10);
    printf("\nc) %d",ans);
    printf("\nd) %d",(ans+10)*10);
    printf("\n\nEnter your answer: ");
    scanf(" %c",&choice);
    if(choice == 'c'){
        printf("Correct answer!");
    }
    else{
        printf("Wrong answer");
    }
    return 0;
}