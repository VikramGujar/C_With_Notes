// Printing 1 to n numbers without using of loop

#include<stdio.h>
int main()
{
    int num,i=1;
    printf("How many numbers you want to print :");
    scanf("%d",&num);
    start:
    printf("%d \n",i);
    if(num>i)
    {
        ++i;
        goto start;
    }
}