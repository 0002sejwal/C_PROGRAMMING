/*
Write a C program that defines a structure employee containing the details such as empno, empname, department name and salary. The structure has to store 20 employees in an organization. Use the appropriate method to define the above details and define a function that will display the contents?

Your Output should look similar to this

Name Age Phone Number Salary Chirag 24 1234567788 20000 Arnav 31 1234567891 56000 Shivam 45 8881101111 30500
*/
#include<stdio.h>
#define MAX 20
int main()
{
    struct empl
    {
        char name[20];            //employee name
        int age;                  //employee age
        int phone_number;         //employee id
        int sal;                  //employee salary
    };
    struct empl emp[MAX]=
    {
        {"Purvi",25,1111111111,4000},
        {"Yash",26,1010101010,5000},
        {"Tanya",22,5634896442,7000},
        {"Aman",23,1236517893,5236},
        {"Shorya",25,1234567890,5000},
        {"Ishita",26,1123624789,3000},
        {"Dheeraj",25,4563217890,7000},
        {"Yukta",24,1114569870,6000},
        {"Khushboo",26,1563417890,5000},
        {"Rajat",23,4569382710,5000},
        {"Charchit",25,1545595655,4000},
        {"Neha",26,9988998899,5000},
        {"Kartikeya",22,8855226633,7000},
        {"Aashi",23,1230450607,5236},
        {"Shubhojeet",25,9173824650,5000},
        {"Meha",26,1535264207,3000},
        {"Rupali",25,9586847123,7000},
        {"Mayank",24,1526347980,6000},
        {"Shashwat",26,4361769485,5000},
        {"Abhishek",23,9630258741,5000},
    };
    int i;
    for(i=0;i<=MAX-1;i++)
    {
        printf("\nData of employee %d ",i+1);
        printf("\nEmployee name: %s",emp[i].name);
        printf("\nEmployee age: %02d",emp[i].age);
        printf("\nEmployee Phone Number: %ld",emp[i].phone_number);
        printf("\nEmployee salary: %d",emp[i].sal);
        printf("\n\n");
    }
    return 0;
}
