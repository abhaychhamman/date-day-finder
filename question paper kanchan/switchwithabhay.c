#include <stdio.h>
void fun(float a, float b, float x)
{

    int N;
    float Y = 0;
    printf("Enter your number which you want to operate Operation?");
    scanf("%d", &N);

    switch (N)
    {
    case 1:
        Y = (a * a * x * x) + (b * b) + (2 * a * x * b);

        break;
    case 2:
        Y = (a * x * x) + (b * b * b);
        break;
    case 3:
        Y = (-a * x) + (b);
        break;
    case 4:

        Y = (a * a) + (x);
        break;

    default:
        break;
    }

    printf("Y value is: %f", Y);
}
void main()
{

    float a, b, x;
    printf("Enter the value of a ,b and x?");
    scanf("%f %f %f", &a, &b, &x);

    fun(a, b, x);
}