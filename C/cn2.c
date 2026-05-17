#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

struct node createNode(int data ){
    struct node * temp;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp!=NULL)
    {
    temp->data=data;
    temp->next = NULL;
    }
    else
    printf("\n\t Unable to create node");
    return *temp;
};

int main()
{
    
}