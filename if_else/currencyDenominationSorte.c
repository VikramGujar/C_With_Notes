// Currency Denomination Sorter


#include <stdio.h>
int main()
{
    int ammount;
    puts("Enter ammount");
    scanf("%d", &ammount);


if(ammount/500!=0)    printf("Rs. 500 notes: %d \n", ammount / 500);
ammount=ammount%500;
if(ammount/200!=0)    printf("Rs. 200 notes: %d \n", ammount / 200);
ammount=ammount%200;
if(ammount/100!=0)    printf("Rs. 100 notes: %d \n", ammount / 100);
ammount=ammount%100;
if(ammount/50!=0)    printf("Rs. 50 notes: %d \n", ammount / 50);
ammount=ammount%50;
if(ammount/20!=0)    printf("Rs. 20 notes: %d \n", ammount / 20);
ammount=ammount%20;
if(ammount/10!=0)    printf("Rs. 10 notes: %d \n", ammount / 10);
ammount=ammount%10;
if(ammount/5!=0)    printf("Rs. 5 notes: %d \n", ammount / 5);
ammount=ammount%5;
if(ammount/2!=0)    printf("Rs. 2 notes: %d \n", ammount / 2);
ammount=ammount%2;
if(ammount/1!=0)    printf("Rs. 1 notes: %d \n", ammount / 1);

}