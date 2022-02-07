#include<stdio.h>
#include<stdlib.h>
void fun()
{
     int n;
     printf("how many element store in the malloc");
     scanf("%d",&n);
     int *ptr=(int*)malloc(3*sizeof(int));
 
 ptr[30]=2;
 printf("%d",sizeof(ptr));
       
     
    //  for (int  i = 0; i < n+10; i++)
    //  {
    //      printf("enter your %d number",i+1);
    //     scanf("%d",&ptr[i]);
    //  }
     
    //  for (int  i = 0; i < n+10; i++)
    //  {
    //     //  printf("enter your %d number",i+1);
    //     printf("value %d ",ptr[i]);
    //  }
     

// ptr=(int*)realloc(ptr,3*sizeof(int));



    //  free(ptr);
   

}
void main()
{
   fun();
}