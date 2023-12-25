#include<stdio.h>

void  main()
{
  	
    char string[100];
	int i,c=0;
	
	printf("Enter any string: ");
    gets(string);
    
    char *p;
    p=&string;

   
   for(i=0;string[i]!='\0';i++){
        c++;
        p++;
    }
    printf("The length of the string is: %d", c);
}
