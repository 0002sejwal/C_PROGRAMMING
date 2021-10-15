//c_programming
//Swapping_numbers
#include<stdio.h>
int main()
{
    int a = 10, b = 20;
    printf("Original Values: \na = %d \nb = %d",a,b);
    //swapping
    a=a+b;
    b=a-b;
    a=a-b;
    //printing swapped values to console
    printf("\nSwapped Values: \na = %d \nb = %d",a,b);
    return 0;
}
