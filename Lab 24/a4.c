// 4. Allocate dynamic memory for structure variable.

#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student *s;

    // Allocate memory for 1 structure
    s = (struct Student *)malloc(sizeof(struct Student));

    printf("Enter Roll: ");
    scanf("%d", &s->roll);
    printf("Enter Name: ");
    scanf("%s", s->name);
    printf("Enter Marks: ");
    scanf("%f", &s->marks);

    printf("\nRoll: %d | Name: %s | Marks: %.2f\n", s->roll, s->name, s->marks);

    free(s);
    return 0;
}