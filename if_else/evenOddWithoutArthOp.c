//  Finding the given number is even or odd without using arthmatic oprator



#include<stdio.h>
int main()
{
    int num;
    printf("Enetr a number :");
    scanf("%d",&num);

    if((num&1)==0)
    printf("Even Number");
    else
    printf("Odd number");
}