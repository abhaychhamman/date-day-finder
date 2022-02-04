#include<stdio.h>
void main()

{
int a=6; //swap   
int b=7;
int *ptr1=&a;//6
int *ptr2=&b;//7

printf("before swapping\n");
printf("%u\n",*ptr1);
printf("%u\n",*ptr2);
//  logic for swapping number using pointer
*ptr1=*ptr1+*ptr2; //13
*ptr2=*ptr1-*ptr2;//6
*ptr1=*ptr1-*ptr2;//7
printf("after swapping\n");
printf("%u\n",*ptr1);
printf("%u\n",*ptr2);
 


}