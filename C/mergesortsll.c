#include<stdio.h>
#include<stdlib.h>

typedef struct NODE{
    int data;
    struct NODE *next;
}*NODE;

NODE init(NODE start){
    return NULL;
}

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

NODE mergeList(NODE start1, NODE start2)
{
    while(start2!=NULL)
    {
        int data= start2->data;
        start2=del_beg(start2);
        start1=ins_end(start1,data);
    }
    return start1;
}

int main()
{
    NODE start1=NULL;
    NODE start2=NULL;
    /*Insertion of elements*/
    printf("First List:\n");
    start1=ins_front(start1, 10);
    start1=ins_front(start1, 20);
    start1=ins_front(start1, 30);
    start1=ins_end(start1,40);
    start2=ins_end(start2,50);
    start2=ins_end(start2,60);
    start2=ins_end(start2,70);
    display(start1);
    printf("\n\nSecond List:\n");
    display(start2);

    printf("\n\n\n");
    /*Merge the list*/
    printf("Merged List:\n");
    start1=mergeList(start1,start2);
    display(start1);
    return 0;
}
