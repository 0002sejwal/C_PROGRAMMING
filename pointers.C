/*
Write a C program to initialize a 3x3 array, insert elements into the array, read and print an array of elements using only pointers. Also find and print the sum of all diagonal elements.

Your input and Output should look similar to this

Input elements in the matrix : element - [0],[0] : 1 element - [0],[1] : 2 element - [0],[2] : 3 element - [1],[0] : 4 element - [1],[1] : 5 element - [1],[2] : 6 element - [2],[0] : 7 element - [2],[1] : 8 element - [2],[2] : 9 The matrix is : 1 2 3 4 5 6 7 8 9
*/

#include<stdio.h>
main()
{
int i,j,a,b,sum=0,k=0,m=0,n;
int *p,*q,*r;
int arr[50][50];
printf("Enter size of the row or column.\n");
scanf("%d",&a);
printf("Enter the elements of the array:\n");
for(i=0 ;i<a ;i++)
{
for(j=0;j<a;j++)
{

scanf("%d",&arr[i][j]);
}
}
for(i=0;i<a;i++)
{
p=&arr[i];
sum=sum + *(p+m);
m=m+1;
}

printf("Sum of diagonals is %d",sum);

}
