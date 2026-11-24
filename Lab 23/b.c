/*1. Now modify the backlogs of any 1 student to 3 and store the data into file again and verify the data
stored into file by printing onto console.*/

#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int backlogs;
};

int main() {
    struct Student s[50];
    FILE *fp;
    int n = 0, i, searchRoll;

    // Read all data from file
    fp = fopen("student.txt", "r");
    if (fp == NULL) {
        printf("File not found!");
        return 0;
    }
    while (fscanf(fp, "%d %s %d", &s[n].roll, s[n].name, &s[n].backlogs) != EOF) {
        n++;
    }
    fclose(fp);

    printf("Enter Roll No to modify backlog to 3: ");
    scanf("%d", &searchRoll);

    for (i = 0; i < n; i++) {
        if (s[i].roll == searchRoll) {
            s[i].backlogs = 3;
            printf("Updated Roll %d backlog to 3\n", searchRoll);
        }
    }

    // Store again into file
    fp = fopen("student.txt", "w");
    for (i = 0; i < n; i++) {
        fprintf(fp, "%d %s %d\n", s[i].roll, s[i].name, s[i].backlogs);
    }
    fclose(fp);

    // Verify - Print on console
    printf("\n--- Verify Data From File ---\n");
    fp = fopen("student.txt", "r");
    while (fscanf(fp, "%d %s %d", &s[0].roll, s[0].name, &s[0].backlogs) != EOF) {
        printf("Roll: %d | Name: %s | Backlogs: %d\n", s[0].roll, s[0].name, s[0].backlogs);
    }
    fclose(fp);

    return 0;
}