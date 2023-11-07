#include"book.h"

void store(book* ptr,int n1)
 {
 	int i;
    printf("\n\n Information Of Stored %d Books");
    printf("\n\n----------------------------------------------------------------");
    
 	for(i=0;i<n1;i++)
 	{
        
 	    printf("\n Enter The Book ID                : ");
 		fflush(stdin);
 	    scanf("%ld",&ptr[i].bookid);
 		
 	    printf(" Enter The Book Name              : ");
 	    fflush(stdin);
 	    gets(ptr[i].bookname);
 	    
 		printf(" Enter The Book Author Name       : ");
 	    fflush(stdin);
 	    gets(ptr[i].author);
 	    
 		printf(" Enter The Publication Of Book    : ");
 	    fflush(stdin);
 	    gets(ptr[i].publication);
 	    
 		printf(" Enter The Genre Of Book          : ");
 	    fflush(stdin);
 	    gets(ptr[i].genre);
 	    
 		printf(" Enter The Pages Of Book          : ");
 		scanf("%lld",&ptr[i].pages);
 		
 	    printf(" Enter The Price Of Book          : ");
 	    scanf("%ld",&ptr[i].price);
 	    
 	    printf(" Enter The Language Of Book       : ");
 	    fflush(stdin);
 		gets(ptr[i].language);
 		
 		printf(" Enter The Edition Of Book        : ");
 	    scanf("%d",&ptr[i].edition);
 	    
 	   
 	}
 }
 
    void display(book* ptr,int n2)
  {
   	int i;
   	printf("\n +---------+-------------------+-------------------+---------------------+---------------+------------+---------------+------------------+-----------------+");
    printf("\n | Book Id | Book Name         | Author Name       | Publication Name    | Genre Name    | Book Pages | Price Of Book | Language Of Book | Edition Of Book | ");
    printf("\n +---------+-------------------+-------------------+---------------------+---------------+------------+---------------+------------------+-----------------+");
   	for(i=0;i<n2;i++)
   	{
   	printf("\n | %-8ld| %-17s | %-17s | %-19s | %-13s | %-10lld | %-13ld | %-16s | %-15d |",ptr[i].bookid,ptr[i].bookname,ptr[i].author,ptr[i].publication,ptr[i].genre,ptr[i].pages,ptr[i].price,ptr[i].language,ptr[i].edition);
    }
    printf("\n +---------+-------------------+-------------------+---------------------+---------------+------------+---------------+------------------+-----------------+");
  }
   	
   void search(book* ptr,int count)
  {
  	int i,id,ch,flag=0;
  	char name[30];
  	char author_name[30];
  	printf("\n\n Enter The Choice To Search :\n\n1.Book Id:\n\n2.Book Name:\n\n3.Author Name: \n\n");
  	scanf("%d",&ch);
  	if(ch==1)
  	{
  		printf("\n Enter Book Id: ");
  	    scanf("%d",&id);
  	    
  	    for(i=0; i<count; i++)
  	{
  		if(ptr[i].bookid==id) 
  	
  		{
  			   flag=1;
  		       printf("\n Book Id %d Details\n  ",id);
  			  
  			   printf("\n Book Id          :  %ld",ptr[i].bookid);
   	           printf("\n Book Name        :  %s",ptr[i].bookname);
   	           printf("\n Author Name      :  %s",ptr[i].author);
               printf("\n Publication Name :  %s",ptr[i].publication);
               printf("\n Genre Name       :  %s",ptr[i].genre);
               printf("\n Book Pages       :  %lld",ptr[i].pages);
               printf("\n Price Of Book    :  %ld",ptr[i].price);
               printf("\n Language OF Book :  %s",ptr[i].language);
               printf("\n Edition Of Book  :  %d",ptr[i].edition);
               break;
       }
  	   
  	  }
	 
  	}
  	
  
    else if(ch==2)
       {
       
  		printf("\n Enter Book Name: ");
  		fflush(stdin);
  		gets(name);
  	    for(i=0; i<count; i++)
  	{
  		if(strcmpi(ptr[i].bookname,name)==0)
  		{
  			  flag=1;
  		       printf("\n\n Book Name %s Details  ",name);
  			
  			   printf("\n Book Id          :  %ld",ptr[i].bookid);
   	           printf("\n Book Name        :  %s",ptr[i].bookname);
   	           printf("\n Author Name      :  %s",ptr[i].author);
               printf("\n Publication Name :  %s",ptr[i].publication);
               printf("\n Genre Name       :  %s",ptr[i].genre);
               printf("\n Book Pages       :  %lld",ptr[i].pages);
               printf("\n Price Of Book    :  %ld",ptr[i].price);
               printf("\n Language OF Book :  %s",ptr[i].language);
               printf("\n Edition Of Book  :  %d",ptr[i].edition);
               break;
  		}
  	
	}
  	}
  	 else if(ch==3)
  	{
  		printf("\n Enter Author Name: ");
  		fflush(stdin);
  		gets(author_name);
  	    
  	    for(i=0; i<count; i++)
  	{
  		if(strcmpi(ptr[i].author,author_name)==0)
  		{
  			flag=1;
  		
  			   printf("\n\n Book Name %s Details  ",author_name);
  			
  			   printf("\n Book Id          :  %ld",ptr[i].bookid);
   	           printf("\n Book Name        :  %s",ptr[i].bookname);
   	           printf("\n Author Name      :  %s",ptr[i].author);
               printf("\n Publication Name :  %s",ptr[i].publication);
               printf("\n Genre Name       :  %s",ptr[i].genre);
               printf("\n Book Pages       :  %lld",ptr[i].pages);
               printf("\n Price Of Book    :  %ld",ptr[i].price);
               printf("\n Language OF Book :  %s",ptr[i].language);
               printf("\n Edition Of Book  :  %d",ptr[i].edition);
               break;
  		}
  		
	}
  	}
  	if(flag==1)
  	{ 
  	printf("\n\n Search Successful");
	}
	else
	{
	printf("\n Record Not Found");
	}
    }
     
  void update(book* ptr,int size) 
  {
  	int i,ch,flag=0,id;
  	printf("\n\n Enter Book Id You Want to Update : ");
  	scanf("%d",&id);
  	for(i=0;i<size;i++)
  	{
  		if(id==ptr[i].bookid) 
  		{
  			flag=1;
  			printf(" \n1.Book Name \n2.Author Name \n3.Publication Name \n4.Genre Name \n5.Book Pages \n6.Price Of Book \n7.Language OF Book \n8.Edition Of Book  ");
  		    printf("\n\n Enter Your Choice: ");
  			scanf("%d",&ch);
  			fflush(stdin);
  			switch(ch)
  			{
  			   case 1 : printf("\n Enter The Book Name:  ");  
  			            gets(ptr[i].bookname);
  			            break;
  			        
  			   case 2 : printf("\n Enter The Book Author Name: ");  
  			            gets(ptr[i].author);
  			            break;
  			   
  			    case 3 : printf("\n Enter The Book Publication Name: ");  
  			             gets(ptr[i].publication);
  			             break;
  			   
  			    case 4 : printf("\n Enter The Book Genre Name: ");  
  			             gets(ptr[i].genre);
  			             break;
  			           
  			    case 5 : printf("\n Enter The Book Pages: ");  
  			             scanf("%lld",&ptr[i].pages);
  			             break;      
  			             
  			    case 6 : printf("\n Enter The Price Of Book: ");  
  			             scanf("%ld",&ptr[i].price);
  			             break;      
  			   
  			    case 7 : printf("\n Enter The Language OF Book: ");  
  			             gets(ptr[i].language);
  			             break;  
						   
						       
  			    case 8 : printf("\n Enter The Edition Of Book: ");  
  			            scanf("%d",&ptr[i].edition);
  			            break;  
						   
  			}
  			  if(flag==1)
	         {
	  	       printf("\n Upadate Successful Here");
	         }
	         else
	         {
	  	       printf("\n Book ID Not Found");
	         }
	   }
		 
     }
  }
  
 void delete(book* ptr, int *n)
  {
  	int d,i,j,flag=0;
  	printf("\n Enter Book Id to Delete Record: " );
  	fflush(stdin);
  	scanf("%d",&d);
  	for(i=0;i<*n;i++)
  	{
  		if(d==ptr[i].bookid)
  		{
  			flag=1;
  			for(j=1;j<(*n-1);j++)
  			{
  				ptr[j]=ptr[j+1];
			  }
		  }
	  }
	  if(flag==1)
	  {
	  	*n=*n-1; //size will decrease by 1
	  	printf("\n Record deleted Successfully");
	  }
	  else
	  {
	  	printf("\n Record Not Found");
	  }
  }
  
  

