#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
} *NODE;

int main()
{
    struct node *start=NULL;
    start =(struct node*)malloc(sizeof(struct node));
    start->data=40;
    start->next=NULL;

printf("%d",start->data);
return 0;
}