#include <stdio.h>

void main()
{
    int a = 15, c = 0,d=16;
    for (int i = 0; i < 9; i++)
    {
        printf("*");

        for (int j = 0; j < i; j++)
        {

            if (j + 1 == i && i <= 4)
            {
                for (int k = 0; k < i; k++)
                {
                    printf(" ");
                }

                printf("*");
            }
            else
            {

                printf(" ");
            }
        }

        for (int n = 0; n <= a; n++)
        {

            if (n == a)
            {

                printf("*");
            }
            else
            {

                printf(" ");
            }
        }

        if (i > 0 && i < 5)
        {

            for (int l = 1; l <= c; l++)
            {

                if (l == c)
                {

                    printf("*");
                }
                else
                {

                    printf(" ");
                }
            }
        }
        else if(i>=5){

            for (int l = 1; l <= d; l++)
            {

                if(l==d){

                    printf("*");

                }else{

                    printf(" ");
                }
                
            }
        }
        c = c + 2;
        d=d-1;
   a = a - 4;
     
        printf("\n");
    }
}
