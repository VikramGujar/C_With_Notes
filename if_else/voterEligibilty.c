// Find the voter is elegible for voting or not by there age

#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age :");
    scanf("%d",&age);

    if(age>=18)
    printf("Congratulations!!! You are elgible for voting");
    else
    printf("You are not elegeble");
}