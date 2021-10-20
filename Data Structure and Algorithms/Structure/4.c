#include<stdio.h>
#include<string.h>

typedef struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
}bookk;

void Display_1(bookk *book1)
{
    printf("Book 1 title: %s\n", (*book1).title);
    printf("Book 1 author: %s\n", (*book1).author);
    printf("Book 1 subject : %s\n", (*book1).subject);
    printf("Book 1 book_id : %d\n", (*book1).book_id);   
}

void Display_2(bookk *book1)
{
    printf("Book 1 title: %s\n", book1->title);
    printf("Book 1 author: %s\n", book1->author);
    printf("Book 1 subject : %s\n", book1->subject);
    printf("Book 1 book_id : %d\n", book1->book_id);   
}

int main()
{
    bookk book1,book2;

    // book 1 specification
    strcpy(book1.title, "C Progaramming");
    strcpy(book1.author, "Dipankar Porey");
    strcpy(book1.subject, "C Programing Tutorial");
    book1.book_id=7282637;

    // book 2 seccification
    strcpy(book2.title, "Telecom Billing");
    strcpy(book2.author, "Kunal Jana");
    strcpy(book2.subject, "Telecom Billing Tutorial");
    book2.book_id=7793783;

    // print book 1 details
    // passing address of book1
    Display_1(&book1);

    printf("\n**************************************\n");

    // print book 2 details
    // passing address of book2
    Display_2(&book2);

    return 0;

}