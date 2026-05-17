/*Find the sum of elements of the first row in an array and also the column sum*/
#include<stdio.h>
#define MAX 3
int main(void)
{
    int i, j,m,n,sum1=0,sum2=0, arr[MAX][MAX];
    printf("Enter Matrix elements:\n");
    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Display Matrix Elements :\n");
    
    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX;j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    /*Calculating sum of rows*/
    printf("\nEnter the number of row sum of which is wanted?\n");
    scanf("%d",&m);
    printf("i=%d\n",m);
    while(arr[i]==arr[m])
    {
        for(j=0;j<MAX;j++)
        {
            sum1=sum1+arr[i][j];
        }
    }
    printf("The sum of all elements of the row i: %d",sum1);

    /*Calculating sum of elements of same column*/
    printf("\n\nEnter the number of column sum of which is wanted?\n");
    scanf("%d",&n);
    printf("j=%d",n);
    while(j==n)
    {
        for(i=0;i<MAX;i++)
        {
            sum2=sum2+arr[i][j];
        }
    }
    printf("\nThe Sum of the all elements of the column j: %d",sum2);
    return 0;
}