#include<stdio.h>
void main()

{

int ayush=5;  //fareed sir ayush rupaye de diye
 
int *heena=&ayush; // fareed sir ayush ko gift diye wahi tumko bhi denge 
//lekin ayush ka address heena ko diya gya hai jo waha ja ke le legi .

// printf("%d\n",ayush); // 5
// printf("%u\n",heena); //2410804468
// printf("%p\n",&ayush);  //2410804468<same heena>
printf(" %u\n",heena); //5
printf(" %p\n",heena); //5
printf(" %x\n",heena); //5
// printf(" this is x: %x\n",&heena); //722306528
// printf("  this is p: %p\n",&(*heena));//2410804468


//write a program swapping two number using pointer.
 

}