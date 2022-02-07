#include<stdio.h>

void pwitha_first_method(){

    int arr[5]={2,3,4,324,3};
    int *ptr=arr;
 
//  ******this is traditional method of printing address ***********

    // printf("%u\n",&arr[0]);
    // printf("%u\n",ptr);
    // printf("%u\n",ptr+1);
    // printf("%u\n",ptr+2);
    // printf("%u\n",ptr+3);
    // printf("%u\n",ptr+4);

 
//  ******this is traditional method of printing value ***********

    // printf("value %u\n",arr[0]);
    // printf("value %u\n",*ptr);
    // printf("value %u\n",*(ptr+1));
    // printf("value %u\n",*(ptr+2));
    // printf("value %u\n",*(ptr+3));
    // printf("value %u\n",*(ptr+4));


    // for (int i = 0; i < 5; i++)
    // {

    //    printf("%d\n",arr[i]);

    // }
    
// this is code for address print array by pointer
    // for (int i = 0; i < 5; i++)
    // {
    //    printf("address %u\n",ptr+i);

    // }

    
// this is code for address print array by pointer
    // for (int i = 0; i < 5; i++)
    // {
    //    printf("address %u\n",ptr+i);

    // }


// this is code for value print array by pointer
    for (int i = 0; i < 5; i++)
    {
       printf("address %u\n",*(ptr+i));

    }

}
void pwitha_second_method(){

 int arr[5]={2,3,4,324,3};
    int *ptr=arr;

    //  ******this is traditional method of printing address ***********
 
    // printf("address %u\n",&ptr[0]);
    // printf("address %u\n",&ptr[1]);
    // printf("address %u\n",&ptr[2]);
    // printf("address %u\n",&ptr[3]);
    // printf("address %u\n",&ptr[4]);
    
    // this is code for address print array by pointer
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("address %u\n",&ptr[i]);

    // }

 
//  ******this is traditional method of printing value ***********

    // printf("value %u\n",ptr[0]);
    // printf("value %u\n",ptr[1]);
    // printf("value %u\n",ptr[2]);
    // printf("value %u\n",ptr[3]);
    // printf("value %u\n",ptr[4]);
    
//  this is code for value print array by pointer
    for (int i = 0; i < 5; i++)
    {

       printf("%d\n",ptr[i]);

    }
    


}

void main()
{

// pwitha_first_method();
pwitha_second_method();
    
}