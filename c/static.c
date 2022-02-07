#include<stdio.h>
void fun()
{
     register int a;
    
     for (register int i = 0; i < 100000; i++)
     {
         
     }
     
     a++;
}
void main()
{
   fun();
   fun();
}