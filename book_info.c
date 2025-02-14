#include<stdio.h>



struct book

{

    char title[40];

    int pages;

    float price;

    int ratings;

};



int main()
{

    struct book book1;

    printf("Enter Book Title: ");

    gets(book1.title);

    printf("Enter Book Pages:");

    scanf("%d", &book1.pages);

    printf("Enter Book Price:");

    scanf("%f", &book1.price);

    printf("Enter Book Ratings:");

    scanf("%d", &book1.ratings);

    

    printf("\nBook using simple structure variable.\n");

    printf("Book Title: %s\n", book1.title);

    printf("Book Pages: %d\n", book1.pages);

    printf("Book Price: %f\n", book1.price);

    printf("Book Ratings: %i\n", book1.ratings); 
}
