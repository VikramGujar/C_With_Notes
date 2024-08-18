// Finding the number is a two digit number or not

#include<stdio.h>
int main()
{
    int num;
    printf("Enert number to verify :");
    scanf("%d",&num);

    if(num<=99 && num>=10)
    printf("It is Two digit number");
    else
    printf("Its not a Two digit number");
}