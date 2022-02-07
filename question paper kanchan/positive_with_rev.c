#include <stdio.h>
void fun(int number)
{
    int rev = 0;

    while (number > 0)
    {

        rev = rev * 10 + number % 10;
        number = number / 10;
    }

    printf("Reverse number is : %d", rev);
}
void main()
{

    int n ;
    do
    {
        printf("please input a number that's positive");
        scanf("%d", &n);
    } while (n < 0);
    fun(n);
}