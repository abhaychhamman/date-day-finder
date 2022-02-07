#include <stdio.h>
void pattern()
{

    for (int i = 3; i > 0; i--)
    {

        for (int j = i; j >0; j--)
        {

            printf("%d ",j);
        }
        printf("\n");
    }
}
void main()
{
    pattern();
}