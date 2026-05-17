/*Write a C program to search an element using Linear search */
#include<stdio.h>
#include<conio.h>
void main()
{
    int size, arr[size];
    int key;
    /*Input array elements*/ 
    printf("Enter array elements:\n");
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    
    /*Input Key value to search*/
    printf("Enter the key value to search:");
    scanf("%d",&key);
    /*Check for key value in the array*/
    for (int i=0; i<size; i++)/*to search one by one element through the array*/
    {
        if (arr[i]==key)
        {
          printf("\nThe specified key value is in the position:%d\n",&arr[i]+1);
        }
    if (arr[size]-1==key)/*checks if the key value presented in the last index*/
    {
       printf("\nThe key value is present in the last index of the array\n");
    }
    else
    {
        printf("\nThe key value is not present in the array\n");
    }    
    }
    getch();  
} 