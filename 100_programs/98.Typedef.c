#include<stdio.h>
#include<string.h>
typedef struct Books{
    char title[50];
    char author[50];
}Book;
int main(){
Book book;
strcpy(book.title,"C programming");
strcpy(book.author,"Dennis Ritchie");

printf("Book title : %s\n",book.title);
printf("Book author  : %s\n",book.author);
return 0;
}