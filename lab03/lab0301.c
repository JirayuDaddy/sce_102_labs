#include <stdio.h>

int main()
{
    int n1=0,n2=0;
    float f1=0,f2=0;
    printf("Enter n1 : ");
    scanf("%d",&n1);
    printf("\nEnter n2 : ");
    scanf("%d",&n2);
    printf("\nEnter f1 : ");
    scanf("%f",&f1);
    printf("\nEnter f2 : ");
    scanf("%f",&f2);



    printf("\nResults\n");
    printf("%d + %d = %.2f\n",n1,n2,(float) n1+n2);
    printf("%d - %d = %.2f\n",n1,n2,(float) n1-n2);
    printf("%d * %d = %.2f\n",n1,n2,(float) n1*n2);
    printf("%d / %d = %.2f\n",n1,n2,(float) n1/n2);
    printf("%d %% %d = %.2f\n",n1,n2,(float) n1%n2);


    // ตรงนี้ทำไมมันแสดงผลเป็นหลายตำแหน่งไม่รู้ครับ
    printf("\n%.2f + %.2f = %.2f\n",f1,f2,f1+f2);
    printf("%.2f - %.2f = %.2f\n",f1,f2,f1-f2);
    printf("%.2f * %.2f = %.2f\n",f1,f2,f1*f2);
    printf("%.2f / %.2f = %.2f",f1,f2,f1/f2);

    return 0;
}