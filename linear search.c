#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

//global variable
int i;

int linear(int arr[SIZE],int sk)
{
    for(i=0; i<=SIZE-1; i++)
    {
        if(sk == arr[i])
        {
            return i;
        }

    }
    return -1;
}

int main()
{
    int arr[SIZE]={10,20,30,40,50};
    int sk = 20;

    int out = linear(arr,sk);
    if(out == -1)
    {
        printf("search key not found");
    }
    else
    {
        printf("search key found at %d",out);
    }
    return 0;
}




