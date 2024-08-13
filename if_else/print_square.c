// Write a C program by taking one integer value from the user, if the given number's
// last digit is smaller than 5 then print the square of that number else print that 
// same number.


#include<stdio.h>
int main()
{
    int n;

    puts("Enter the number \n");
    scanf("%d",&n);

    if(n%10<5){
        printf("square of %d = %d",n,n*n);
    }else{
        printf("Number = %d",n);
    }
    return 0;
}