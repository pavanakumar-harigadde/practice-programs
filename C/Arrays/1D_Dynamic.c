/*C Program to demonstrate 1D dynamic array*/
#include<stdio.h>
#define size 5
int main()
{
    int arr[size], i;

    /*Inserting array elements*/
    printf("Enter %d elements:\n", size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    /*Displaying array elements*/
    printf("Array is :\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
/*End of the program*/