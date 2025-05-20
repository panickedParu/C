/*Create a structure named Book to store book details like title, author, and price.
Write a C program to input details for three books, find the most expensive and the
lowest priced books, and display their information.*/


#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    int price;
};

int main() {
    struct Book books[3];
    for(int i=0;i<3;i++) {
        printf("Enter the name of book %d: ",i+1);
        fgets(books[i].title,sizeof(books[i].title),stdin);
        books[i].title[strcspn(books[i].title,"\n")]='\0';
        printf("Enter the author of book %d: ",i + 1);
        fgets(books[i].author,sizeof(books[i].author),stdin);
        books[i].author[strcspn(books[i].author,"\n")]='\0';

        printf("Enter the price of book %d: ",i+1);
        scanf("%d",&books[i].price);
        getchar();
    }


    int maxIndex=0,minIndex=0;

    for (int i=1;i<3;i++) {
        if(books[i].price>books[maxIndex].price) {
            maxIndex=i;
        }
        if(books[i].price<books[minIndex].price) {
            minIndex=i;
        }
    }
    printf("\nMost expensive book:\n");
    printf("Title: %s\n", books[maxIndex].title);
    printf("Author: %s\n", books[maxIndex].author);
    printf("Price: %d\n", books[maxIndex].price);

    printf("\nLeast expensive book:\n");
    printf("Title: %s\n", books[minIndex].title);
    printf("Author: %s\n", books[minIndex].author);
    printf("Price: %d\n", books[minIndex].price);

    return 0;
}
