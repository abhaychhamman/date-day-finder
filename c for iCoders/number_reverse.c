#include <stdio.h>
int rev_num = 0;

void rev_order(int num) //function define 
{

   while (num > 0) // num==0 false

   {
      rev_num = rev_num * 10 + num % 10; //here calculate reverse number formula

      num = num / 10;  //here dividing number by 10 because  that is reduced a digit.
   }

   printf("%d", rev_num);
}

void main()
{

   int number = 121642;

   printf("%d\n", number);
   rev_order(number);
}