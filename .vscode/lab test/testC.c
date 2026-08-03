#include <stdio.h>

int main() {
    int ItemID, total;
    float Price,total_Price;
    char Name;
  
    printf("Name: ");
    scanf("%c", &Name);

    printf("Enter ItemID: ");
    scanf("%d", &ItemID);
    
    printf("Enter Price: ");
    scanf("%f", &Price);
    printf("Enter total:");
    scanf("%d", &total);

  
   
    printf("|ItemID |Name |price |Qty |\n");
    
     printf("%6d%5c%10.2f%6d\n",ItemID,Name,Price,total);
   
    total_Price = Price * total;
    printf("\n");
    
  
    printf("Total Price %.2f THB\n", total_Price);
    
    return 0;
}