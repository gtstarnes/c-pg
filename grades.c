#include <stdio.h>

int main() {
    int grades[3] = {80, 90, 85};
    int sum = grades[0] + grades[1] + grades[2];
    float avg = sum / 3;

    printf("The student's grade is: %f", avg);
    return 0;
}