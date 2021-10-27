//Write a program in C to find the LCM of two numbers using recursion

#include<stdio.h>

int find_lcm(int, int);   // function prototype declaration

int main()
{
    int x, y, lcm;
    printf("Enter 2 integers to find LCM of: ");
    scanf("%d%d", &x, &y);
    lcm = find_lcm(x,y);    // function call
    printf("\nLCM of %d and %d is: %d\n", x, y, lcm);
    return 0;
}

int find_lcm(int x, int y) 
{
    static int temp = 1;    
    if(temp%x == 0 && temp%y == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        find_lcm(x,y);
        return temp;
    }
}
