#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 10

//global variables
int i,j;

int binary(int arr[SIZE], int sk)
{
    int mid;
    int first = 0;
    int last = SIZE-1;

    bool flag = false;

    while(!flag && first <= last)
    {
        mid = (first + last)/2;
        if(sk == arr[mid])
        {
            return mid;
            flag = true;
        }
        else if(sk < arr[mid])
        {
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    }
    return -1;
}




int main()
{
    int arr[SIZE] = {10,20,30,40,50,60,70,80,90};

    int sk = 60;
    int out = binary(arr,sk);

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




































