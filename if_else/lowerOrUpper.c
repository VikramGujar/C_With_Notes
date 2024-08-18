// Finding the given alfabate is lower case or upper case 

#include<stdio.h>
int main()
{
    char a;
    printf("Enetr a alphabte character to identify :");
    scanf(" %c",&a);

    if(a>='A' && a<='z')
    {
        if(a>='A' && a<='Z')
        printf("is UpperCase");
        if (a>='a' && a<='z')
        printf("is LowerCase");
    }else{
        printf("Not a alphabate");
    }

}