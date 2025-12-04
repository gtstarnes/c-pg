#include <stdio.h>

int main() {
    int grades[3];
    grades[0] = 80;
    grades[1] = 90;
    grades[2] = 85;
    int sum = grades[0] + grades[1] + grades[2];
    float avg = sum / 3;
    printf("Student avg: %f", avg);

    return 0;
}