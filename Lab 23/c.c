/*C Write following programs in C. (Function, Structure and File Handling)
1. Perform 23-A and 23-B using a function (Do not use a global structure variable)*/

#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int backlogs;
};

// Function Declaration
void writeData();
void findMoreThan5();
void modifyBacklog();
void displayAll();

int main() {
    writeData();      // 23-A Part 1
    findMoreThan5();  // 23-A Part 2
    modifyBacklog();  // 23-B
    displayAll();     // Verify
    return 0;
}

void writeData() {
    struct Student s; // Local variable, NOT global
    FILE *fp = fopen("student.txt", "w");
    int n, i;

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
    printf("Data Stored Successfully!\n");
}

void findMoreThan5() {
    struct Student s;
    FILE *fp = fopen("student.txt", "r");

    printf("\n--- Students with more than 5 backlogs ---\n");
    while (fscanf(fp, "%d %s %d", &s.roll, s.name, &s.backlogs) != EOF) {
        if (s.backlogs > 5) {
            printf("Roll: %d | Name: %s | Backlogs: %d\n", s.roll, s.name, s.backlogs);
        }
    }
    fclose(fp);
}

void modifyBacklog() {
    struct Student s[50];
    FILE *fp;
    int n = 0, i, searchRoll;

    fp = fopen("student.txt", "r");
    while (fscanf(fp, "%d %s %d", &s[n].roll, s[n].name, &s[n].backlogs) != EOF) {
        n++;
    }
    fclose(fp);

    printf("\nEnter Roll No to modify backlog to 3: ");
    scanf("%d", &searchRoll);

    for (i = 0; i < n; i++) {
        if (s[i].roll == searchRoll) {
            s[i].backlogs = 3;
        }
    }

    fp = fopen("student.txt", "w");
    for (i = 0; i < n; i++) {
        fprintf(fp, "%d %s %d\n", s[i].roll, s[i].name, s[i].backlogs);
    }
    fclose(fp);
    printf("Backlog Modified to 3!\n");
}

void displayAll() {
    struct Student s;
    FILE *fp = fopen("student.txt", "r");

    printf("\n--- Verify Final Data ---\n");
    while (fscanf(fp, "%d %s %d", &s.roll, s.name, &s.backlogs) != EOF) {
        printf("Roll: %d | Name: %s | Backlogs: %d\n", s.roll, s.name, s.backlogs);
    }
    fclose(fp);
}