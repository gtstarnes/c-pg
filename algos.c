#include <stdio.h>

int getMin(int x[], int len){
    int min = x[0];
    for (int i = 1; i < len; i++) {
        if (x[i] < min) {
            min = x[i];
        }
    }

    return min;
}

int getMax(int x[], int len){
    int max = x[0];
    for (int i = 1; i < len; i++) {
        if (x[i] > max) {
            max = x[i];
        }
    }

    return max;
}

int main() {
    int a[50];
    for (int i = 0; i < 50; i++) {
        a[i] = i + 1;
    }
    int len = sizeof(a) / sizeof(a[0]);

    printf("The Max is: %d\n", getMax(a, len));
    printf("The Min is: %d\n", getMin(a, len));
}