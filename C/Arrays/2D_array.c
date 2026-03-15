/* Static 2D Array representation */
#include<stdio.h>
int main()
{
    int i, j;
    /*Static 2D array declaration*/
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    /*Displaying array elements*/
    printf("Array:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }    
    return 0;

}
/*End of the program*/

