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
     
struct person *p1;   //create a pointer for number of person
int n;
char *next="";  //this is variable for 'storing' next string
printf(">>> Enter the number of person\n>>> ");
scanf("%d",&n);  //take the value number of person

p1=(struct person*)malloc(n*sizeof(struct person)); // allocate the memory for number  of person


for (int  i = 0; i < n; i++)
{

printf(">>> Enter %s id\n>>>",next);
scanf("%d",&(p1+i)->id);
printf(">>> Enter %s Name\n>>>",next);
scanf(" %[^\n]s",(p1+i)->name);
printf(">>>  Enter %s Location\n>>>",next);
scanf(" %[^\n]s",(p1+i)->location);

printf("-------------------------------------------------------------\n");

next="next";



}
 

 
printf("\n\n\n");
printf("S.R No.\t\tId\t\tName\t\tLocation\t\t\n");
printf("****************************************************************************************************\n");
for (int j = 0; j < n; j++)
{
printf("%d\t\t%d\t\t%s\t\t%s\n",j+1,(p1+j)->id,(p1+j)->name, (p1+j)->location); //  print the from stucture number of  person 
printf("----------------------------------------------------------------------------------\n");
     
}


 

}
void main()
{
   fun(); //function call
}