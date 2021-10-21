#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void main()
{
    int user_num;
    srand(time(0));
    int com_num = rand() % 100;
    int guess_count = 0;
    printf("enter your number ");

    while (1)
    {
        scanf("%d", &user_num);

        guess_count++;
        if (user_num == com_num)
        {
            printf("you have guess number in %d times", guess_count);
            exit(0);
        }
        else if (user_num >= com_num)
        {

            printf("lower number please");
        }
        else if (user_num < com_num)
        {

            printf("heigher number please");
        }
        else
        {

            printf("invalid number");
        }
    }
}