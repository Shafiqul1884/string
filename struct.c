#include<stdio.h>
#include<string.h>
    struct Book{
      int id;
      char name[30];
      float price;
      struct Book *next;
    };

int main()
{
    struct Book book1, book2;
    book1.id = 1;
    strcpy(book1.name,"Data Structure 1");
    book1.price = 100.0;
    printf("The ID is %d\n",book1.id);
    printf("The Name is %s\n",book1.name);
    printf("The price is %f\n",book1.price);

    book2.id = 2;
    strcpy(book2.name,"data structure 2");
    book2.price= 200.0;

    printf("The id is book2 %d\n",book2.id);
    printf("The Name is %s\n",book2.name);




    return 0;
}
