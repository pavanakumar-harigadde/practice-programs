#include<stdio.h>
#include<stdlib.h>
#define MAX 10 // Defining max size of the stack

/*Defining structure to define stack*/
struct stack
{
    int a[MAX];
    int top; 
};
struct stack S; // S is stack variable name 

/*To implement push operation */
void push(int value)
{
    if(S.top==MAX)
    {
        printf("Stack Overflow \n");
    }
    else
    {
        S.top++;
        S.a[S.top]=value;
    }
}

/*To implement pop operation*/
void pop()
{
    if(S.top==-1)
    {
        printf("Stack Underflow \n");
    }
    else
    {
        int temp=S.a[S.top];
        S.top--;
        printf("Deleted Element = %d\n",temp);
    }
}

/*To display stack elements*/
void display()
{
    if(S.top==-1)
    {
        printf("Empty Stack \n");
    }
    else
    {
        for(int i=S.top;i!=-1;i--)
        {
            printf("%d \n",S.a[i]);
        }
    }
}

/*Main Function*/
int main()
{
    S.top=-1;
    int choice,value;
    printf("Stack Operations \n");
    while(1)
    {
        printf("\nEnter Choice : \n");
        scanf("%d",&choice);
        switch(choice)
        {
            default:
            {
                printf("Enter a Choice  \n");
                break;
            }
            case 1://To push
            {
                printf("\nPush \n");
                printf("Enter the Value : \n");
                scanf("%d",&value);
                push(value);
                break;
            }
            case 2: //To pop
            {
                printf("\nPop \n");
                pop();
                break;
            }
            case 3: //To get peek
            {
                printf("\nPeek \n");
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
            case 4: // To display
            {
                printf("\nDisplay \n");
                display();
                break;
            }
            case 5: // To get size
            {
                printf("\nSize \n");
                printf("Size of Stack = %d\n",S.top+1);
                break;
            }
            case 0: // To exit
            {
                printf("\nExiting from Process \n");
                exit(0);
            }
        }
    }
    return 0;
    /*End of program*/
}


/*

OUTPUT

Stack Operations 

Enter Choice : 
1

Push
Enter the Value :
53

Enter Choice :
1

Push
Enter the Value :
74

Enter Choice :
1

Push
Enter the Value :
84

Enter Choice :
1

Push
Enter the Value :
80

Enter Choice :
1

Push
Enter the Value :
25

Enter Choice :
4

Display
25
80
84
74
53

Enter Choice :
3

Peek
Top Element : 25

Enter Choice :
2

Pop
Deleted Element = 25

Enter Choice :
4

Display
80
84
74
53

Enter Choice :
0

Exiting from Process

*/

