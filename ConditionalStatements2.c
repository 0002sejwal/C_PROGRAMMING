/*
Hi there, Byte again. One thing I am absolutely the worst at, is deciding what to eat. So what I’m going to do is, I’m going to enter a random number from 1 to 5, and I want you to give me a food item and its price on separate lines (use ‘\n’). You could put any food items of your choice, but in case you’re bad at decisions too, here’s what you can do:

Pizza, Rs 239
Burger, Rs 129
Pasta, Rs 179
French Fries, Rs 99
Sandwich, Rs 149
Change the order up please. I like to be surprised. So, in this case if I enter 3, you could print something like -

Food item - Pasta

Price - Rs 179
*/

#include<stdio.h>
int main()
{
    int a_random_variable=0;
    printf("Pick an item : \n1. Pizza\n2. Burger\n3. Pasta\n4. French Fries\n5. Sandwich\nEnter your choice: ");

    scanf("%d",&a_random_variable);
    switch(a_random_variable)
    {
        case 1: printf("Food Item: Pizza\nPrice: Rs 239/-");
                break;
        case 2: printf("Food Item: Burger\nPrice: Rs 129/-");
                break;
        case 3: printf("Food Item: Pasta\nPrice: Rs 179/-");
                break;
        case 4: printf("Food Item: French Fries\nPrice: Rs 99/-");
                break;
        case 5: printf("Food Item: Sandwich,\nPrice: Rs 149/-");
                break;
        default:printf("Incorrect input!!! Enter a number between 1 and 5!");
                break;
    }
}
