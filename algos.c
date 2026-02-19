#include <stdio.h>

int getMin(int a[]){
    int min = a[0];
    int len = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < len; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }

    return min;
}

int main() {
    int a[50];
    for (int i = 0; i < 50; i++) {
        a[i] = i + 1;
    }
}