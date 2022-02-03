#include<stdio.h>
void main()

{

int ayush=5;
int ayus=5;
int *heena=&ayush;

printf("%d\n",ayush);
printf("%x\n",heena);
printf("%x\n",&ayush);
printf("%x\n",&ayus);
printf("%x\n",&(*heena));
printf("%p\n",&(*heena));
printf("%u\n",&(*heena));
 
 

}