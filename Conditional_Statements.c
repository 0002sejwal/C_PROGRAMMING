/*
Write a C program that first asks for the marks.
Take an input after printing “Enter marks”. Then 
use decision making and print “Grade A”, “Grade 
B”, “Grade C”, “Grade D” or “Grade F” based on 
the bins provided above.
*/
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d",&marks);

    /*
    85 - 100 -> Grade A 
    70 - 84 -> Grade B 
    55 - 69 -> Grade C 
    40 - 54 -> Grade D 
    Below 40 -> Grade F
    */

    if(marks>0)
    {
    if(marks>84 && marks<101)
    {
        printf("Grade A");
    }
    else if(marks>69 && marks<85)
    {
        printf("Grade B");
    }
    else if(marks>54 && marks<70)
    {
        printf("Grade C");
    }
    else if(marks>39 && marks<55)
    {
        printf("Grade D");
    }
    else if(marks<40)
    {
        printf("Grade F");
    }
    }
    else
    {
        printf("XXXXX----Incorrect Input!!!!!----XXXXX");
    }
    
    return 0;
}
