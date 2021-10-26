// Write a program in C to find the sum of digits of a number using recursion
// Your Input and Output should look similar to this
// Input Input number: 1234 Output Sum of digits: 10
// Submit your GITHUB link for grade calculation below. Thanks! Here is a video on how to upload the GITHUB link.

#include <stdio.h>
 
int sum_of_digits(int x)
{
    if (x == 0)
       return 0;
    return (x % 10 + sum_of_digits(x / 10));
}
 
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    int result = sum_of_digits(num);
    
    printf("Sum of digits in %d is %d\n", num, result);
    return 0;
}
