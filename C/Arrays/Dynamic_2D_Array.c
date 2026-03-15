/*C Program to demonstrate 2D dynamic array*/
#include<stdio.h>
#define size 3

int main(void)
{
    int arr[size][size];
    int i, j;
    /* Insert array elements */
    printf("Enter element to insert:\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    /* Displaying array elements */
    printf("Array is:\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;

}
/*End of the program*/