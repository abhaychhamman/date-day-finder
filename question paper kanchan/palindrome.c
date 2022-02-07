#include<stdio.h>
void fun(int number)
{
int rev=0; 
int cnum=number;

while (number>0)
{
     
     rev=rev*10+number%10;
     number=number/10;
     
}
if (rev==cnum)
{
    /* code */
    printf("number is palinrome");
}
else{

    printf("not a palinrome");

}
}
void main()
{
int number;
    printf("enter your number which you want to check palindrome?");
    scanf("%d",&number);
   fun(number);
}
