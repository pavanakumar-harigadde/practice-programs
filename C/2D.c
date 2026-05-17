/*Objective: Create a program that manipulates a 2-dimensional array.
■ Instructions:
□ Declare and initialize a 2-dimensional array (e.g., a 3x3 matrix).
□ Write a function to calculate the sum of the elements of the matrix and return the result.
□ Print the sum*/

#include<stdio.h>

int main()
{

    int n, a[n][n],m;
    int i,j,sum=0;
    /*Input size of the 2D array*/
    printf("Enter the number of rows and columns:");
    scanf("%d",&n);
    m=n*n;

    /*Input Array Elements*/ 
    printf("Enter %d elements to the array:\n");
    for ( i = 0; i <m ; i++)
    {
        for ( j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    /*Function to calculate the sum of the array*/
    int add()
    {
        for ( i = 0; i < n; i++)
        {
            for ( j = 0; j < n; i++)
            {
                sum=sum+a[i][j];
            }
        }
    };
    a.add();
    /*To print the sum*/
    printf("\nThe sum of all array elements is %d\n",sum);
    return 0;
}