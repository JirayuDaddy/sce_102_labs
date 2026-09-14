#include <stdio.h>

<<<<<<< HEAD
int main() {
    int enea1[12] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int *ene2 = enea1;

    printf("original ::: ");
    for (int ene3 = 0; ene3 < 12; ene3++) {
        printf("%d ", *(ene2 + ene3));
    }
    printf("\n");

    printf("multiplied ::: ");
    for (int ene3 = 0; ene3 < 12; ene3++) {
        printf("%d ", *(ene2 + ene3) * 24);
    }
    printf("\n");

=======
int main(){
    int num [12] = {5 ,6 ,7 ,8 ,9 ,10 ,11 ,12 ,13 ,14 ,15};
    int *p = num;
    printf("original :::");
    for(int i = 0;i < 12,i++){
        printf("%d",*(p+i));
    }
    printf("\nmultiplied :::");
    for(int i = 0;i < 12,i++){
        printf("%d",*(p+i)*24);
    }
>>>>>>> e96c5446dfea625192a6a2371622332869bb1cc4
    return 0;
}