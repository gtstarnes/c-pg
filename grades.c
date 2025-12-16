#include <stdio.h>

float calcAvg(int grades[], int size) {
    int gradeSum;
    for (int i = 0; i < size; i++) {
        gradeSum += grades[i];
    }
    return gradeSum / size;
}

int main() {
    int grades[3][3] = {
        {90, 95, 100},
        {80, 85, 90},
        {70, 75, 80}
    };
    return 0;
}