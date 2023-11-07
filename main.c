
#include"book.h"
void main()
 {
	int n;
	printf(" \n\n Numbers Of Stored Books: ");
	scanf("%d",&n);
	printf("\n________________________________________________________________");
 
 	book* ptr; 
	ptr=(book*)malloc(sizeof(book)*n);    
    
	 store(ptr,n);
	 display(ptr,n);
	 search(ptr,n);
	 update(ptr,n);
	 display(ptr,n);
	 delete(ptr,&n);
	 display(ptr,n);
	 free(ptr);
 }


