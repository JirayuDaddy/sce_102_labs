#include <stdio.h>

int main() {
    char s1[6] = {'D', 'i', 'a', 'n', 'a', '\0'};
    char s2[6] = "Diana";

    printf("%s\n", s1);
    printf("%s\n", s2);

    return 0;
}