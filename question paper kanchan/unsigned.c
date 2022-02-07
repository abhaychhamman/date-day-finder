#include<stdio.h>
void fun()
{
      int  i;
     do 
{ 
  printf("please input a number that's positive"); 
  scanf("%d", &i); 
}while (i < 0); 
}
void main()
{
   fun();
}