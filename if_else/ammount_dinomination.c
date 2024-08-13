// Write a C program to input amount from user and print minimum number of
//  notes (Rs. 500, 100, 50, 20, 10, 5, 2, 1) required for the amount.
//   How to the minimum number of notes required for the given amount in C programming.
//    Program to find minimum number of notes required for the given denomination. 
//    Logic to find minimum number of denomination for a given amount in C program


#include <stdio.h>
int main()
{
    int ammount;
    puts("Enter ammount");
    scanf("%d", &ammount);

    printf("Rs. 500 notes: %d \n", ammount / 500, ammount = ammount % 500);
    printf("Rs. 200 notes: %d \n", ammount / 200, ammount = ammount % 200);
    printf("Rs. 100 notes: %d \n", ammount / 100, ammount = ammount % 100);
    printf("Rs. 50 notes: %d \n", ammount / 50, ammount = ammount % 50);
    printf("Rs. 20 notes: %d \n", ammount / 20, ammount = ammount % 20);
    printf("Rs. 10 notes: %d \n", ammount / 10, ammount = ammount % 10);
    printf("Rs. 5 notes: %d \n", ammount / 5, ammount = ammount % 5);
    printf("Rs. 2 notes: %d \n", ammount / 2, ammount = ammount % 2);
    printf("Rs. 1 notes: %d \n", ammount / 1, ammount = ammount % 1);
}