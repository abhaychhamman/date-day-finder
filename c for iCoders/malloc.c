#include <stdio.h>
#include <stdlib.h> //here use stdlib header file for use to allocation function
void fun(int n)     //her  define function and n in a parameter
{

    int *arr = (int *)malloc(n * sizeof(int)); //here memomy allocate using calloc

    for (int i = 0; i < n; i++)
    {
        printf("enter %d\n", i);
        scanf("%d", &arr[i]); //here take value and store in pointer
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]); ///here print the value stored in pointer
    }

    free(arr); //here arr free
}
void main()
{
    int n;
    printf("enter your number which you want to store value?");
    scanf("%d", &n);
    fun(n); //function call
}