// Check the trangle is valid or not by checking two sides of the trangle must be greater that the 
// therd side of trangel

#include<stdio.h>
int main()
{
    int a,b,c;
    puts("Enter three sides of the trangale: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a+b >c && b+c >a && a+c >b){
        puts("Trangle is valid");
    }else
    puts("trangel is not valid");
}