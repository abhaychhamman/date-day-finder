#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct person  //create a structure
{
    int id;  //membering field
    char name[50]; //membering field
    char location[50]; //membering field
};


void fun()  //function is defined
{
     
struct person p1;
p1.id=23;  //stroing  the value in p1's id
strcpy(p1.location,"hardoi");// function of copy the string in variable
strcpy(p1.name,"abhay");// function of copy the string in variable

printf("Id\tName\tLocation\t\n");
printf("----------------------------------\n");
printf("%d\t%s\t%s",p1.id,p1.name, p1.location); //  print the from stucture person p1



}
void main()
{
   fun(); //function call
}