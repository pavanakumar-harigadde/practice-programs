#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
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

NODE del_end(NODE start)
{
    if(start==NULL){
        printf("Empty List");
        return NULL;
    }
    if(start->next==NULL)
    {
        free(start);
        start=NULL;
        return start ;
    }
    NODE ptr=start;
    while(ptr->next->next != NULL){
        ptr=ptr->next;
    }
    free(ptr->next);
    ptr->next=NULL;
    return start;
}

int main()
{
    NODE start=NULL;
    /*Insert at the beginning*/ 
    printf("Insert at Beginning:\n");
    start=ins_front(start, 10);
    start=ins_front(start, 20);
    start=ins_front(start, 30);
    display(start);

    /*Insert at the end*/
    printf("\n\nInsert at End:\n");
    start=ins_end(start,40);
    start=ins_end(start,50);
    start=ins_end(start,60);
    start=ins_end(start,70);
    display(start);

    /*Delete at beginning*/
    printf("\n\nDelete at front:\n");
    start=del_beg(start);
    display(start);

    /*Delete at end*/
    printf("\n\nDelete at last:\n");
    start=del_end(start);
    display(start);
    
    return 0;
}
