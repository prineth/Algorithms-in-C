///Queue Implementation

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

//global variables
int i;

//STRUCTURE OF QUEUE
struct queue{
   int arr[SIZE];
   int rear;
   int front;

}qu;

//ISFULL FUNCTION
int isfull()
{
    if(qu.front==0 && qu.rear==SIZE-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
//ISEMPTY FUNCTION
int isempty()
{
    if(qu.rear==-1 && qu.front==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


//ENQUEUE FUNCTION
void enqueue(int ele)
{
    if(isfull())
    {
        printf("Stack is overflow");
    }
    else
    {
        qu.rear++;
        qu.arr[qu.rear] = ele;
    }
}

//DEQUEUE FUNCTION
int dequeue()
{
    int out;
    if(isempty())
    {
        printf("Stack is empty");
    }
    else
    {
        out = qu.arr[qu.front];
        qu.front++;
        return out; // where is return?
    }

}

//DISPLAY
void display()
{
    if(isempty())
    {
        printf("Stack is empty");
    }
    else
    {
        for(i=qu.front; i<=qu.rear; i++)
        {
            printf("%d\n",qu.arr[i]);
        }

    }

}


///MAIN FUNCTION
int main()
{
    qu.rear = -1;
    qu.front = 0;

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(40);

    dequeue();

    display();
    return 0;
}














