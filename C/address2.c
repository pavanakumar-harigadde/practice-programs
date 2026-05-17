#include<stdio.h>

int main()
{
    int i,j;
    int b[3][3];
    int address;
    int *base=&b[0][0];
   
    printf("Enter 9 elements of 2D array:\n");
    for( i = 0; i < 3; i++)
    {
        for( j = 0; j < 3; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Enter the index address of which is required:\n ");
    scanf("%d%d",&i,&j);
    address=(int)base+(i*3+j)*sizeof(int);
    printf("Address of b[%d][%d] : %lu",i,j,address);
    
    return 0;
}