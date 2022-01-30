#include <stdio.h>

// here define factorial
int count = 1;
int factorial(int n)
{
    count = count * n;
    if (n == 1)
    {
        return count;
    }
    factorial(n - 1);
}
void main()
{
    float cal = 1;
    int fact;
    int value;
    printf("enter your value \n");
    scanf("%d", &value);

    for (int i = 1; i <= value; i++)
    {

        // factorial function call here
        fact = factorial(i);
        count = 1;

        if (i % 2 == 0)
        {
            cal += 1.0 / fact;
        }
        else
        {
            cal -= 1.0 / fact;
        }
    }
    printf("value of series is :  %.3f\n\n", cal);
}
