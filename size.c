/*Objective: Write a program to determine and print the sizes of different data types in C.
■ Instructions:
□ Use the sizeof operator to find the sizes of the following data types: int, float, double, char,
and long.
□ Print the sizes in bytes.*/

#include<stdio.h>
int main()
{
    
    printf("Size of %lu bytes\n",sizeof(int));
    printf("Size of %lu bytes\n",sizeof(float));
    printf("Size of %lu bytes\n",sizeof(char));
    printf("Size of %lu bytes\n",sizeof(double));
    printf("Size of %lu bytes\n",sizeof(short));
    printf("Size of %lu bytes\n",sizeof(long));
    return 0;
}