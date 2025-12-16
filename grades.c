#include <stdio.h>

float calcAvg(int grades[], int size) {
    int gradeSum=0;
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

    for (int i = 0; i < 3; i++) {
        float classAvg = calcAvg(grades[i], 3);
        printf("The Student's avg is: %f.\n", classAvg);
    }
    return 0;
}