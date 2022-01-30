// ***************Excercise*********************

#include <stdio.h>

int sum(int a, int b) //two parameter : first is a and second one b .both are int datatype

{
   return a + b; //here return (a+b) value .and a+b value is integer
}

void main()
{

   int s = sum(5, 6);      //here function is call and gives the value (a+b).it is integer type then i have create variable int s.
   printf("%d ", s);       //here print the sum of 5+6
   int t = sum(534, 6343); //here one more time call sum function and return the value of a+b

   printf("%d", t); //here print the sum of 534+6343
}