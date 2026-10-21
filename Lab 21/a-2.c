// 2. Create a structure book with book title, author, publication, and price. Read data of 3 books and display

#include <stdio.h>

struct Book
{

    char s[10];
    int a[50];
    int publication;
    int price;
};
void main()
{

    struct Book b1;
    {
        printf("Enter the book title, author, publication, and pric: \n");
        scanf("%s %s %d %d", &b1.s, &b1.a, &b1.publication, &b1.price);
    }

    struct Book b2;
    {
        printf("Enter the book title, author, publication, and pric: \n");
        scanf("%s %s %d %d", &b2.s, &b2.a, &b2.publication, &b2.price);
    }

    struct Book b3;
    {
        printf("Enter the book title, author, publication, and pric: \n");
        scanf("%s %s %d %d", &b3.s, &b3.a, &b3.publication, &b3.price);
    }

    printf("%s %s %d %d\n", b1.s, b1.a, b1.publication, b1.price);
    printf("%s %s %d %d\n", b1.s, b1.a, b1.publication, b1.price);
    printf("%s %s %d %d", b1.s, b1.a, b1.publication, b1.price);
}
