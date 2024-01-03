#include<stdio.h>

void  main()
{
  	
    char string[100];
	int *p;
	int *ptr;
	int length;
	
	printf("Enter any string:- ");
    gets(string);
    
 ptr=&string;
 length=strlen(ptr);
 p=&length;

   

    printf("The length of the string is: %d", *p);
}
