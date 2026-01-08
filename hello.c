#include<stdio.h>
#include<string.h>


int main() {
    char name[20] = "Jeff ";
    char last[10] = "Smith";
    printf("Hello, %s", strcat(name, last));
    return 0;
}