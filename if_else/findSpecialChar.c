// Find the input is special character or not



#include<stdio.h>
int main()
{
    char ch;
    printf("Enetr a input to identify :");
    scanf(" %c",&ch);

    if(ch>='1' && ch<='9' || ch>='A' && ch<='z')
    printf("Input is not special char");
    else 
    printf("Its Special char");
}
