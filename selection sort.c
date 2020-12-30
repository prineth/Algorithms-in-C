#include <stdio.h>
#include <stdlib.h>
#define SIZE 6

void selection(int arr[])
{
    for(int i=0; i < SIZE-1; i++)
    {
        int min = i;

        for(int j=i+1; j < SIZE; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }

        if(min != i)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    printf("Sorted array : ");
    for(int i=0;i<SIZE;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int arr[SIZE] = {7,4,10,8,3,1};

    selection(arr);

    return 0;
}
