// Finding absolute value of given no [Always positive].


#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<0)
    n=-n;
    printf("Absolute Value of n is :%d",n);
}