#include<stdio.h>
int arr[6];  //here empty array define and reason of define here array because function call the arr.
 


 
void array_stored_value(){  //define function

 //here take value and stored in a array (arr)
    for (int  i = 0; i < 6; i++)
    {
        printf("%d number \n",i+1);
        scanf("%d",&arr[i]);
    }

// here print the value of the stored in a array(arr)
    for (int  j = 0; j < 6; j++)
    {
        printf("%d\n",arr[j]);
    
    }

}


void main(){
 

array_stored_value();// function call 

    
}