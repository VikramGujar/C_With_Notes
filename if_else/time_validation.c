// Get time as a input from user and then check weather it is AM or PM 
// and also print time in 12 hours fromat if it is grater than 12
// Program to take the hours and minutes as input by the user and the show that whether it is AM or PM using if-else statement


#include<stdio.h>
int main()
{
    int time , minute;

    puts("Enter the time in 24 hour and minute formate \n");
    scanf("%d %d",&time,&minute);

    if(time<=12){
        printf("The Time is %d:%d  AM",time,minute);
    }if(time>12){
        int for_12_hours =time-12;
        printf("The Time is %d:%d  PM",for_12_hours,minute);
    }
    return 0;
}