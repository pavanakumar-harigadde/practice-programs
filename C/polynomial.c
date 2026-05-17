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

NODE add_poly(NODE start1,NODE start2)
{
    NODE ptr1,ptr2;
    int cur_pos=0;
    if (start1==NULL || start2==NULL)
    {
        printf("Empty List. Can't add polynomials.");
    }
    ptr1=start1;
    ptr2=start2;
    cur_pos=1;
    while(ptr1!=NULL && ptr2!=NULL && cur_pos<3)
    {
        printf("");
    }
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

int main(void)
{
    NODE start=NULL;

    return 0;
}