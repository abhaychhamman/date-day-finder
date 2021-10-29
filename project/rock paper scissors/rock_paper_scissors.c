#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void main()
{
        char com_choice, user_choice;
        int user_num;

        int guess_count = 0;

        for (int i = 0; i < 100; i++)

        {

                srand(time(0));
                int random = rand() % 3;

                if (random == 1)
                {

                        com_choice = 'r';
                }

                else if (random == 2)
                {

                        com_choice = 'p';
                }
                else
                {
                        com_choice = 's';
                }

                printf("\nenter your choice Rock[r],Scissors[s],Paper[p]\n");
                scanf(" %c", &user_choice);
                if (user_choice == com_choice)
                {

                        printf("match draw");
                }
                else if (user_choice == 'r' && com_choice == 'p')
                {
                        printf("computer won the match");
                }
                else if (user_choice == 'r' && com_choice == 's')
                {
                        printf("user won the match");
                }
                else if (user_choice == 's' && com_choice == 'p')
                {
                        printf("user won the match");
                }
                else if (user_choice == 's' && com_choice == 'r')
                {
                        printf("computer won the match");
                }
                else if (user_choice == 'p' && com_choice == 's')
                {
                        printf("computer won the match");
                }
                else if (user_choice == 'p' && com_choice == 'r')
                {
                        printf("user won the match");
                }

              
                else if (user_choice == 'e')
                {

                        exit(0);
                }
                else
                {

                        printf("invalid number");
                }
                  printf("\n\nyou choose '%c' and comuputer choose '%c'\n\n exit for click 'e'!",user_choice,com_choice);

        }
}