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
// Allocate memory using calloc()

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    char *ch;
    float *f;

    // Allocate memory
    p = (int *)calloc(1, sizeof(int));
    ch = (char *)calloc(1, sizeof(char));
    f = (float *)calloc(1, sizeof(float));

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

// Allocate and resize memory using realloc()

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;

    // Allocate memory for 2 integers
    p = (int *)malloc(2 * sizeof(int));

    if (p == NULL)
    {
        printf("Memory Allocation Failed!");
        return 1;
    }

    p[0] = 10;
    p[1] = 20;

    printf("Before Realloc:\n");
    printf("%d %d\n", p[0], p[1]);

    // Resize memory for 4 integers
    int *temp = (int *)realloc(p, 4 * sizeof(int));

    if (temp == NULL)
    {
        free(p);
        printf("Memory Reallocation Failed!");
        return 1;
    }

    p = temp;

    p[2] = 30;
    p[3] = 40;

    printf("\nAfter Realloc:\n");

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", p[i]);
    }

    // De-allocate memory
    free(p);

    printf("\n\nMemory Freed Successfully!");

    return 0;
}
