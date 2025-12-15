#include <stdio.h>

int main() {
    int nums[3][3] = {
        {
            90, 95, 100
        },
        {
            80, 85, 90
        },
        {
            70, 75, 80
        }
    };

    int students = 3;
    int grades = 3;

    for (int i = 0; i < students; i++) {
        printf("Student's Highest Grade: %d\n", nums[i][2]);
    }

    return 0;
}