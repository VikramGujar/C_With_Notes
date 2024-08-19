// Finding the given number is even or odd without using %(mod) operator



#include<stdio.h>
int main()
{
    int num;
    printf("Enetr a number :");
    scanf("%d",&num);

    if(num/2*2==num)
    printf("Even Number");
    else
    printf("Odd number");
}