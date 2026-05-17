#include<stdio.h>
#include<stdlib.h>

typedef struct NODE{
    int data;
    struct NODE *next;
}*NODE;

NODE start=NULL;

NODE createNode( int info){
    NODE new=(NODE)malloc(sizeof(NODE));
    new -> data = info;
    new -> next = NULL;
    return new;
}

NODE ins_front(NODE start, int info){
    NODE new =createNode(info);
    new->next=start;
    start=new;
    return start;
}

void display(NODE start){
    if(start==NULL)
    {
        printf("Empty List\n");
    }
    else
    {
        NODE ptr=start;
        printf("start->");
        while(ptr!=NULL)
        {
            printf("%d->",ptr->data);
            ptr=ptr->next;
        }
    }
    printf("NULL");
}

NODE ins_end(NODE start,int info){
    NODE new,ptr;
    new=createNode(info);
    if(start==NULL){
        return new;
    }
    else{
        ptr=start;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=new;
    }
    return start;
}

NODE del_beg(NODE start){
    NODE ptr;
    if(start==NULL){
        printf("Empty List\n");
    }
    else{
        ptr=start;
        int item=ptr->data;
        start=start->next;
        free(ptr);
    }
    return start;
}

NODE ins_order(NODE start,int info){
    NODE new,ptr,prev ;
    new=createNode(info);
    if(start==NULL){
        return new;
    }
    if(new->data < start->data)
    {
        new->next=start;
        start=new;
        return new;
    }
    ptr = start;
    prev=NULL;
    while(ptr!=NULL && new->data > ptr->data)
    {
        prev=ptr;
        ptr=ptr->next;
    }
    new->next=ptr;
    prev->next=new;
    return start;
}

NODE sort_list(NODE start)
{
    NODE new_start = NULL;
    int data;
    while(start!=NULL)
    {
        data=start->data;
        start=del_beg(start);
        new_start=ins_order(new_start,data);
    }
    return new_start;
}

int main()
{
    NODE start=NULL, new_start=NULL;
    /*Insert at the beginning*/ 
    printf("Insertion of elements:\n");
    start=ins_front(start, 10);
    start=ins_front(start, 20);
    start=ins_front(start, 30);
    start=ins_end(start,40);
    start=ins_end(start,50);
    start=ins_end(start,60);
    start=ins_end(start,70);
    display(start);

    printf("\n\n\n");
    printf("Sorted List:\n");
    new_start=sort_list(start);
    display(new_start);
    return 0;
}