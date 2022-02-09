#include<stdio.h>
 
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
int a,b;

// ***********************my original funda for take i/p and print o/p***************************

printf("enter your id");
// scanf("%d %d",&a,&b);
scanf("%d",&p1.id);
printf("enter your name");
scanf(" %[^\n]s",p1.name);
printf("enter your  location");
scanf(" %[^\n]s",p1.location);



//*********************** this is the another for take string and print********************

// gets(p1.name);
// gets(p1.location);
// puts(p1.name);
// puts(p1.location);
 
printf("Id\tName\tLocation\t\n");
printf("----------------------------------\n");
printf("%d\t%s\t%s",p1.id,p1.name, p1.location); //  print the from stucture person p1
 

}
void main()
{
   fun(); //function call
}