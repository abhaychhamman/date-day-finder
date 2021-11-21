#include <stdio.h>
int a = 0, b = 0, bet_g_no = 14;
int gap_no = 5;
int astr[8] = {2, 4, 4, 4, 3, 2, 2, 1};
int sp[16] = {15, 3, 11, 3, 5, 7, 5, 5, 3, 5, 5, 5, 7, 3};
void S_E_gap(int i)
{

     for (int j = 1; j <= gap_no; j++)
     {
          printf(" ");
     }
     if (i == 0 || i == 1)
     {
          b = gap_no;
          gap_no = 3;
     }
     else
     {
          gap_no = b + 2;
          b = gap_no;
     }
}
void main()
{

     for (int i = 0; i < 8; i++)
     {
          S_E_gap(i);

          for (int j = 0; j < astr[i]; j++)
          {

               printf("*");
                if(j+1==astr[i]){

                    printf("\n");
                    continue;
                    }

               for (int k = 0; k < sp[a]; k++)
               {
                   
                    printf(" ");
               }
               a++;
          }
        
     }
}