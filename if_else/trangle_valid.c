// Program to take a value from the user as input all sides of a triangle and 
// check whether the triangle is valid or not. Using if-else.



#include<stdio.h>
int main()
{
    int a,b,c;

    puts("Enter three sides of trangle \n");
    scanf("%d %d %d ",&a,&b,&c);

    if(a + b >  c){
        puts("Valid");
    }else{
        puts("Invalid");
    }
    return 0;
}