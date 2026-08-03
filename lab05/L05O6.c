#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,s=1;
    printf("Enter the number for factorial: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        s=s*i;
        printf("%d ",i);
        if(i>1){
            printf("* ");
        }
    }
    printf("= %d\n",s);
    return 0;
}