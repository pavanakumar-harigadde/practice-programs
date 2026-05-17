/*Objective: Write a program to demonstrate pointer arithmetic with a 1-dimensional array.
■ Instructions:
□ Declare a 1-dimensional array of integers and initialize it with 5 values.
□ Use a pointer to traverse the array and print each element using pointer arithmetic.
■ */

#include<stdio.h>
int main()
{
    
    int a[6];
    int *ptr=NULL;
    printf("Enter 5 array elements:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The 5 array elements are printed below:\n");
    for (int i = 0; i < 5; i++)
    {
        ptr=&a[i];
        printf("%d\t",*ptr);
    }
    return 0;
}