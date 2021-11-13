#include <string.h>
#include <stdio.h>


int fline()
{
    printf("\n");
    
    for (int i = 0; i < 120; i++)
    {
        printf("-");
    }
    printf("\n");
}

int line(int num)
{
    printf("\n");
    for (int i = 0; i < num; i++)
    {
        printf("-");
    }
    printf("\n");
}

char *title(char str[])
{

    fline();
    int a = 120 - strlen(str);

    a = (a / 4) / 5;
    for (int j = 0; j <= a; j++)
    {

        printf("\t");
    }

    printf("%s", str);
    fline();
}

float avg(float a[])
{
    int len = sizeof(*a) - 1;

    float sum = 0;
    for (int i = 0; i < len; i++)
    {

        sum += a[i];
    }

    return sum / len;
}

int Time(int input){
#include <time.h>

     time_t rawtime;
  struct tm * timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  int res;

switch (input)
{
case 0:
res=timeinfo->tm_hour;
    break;
case 1:
res=timeinfo->tm_min;
    break;
case 2:
res=timeinfo-> tm_sec;
    break;
case 3:
res=timeinfo->tm_mday;
    break;
case 4:
res=timeinfo->tm_mon+1;
    break;
case 5:
res=timeinfo->tm_year+1900;
    break;

default:
    res=0;
    break;
}

  

  return res;




}