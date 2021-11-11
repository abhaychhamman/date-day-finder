#include<stdio.h>
void main(){
int graph[6]={5,3,6,3,4,2};
int pos_area[10],a=0,adder=0;
printf("this is right");

for (int i = 1; i < 2; i++)
{

    for (int j = 0; j < 6; j++)
{
    if(graph[j]==i+1)
    {
        printf("%d%d\n\n",j,i+1);
         
         a++;
    }
    else{
         adder++;
         printf("adder%d -- %d%d\n\n",adder,j,i+1);
    }
   
 pos_area[i]=adder;
}


}



}