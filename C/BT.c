/*C program to implement Binary Tree using Arrays And Linked Lists*/ 
#include<stdio.h>
#include<stdlib.h>
#define MAX 20


/* BTree implementation using arrays */
void insert(int Tree[], int *size, int value){
    Tree[(*size)++]=value;
}

void display(int Tree[], int size){
    if(size==0){
        printf("Tree is Empty");
        return;
    }
    printf("Binary Tree(Level Order):\n");
    for(int i=0;i<size;i++){
        printf("%d ", Tree[i]);
}
}

/*int parent(int i){
    return (i-1)/2;
}

int leftchild(int i){
    return 2*i+1;
}

int rightchild(int i){
    return 2*i+2;
}

/*void TreeNodeRelations(int Tree[], int size, int i){
    
    if( i<0||i>=size){
        printf("Invalid Index\n");
    }
    printf("Node at the index %d : %d\n", i, Tree[i]);
    if( i>0){
        printf("Parent Node: %d\n", Tree[parent(i)]);
    }
    if(leftchild(i)< size){
        printf("Leftchild : %d\n",Tree[leftchild(i)]);
    }
    if(rightchild(i)< size){
        printf("Rightchild : %d\n",Tree[rightchild(i)]);
    }
}
*/


/*BTree implementation using DLL*/
/*Structure to define a tree node*/
typedef struct node{
    int value;
    struct node * left;
    struct node *right;
}*TNode;



/*Create a tree node*/
TNode createNode(int value){
    TNode new = (TNode)malloc(sizeof(TNode));
    if(new == NULL){
        printf("Insufficient Memory");
        return NULL;
    }
    new->value=value;
    new->left=NULL;
    new->right=NULL;
    return new;
}
/* Insert a tree node */
TNode insertnode(TNode root, int value){
    TNode new = createNode(value);
    if(root == NULL){
        return new;
    }

    TNode queue[MAX];
    int front=0, rear=0;
    queue[rear++]=root;

    while(front<rear){
        TNode temp = queue[front++];
        if(temp->left==NULL){
            temp->left=new;
            return root;
        }
        else{
            queue[rear++]=temp->left;
        }
        if(temp->right==NULL){
            temp->right=new;
            return root;
        }
        else{
            queue[rear++]=temp->right;
        }
         
    }
     return root;
}

void DFS(TNode root){
    if(root!=NULL){
        DFS(root->left);
        printf("%d ",root->value);
        DFS(root->right);
    }
    
}


int main(void){
    int Tree[MAX];
     int i, size=0;
    int values[]={5,2,7,4,1,5,7,4,6,9,2,4,8,3,4};
    int n=sizeof(values)/sizeof(values[0]);
   
    for(i=0; i<n; i++){
        insert(Tree, &size, values[i]);
    }
    display(Tree, size);

    TNode root = NULL;
    for (int i = 0; i < n; i++)
        root = insertnode(root, values[i]);
    printf("\nLinked List Binary Tree(Inorder Traversal) :");
    DFS(root);
    return 0;
}
