// Write a C program to check whether the given number is negative , positive or Zero. Take the input from the user and print appropriate statement 
// as per your input. Develop it by using control flow statement.


#include<stdio.h>
int main()
{
    int num;

    puts("Enter the number \n");
    scanf("%d",&num);
    if(num > 0)
    {
        printf("Positive");
    }
    if(num<0)
    {
        printf("Nrgative");
     }if(num ==0)
     {
        printf("number is zero");
    }
    return 0;
}