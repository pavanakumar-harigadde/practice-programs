/*C Program to create Doubly Linked List*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    int data;
    struct node * next;
    struct node * prev;
}* NODE;

/*Creating a new node*/
NODE CreateNode(int data)
{
    NODE new=(NODE)malloc(sizeof(NODE));
    if(new==NULL)
    {
        printf("Empty Node");
    }
    new->data=data;
    new->prev = new->next = NULL;
    return new;
}

void display(NODE start)
{
    NODE ptr=start;
    if(start==NULL)
    {
        printf("Empty List");
    }
    printf("Start-> ");
    if(start->next==NULL)
    {
        printf("%d -> ",start->data);
    }
    else
    {
        
        while(ptr!=NULL)
        {
            printf("%d -> ",ptr->data);
            ptr=ptr->next;
        }
    }
    printf("NULL\n");
}

NODE ins_front(NODE start, int data)
{
    NODE new=CreateNode(data);
    new->next=start;
    start->prev=new;
    start=new;
    return start;
}

NODE ins_end(NODE start, int data)
{
    NODE new=CreateNode(data);
    NODE ptr=start;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }   
    ptr->next=new;
    new->prev=ptr;
    new->next=NULL;
    return start;
}

NODE del_front(NODE start)
{
    NODE ptr=NULL;
    if(start==NULL)
    {
        printf("Empty List. Node can't be added.\n");
    }
    else
    {
        ptr=start;
        ptr->next->prev=NULL;
        start=ptr->next;
        free(ptr);
    }
    return start;
}

int main(void)
{
    NODE start=NULL;
    start=CreateNode(10);
    printf("\nLinked List after creating a node:\n");
    display(start);
    start=ins_front(start, 20);
    printf("\nLinked List after inserting a node in the beginning:\n");
    display(start);
    start=ins_end(start, 30);
    printf("\nLinked List after inserting a node at the end:\n");
    display(start);
    printf("\n\nDelete at Front:\n");
    start=del_front(start);
    display(start);
    return 0;
    
}