// Write a C program to enter month number between(1-12) and print number of days in month using if else. How to print number of days in a given month using if else in C programming. Logic to find number of days in a month in C program

#include<stdio.h>
int main(){
    int month;
    puts("Enter month");
    scanf("%d",&month);

    if(month==1 || month==3 || month==5 || month==1 || month==7 || month==8 || month==10 || month==12){
        puts("31 days");
    }
    else if(month==4 || month==6 || month==9 || month==11){
        puts("30 days");
    }
    else if(month==2){
        puts("28/29 days");
    }
    else{
        puts("invalid month");
    }
}