#include <stdio.h>
#include <time.h>

int main() {
    int birth_y, age;
    time_t cur_year = time(NULL);
    printf("Enter your birth year: ");
    scanf("%d", &birth_y);
    struct tm *local_y = localtime(&cur_year);
    age = local_y->tm_year + 1900 - birth_y;
    printf("Your age is: %d\n", age);

    return 0;
}