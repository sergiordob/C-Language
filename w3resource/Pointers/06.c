#include <stdio.h>
#include <stdlib.h>
void main()
{
 int fno,sno;
 int *ptr1 = NULL;
 int *ptr2 = NULL;
 
   printf("\n\n Pointer : Find the maximum number between two numbers :\n"); 
   printf("------------------------------------------------------------\n");   
 
   printf(" Input the first number : ");
   scanf("%d", &fno);
   printf(" Input the second  number : ");
   scanf("%d", &sno); 

  ptr1 = &fno;
  ptr2 = &sno;

 if(*ptr1>*ptr2)
 {
  printf("\n\n %d is the maximum number.\n\n",*ptr1);
 }
 else
 {
  printf("\n\n %d is the maximum number.\n\n",*ptr2);
 }

}