#include <stdio.h>

int main() {
    int grades[3][3] = {
        {100, 95, 90},
        {90, 85, 80},
        {80, 75, 70}
    };
    int grade = grades[0][1];
    printf("Student grade: %d", grade);
    return 0;
}