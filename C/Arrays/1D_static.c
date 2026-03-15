/*C Program to demonstrate 1D static array*/
#include<stdio.h>
#define size 5
int main()
{
    int arr[size] = {1,2,3,4,5};
    int i;

    /*Display array elements*/
    printf("Array is:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
/*End of program*/