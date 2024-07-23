// Write a c program to get the big number from given three numbers


#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    
    if(a==b && b==c)puts("All are equal");
    else if(a>b && a>c)puts("a is big");
    else if(a==b && c<b)puts("a and b are big");
    else if(a==c && b<a)puts("a and c are big");
    else if(c==b && a<b)puts("c and b are big");
    else if("b>c")puts("b is big");
    else("c is big");
    

    return 0;
}