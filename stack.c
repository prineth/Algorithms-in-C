#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
/// Stack ///

//global variables
int i;

struct stack{
    int arr[SIZE];
    int top;
}st;

//push (no return type)
void push(int element){
    st.top++;
    st.arr[st.top] = element;
}

//pop (return type)
int pop(){
    int out = st.arr[st.top];
    st.top--;
    return out;
}

//isEmpty
int isEmpty(){
    if(st.top == -1){
    printf("Stack is empty.");
        return 1;
    }
    else{
        return 0;
    }
}
//isFull
int isFull(){
    if(st.top == SIZE-1){
    printf("Stack is full.");
        return 1;
    }
    else{
        return 0;
    }
}
//display(no return type)
void display(){
    for(i = st.top;i >= 0;i--){
        printf("%d\n",st.arr[i]);
    }
}

///calling functions
int main(){
    st.top = -1;

    push(10);
    push(20);
    push(30);


    printf("%d\n",isFull());


    printf("%d\n",isEmpty());

    display();

    return 0;
}
