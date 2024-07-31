// Design a program that takes a year as input and determines whether
// it is a leap year or not. Consider the leap year rules (divisible by 4, but not divisible by 100 unless also divisible by 400)
// and use if-else statements to provide the appropriate output



#include<stdio.h>
int main()
{
    int year;

    puts("Enter the year \n");
    scanf("%d",&year);

    if(year%4==0 && year%100!=0 || year%400==0){
        printf("%d is leap year",year);
    }else{
        printf("%d is not not leap year",year);
    }
    return 0;
}