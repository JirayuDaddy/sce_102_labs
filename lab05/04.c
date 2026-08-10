#include <stdio.h>

int main() {
float width, length, n;
float area, temp;
while (1) {
printf("Enter width: ");
scanf("%f", &width);
printf("Enter length: ");
scanf("%f", &length);
printf("Enter number of areas (n): ");
scanf("%f", &n);
if (width <= 0 || length <= 0 || n <= 0) {
printf("Error input\n\n");
} else {
break;
}
}
if (width > length) {
temp = width;
width = length;
length = temp;
}
area = (width * length) / n;
printf("\nWidth :: %.2f\n", width);
printf("Length :: %.2f\n", length);
printf("Area for each n :: %.2f\n", area);
return 0;
}