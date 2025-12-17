#include <stdio.h>
#include <string.h>

int main() {
    char first[20] = "Jimothy";
    char last[5] = "Smith";
    printf("Hello, %s", strncat(first,last,5));
    return 0;
}