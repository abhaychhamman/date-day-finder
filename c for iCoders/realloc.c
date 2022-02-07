#include <stdio.h>
#include <stdlib.h> //here use stdlib header file for use to allocation function
void fun(int n)     //her  define function and n in a parameter
{
    int *arr = (int *)malloc(n * sizeof(int)); //here memomy allocate using malloc
    for (int i = 0; i < n; i++)
    {
        printf("enter %d\n", i);
        scanf("%d", &arr[i]); //here take value and store in pointer
    }
    int m;
    printf("for realloc length");
    scanf("%d", &m); //if you want to required extra  some  memory .then take value by user

    arr = (int *)realloc(arr, n * sizeof(int)); //here again allocate memory using realloc

    for (int i = n; i < m; i++)
    {
        printf("enter %d\n", i);
        scanf("%d", &arr[i]); //here take value and store in pointer
    }

    for (int i = 0; i < m; i++)
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