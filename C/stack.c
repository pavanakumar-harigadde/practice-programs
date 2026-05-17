/*C program to implement stack and its operations*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 10 //Defining maximum size of the stack
#define true 1
#define false 0


/*Defining the structure to construct stack*/
 typedef struct mystack{
    int a[MAX];
    int top;
}STACK;

struct mystack S;
/*Function to check underflow condition*/ 
int IsEmpty(STACK * ps)
{
    if(ps->top==-1)
    {
        return (true);
    }
    else{
        return (false);
    }
    /*End Empty*/
}

/*Function to check overflow condition*/
int IsFull(STACK *ps)
{
    if(ps->top==MAX-1)
    {
        return (true);
    }
    else{
        return (false);
    }
    /*End IsFull*/
}

/*Function to push element to stack*/
void push( STACK *ps,int x)
{
    if(IsFull(ps))
    {
        printf("Stack Underflow");
    }
    else{
        ps->top++;
        ps->a[ps->top] = x;
    }
}

int pop(STACK *ps)
{
    if(IsEmpty(ps))
    {
        printf("Stack Underflow!!!");
        exit(1);
    }
    else
    {
       int temp = ps->a[ps->top];
       ps->top--;
       return temp;
    }
}

int peek(STACK *ps)
{
    if(IsEmpty(ps))
    {
        printf("Stack Underflow!!!");
    }
    else
    {
        int x= ps->top;
        printf("%d",x);
    }
    
}

void display(STACK *ps)
{
    if(IsEmpty(ps))
    {
        printf("Stack Underflow!!!");
    }
    for(int i=ps->top;i>=0;i--)
    {
        printf("\n%d ",ps->a[i]);
    }
}

int main(void)
{
    struct mystack S;
    S.top=-1;
    int choice,value;
    printf("Stack Operations \n");
    while(1)
    {
        printf("Enter Choice : \n");
        scanf("%d",&choice);
        switch(choice)
        {
            default:
            {
                printf("\nEnter a Choice  \n");
                break;
            }
            case 1:
            {
                printf("\nPush \n");
                printf("Enter the Value : \n");
                scanf("%d",&value);
                push(&S,value);
                break;
            }
            case 2:
            {
                printf("\nPop \n");
                int del = pop(&S);
                printf("Popped item %d ",del);
                break;
            }
            case 3:
            {
                printf("Peek \n");
                if(S.top==-1)
                {
                    printf("Stack Underflow \n");
                }
                else
                {
                int temp=S.a[S.top];
                printf("Top Element : %d \n",temp);
                }
                break;
            }
            case 4:
            {
                printf("Display \n");
                display(&S);
                break;
            }
            case 5:
            {
                printf("Size \n");
                printf("Size of Stack = %d\n",S.top+1);
                break;
            }
            case 0:
            {
                printf("Exiting from Process \n");
                exit(0);
            }
        }
    }
    return 0;
}