#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 5

//global variables
int i,j,temp;

void bubble(int arr[])
{
    for(i=0;i<SIZE-1;i++)
    {
        bool flag = false;

        for(j=0;j<SIZE-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = true;
            }
        }


        if(flag == false)
        {
            break;
        }

    }

    ///sorted array
    printf("Sorted array \n\n");

    for(int i=0;i<SIZE;i++)
    {
        printf("%d ",arr[i]);
    }
}



int main()
{
    int arr[SIZE] = {15,16,6,8,5};
    bubble(arr);

    return 0;
}
