// this code for define difference between global and local variable

#include <stdio.h>
int glob = 20; //this is global variable  and anyone can access

void abhay()
{
    int local1 = 12;                //here local variable
    printf("%d %d ", local1, glob); //output: 12 20
    // printf("%d",local2);  // this line gives error beacause this is local variable for  main()
}

void main()
{

    abhay();
    int local2 = 10;                //here local variable
    printf("%d %d ", local2, glob); //output: 10 20
    // printf("%d",local1);  // this line gives error beacause this is local variable for  abhay()
}