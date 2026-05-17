/*1-Dimensional Array:
■ Declare and initialize a 1-dimensional array with 5 elements.
■ Write a function to calculate the address of an element using the formula:
Address = Base Address + (i × Size of element)
where i is the index of the element.
■ Print the address of a specified element.
□ 2-Dimensional Array:
■ Declare and initialize a 2-dimensional array with 3 rows and 3 columns.
■ Write a function to calculate the address of an element using the formula for row-major order:
Address = Base Address + [(i × Total Columns) + j] × Size of element
where i and j represent the row and column indices of the element.
■ Print the address of a specified element.*/

#include<stdio.h>
int main()
{
    int a[5];
    int b[3][3];
    int i,j;
    int *base=&a[0];
    int address;
    /*Input elements for 1D Array*/
    printf("Enter 5 elements for 1D array:\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the index of the element address of which is required:");
    scanf("%d",&i);
    address=(int)base+i*sizeof(int);
    printf("Address of the element at the address %d is %lu\n\n",i,address);

    printf("Enter ( elements of 2D array:\n)");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",b[i][j]);
        }

    }
    base=&b[0][0];
    printf("Enter the index address of which is required: ");
    scanf("%d%d",i,j);
    address=(int)base+(i*3+j)*sizeof(int);
    printf("Address of b[%d][%d] : %lu",i,j,address);
    return 0;
}