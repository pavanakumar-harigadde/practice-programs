#include<stdio.h>
#include<stdlib.h>

typedef struct NODE{
    int data;
    struct NODE *next;
}*NODE;


NODE createNode( int info){
    NODE new=(NODE)malloc(sizeof(NODE));
    new -> data = info;
    new -> next = NULL;
    return new;
}

void display(NODE start){
    if(start==NULL)
    {
        printf("Empty List\n");
    }
    else
    {
        printf("Start->");
        NODE ptr=start;
        while(ptr!=NULL)
        {
            printf("%d->",ptr->data);
            ptr=ptr->next;
        }
        printf("NULL");
    }
}

NODE ins_order(NODE start, int data)
{
    NODE new =createNode(data);
    NODE ptr=NULL,prev=NULL;
    if(start==NULL)
    {
        return new;
    }
    ptr=start;
    while(ptr!=NULL && ptr->data<new->data)
    {
        prev=ptr;
        ptr=ptr->next;
    }
    new->next=ptr;
    prev->next=new;
    return start;
}

int main(void)
{
    NODE start=NULL;
    start=ins_order(start,10);
    start=ins_order(start,25);
    start=ins_order(start,48);
    start=ins_order(start,84);
    start=ins_order(start,25);
    start=ins_order(start,30);
    start=ins_order(start,95);
    start=ins_order(start,15);
    printf("INS ORDER\n");
    display(start);
    return 0;
    
}