#include <stdio.h>

int main() {
    int a = 2;
    int *b = &a;
    *b += 1;
    printf("This is a now: %d", a);
    return 0;
}