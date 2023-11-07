#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 typedef struct book
 {
 	 long int bookid;
 	 char bookname[30];
 	 char author[30];
 	 char publication[30];
 	 char genre[30];
 	 long long int pages;
 	 long int price;
 	 char language[30];
 	 int edition;
 }book;
 
 void store(book*,int);
 void display(book*,int);
 void search(book*,int);
 void update(book*,int);
 void delete(book*,int*);
