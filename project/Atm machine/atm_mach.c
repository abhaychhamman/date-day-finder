#include <stdio.h>
#include <string.h>
#include <stdlib.h>

FILE *fp1, *fp2, *fp3;
int pin_verification()
{
    int pin = 1234, user_get_pin;
    printf("enter your atm pin?\n");
    scanf("%d", &user_get_pin);

    if (pin != user_get_pin)
    {
        printf("invalid pin !\n Try agian?\n");
        pin_verification();
    }
    else
    {
        return 0;
    }
}
void deposit()
{
    pin_verification();
    int depo, x;
    char ach[50];
    fp1 = fopen("atm.txt", "r");
    if (fp1 == NULL)
    {
        printf("file does not exists\n");
    }
    else
    {
        if (fgets(ach, 50, fp1) == NULL)
        {

            x = 0;
        }
        while (fgets(ach, 50, fp1) != NULL)
        {
            printf("your already amount is %s[Rs.]\n", ach);
            x = atoi(ach);
        }
    }
    fclose(fp1);

    printf("enter your amount which you want to deposit[Rs.]\n");
    scanf("%d", &depo);
    fp2 = fopen("atm.txt", "w");
    if (strlen(ach) > 1)
    {
        fprintf(fp2, "%d", x + depo);
    }
    printf("Now your rupees is %d\n", x + depo);

    fclose(fp2);
}

void withdraw()
{
    pin_verification();
    int withd, x;
    char ach[50];
    fp1 = fopen("atm.txt", "r");
    if (fp1 == NULL)
    {
        printf("file does not exists\n");
    }
    else
    {

        while (fgets(ach, 50, fp1) != NULL)
        {

            x = atoi(ach);
        }
    }
    fclose(fp1);

    printf("enter your amount which you want to withdraw[Rs.]\n");
    scanf("%d", &withd);
    fp2 = fopen("atm.txt", "w");
    if (x - withd > 0 && x < withd)
    {
        fprintf(fp2, "%d", x - withd);
        printf("please wait a few second!.....\n");

        for (size_t i = 0; i < 200000; i++)
        {
            for (size_t i = 0; i < 10000; i++)
            {
            }
        }

        printf("your available balence is: %d\n", x - withd);
    }
    else
    {

        printf("your balence is :0 [Rs.].you are not withdraw amount!..\n");
    }

    fclose(fp2);
}

void check_balence()
{
    pin_verification();
    int withd, x;
    char ach[50];
    fp1 = fopen("atm.txt", "r");
    if (fp1 == NULL)
    {
        printf("file does not exists\n");
    }
    else
    {
        if (fgets(ach, 50, fp1) == NULL)
        {
            printf("your balence is : 0 [Rs.]\n");
        }
        else
        {
            while (fgets(ach, 50, fp1) != NULL)
            {
                printf("%s", ach);
                x = atoi(ach);
            }
        }
    }

    fclose(fp1);
}

void dis_logic()
{

    int choice;
    printf("\n\n\nWelcome to our service\n");
    printf("1.withdraw\n ");
    printf("2.deposit amount\n");
    printf("3.check balence\n");
    printf("4.exit\n");
    printf("what you want to do?.please enter the number\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        withdraw();
        break;
    case 2:
        deposit();
        break;
    case 3:
        check_balence();
        break;
    case 4:
        exit(0);

    default:
        break;
    }
}

int main()
{
    fp3 = fopen("atm.txt", "w");
    fclose(fp3);
    while (1)
    {
        dis_logic();
         for (size_t i = 0; i < 500000; i++)
        {
            for (size_t i = 0; i < 10000; i++)
            {
            }
        }

    }
}