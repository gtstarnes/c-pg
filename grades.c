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
    printf("Student grades: %d", nums[1][2]);

    return 0;
}