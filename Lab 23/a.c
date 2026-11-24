/*1. Read a data into Student structure (roll number, name and backlogs) and store the data in to student.txt
file. Now open a file in read mode and find out a students’ roll number who has more than 5 backlogs.*/

#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int backlogs;
};

int main() {
    struct Student s;
    FILE *fp;
    int n, i;

    fp = fopen("student.txt", "w");
    if (fp == NULL) {
        printf("File not opened!");
        return 0;
    }

    printf("How many students? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter Roll No: ");
        scanf("%d", &s.roll);
        printf("Enter Name: ");
        scanf("%s", s.name);
        printf("Enter Backlogs: ");
        scanf("%d", &s.backlogs);

        fprintf(fp, "%d %s %d\n", s.roll, s.name, s.backlogs);
    }
    fclose(fp);

    // Now open in read mode
    printf("\n--- Students with more than 5 backlogs ---\n");
    fp = fopen("student.txt", "r");
    while (fscanf(fp, "%d %s %d", &s.roll, s.name, &s.backlogs) != EOF) {
        if (s.backlogs > 5) {
            printf("Roll No: %d | Name: %s | Backlogs: %d\n", s.roll, s.name, s.backlogs);
        }
    }
    fclose(fp);

    return 0;
}