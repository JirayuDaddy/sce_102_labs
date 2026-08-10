#include <stdio.h>

int main() {
int choice;
printf("Available parts list\n");
printf("48. Radiator 240\n");
printf("61. X43 Alternator\n");
printf("99. B33 Battery\n\n");
printf("Select the part to inspect: ");
scanf("%d", &choice);
if (choice == 48) {
printf("Radiator 240 selected\n");
} else if (choice == 61) {
printf("X43 Alternator selected\n");
} else if (choice == 99) {
printf("B33 Battery selected\n");
} else {
printf("Error in part selection\n");
}

return 0;
}