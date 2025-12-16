#include <stdio.h>

float calcAvg(int grades[], int size) {
    int gradeSum;
    for (int i = 0; i < size; i++) {
        gradeSum += grades[i];
    }
    return gradeSum / size;
}

int main() {
    return 0;
}