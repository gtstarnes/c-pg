#include <stdio.h>

int main(){
    int sum = 0;
    int * num = &sum;
    *num += 2;
    printf("Sum = %d", sum);
    return 0;
}