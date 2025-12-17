#include <stdio.h>

void guessNum(int num) {
    if (num == 555) {
        printf("Correct!\n");
    } else {
        printf("WRONG\n");
    }
}

int main() {
    guessNum(400);
    guessNum(500);
    guessNum(555);
    return 0;
}