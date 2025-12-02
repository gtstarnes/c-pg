#include <stdio.h>

int main() {
    int a = 10;
    int * b = &a;
    *b -= 1;
    printf("This is a: %d", a);
    return 0;
}