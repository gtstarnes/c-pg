#include <stdio.h>


int main() {
    int num = 2;
    int * sum = &num;
    *sum += 2;
    printf("Num: %d", num);
    return 0;
}