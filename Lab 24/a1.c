// 1. Allocate and de-allocate memory for int, char and float variable at run time.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;
    char *ch;
    float *f;

    // Allocate memory
    p = (int *)malloc(sizeof(int));
    ch = (char *)malloc(sizeof(char));
    f = (float *)malloc(sizeof(float));

    *p = 10;
    *ch = 'P';
    *f = 99.5;

    printf("Int = %d\n", *p);
    printf("Char = %c\n", *ch);
    printf("Float = %.2f\n", *f);

    // De-allocate memory
    free(p);
    free(ch);
    free(f);
    printf("\nMemory Freed Successfully!");

    return 0;
}