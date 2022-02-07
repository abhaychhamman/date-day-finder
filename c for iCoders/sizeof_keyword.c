// sizeof =get the size of array

#include<stdio.h>


void sof(){  //function define
int arr[]={2,3,43,43,5,3 };  //24/6=4

// printf("%d\n",sizeof(arr));  //size of array
// printf("%d\n",sizeof(arr[0])); //size of array's element
// printf("%d\n",sizeof(arr)/sizeof(arr[0]));
// printf("%d\n",arr[0]);

for (int  i = 0; i < sizeof(arr)/sizeof(arr[0]) ; i++)
{
    printf("%d\n",arr[i]);
}


}
void main(){
sof();// funtion call

}