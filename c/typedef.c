// *****************without typedef******************* 
// #include<stdio.h>
// #include<string.h>
//  struct student
//      {
//          int rollno;
//          char name[50];
//          int marks;
//          float percent;
         
//      };
// void fun()
// {
//     struct student s1;
//     strcpy(s1.name,"abhay");
//     printf("%s\n",s1.name);
// }
// void main()
// {

//    fun();
// }

// *****************typedef*******************  ex1

// #include<stdio.h>
// #include<string.h>
// typedef struct student
//      {
//          int rollno;
//          char name[50];
//          int marks;
//          float percent;
         
//      } ab;
// void fun()
// {
//     ab s1;
//     strcpy(s1.name,"abhay");
//     printf("%s\n",s1.name);
// }
// void main()
// {
//    fun();
// }
// *****************typedef*******************  ex2

#include<stdio.h>
#include<string.h>
 
void fun()
{
  typedef int* tp;
  tp b;
  int c=12;

  b=&c;
   
    
    printf("%d\n",*b);
}
void main()
{
   fun();
}