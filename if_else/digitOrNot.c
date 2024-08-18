// Fint given input is digit or not 


#include<stdio.h>
int main()
{
    char n;
    printf("Enetr a input to identify :");
    scanf(" %c",&n);

    if(n>='0' && n<='9')
    {
        printf("is Digit");
    }else
    printf("Not a Digit");
}