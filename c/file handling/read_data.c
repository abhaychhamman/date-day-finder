#include <stdio.h>

int main()
{
   FILE *fp;
   char ch;
   fp = fopen64("file_handling.txt", "r");
   while (1)
   {
      ch = fgetc(fp);
      if (ch == EOF)
      {

         break;
      }
      else
      {
         printf("%c", ch);
      }
   }

   fclose(fp);
   return 0;
}