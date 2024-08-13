// Write a C program to accept id from user and display department.

// Id: 11 to 15 is Software department

//   16 to 20 is Developer department

//   21 to 23 is Management department

#include<stdio.h>
int main()
{
    int id;
    printf("Enter your id \n");
    scanf("%d",&id);

    if(id<=15 && id>=11)
    {
        printf("Your Department is Software department");
    }else if(id>=16 && id<=20)
    {
        printf("Your Department is Developer department");
    }else if(id>=21 && id<=23)
    {
        printf("Your Department is Management department");
    }else{
        printf("Invalide input");
    }
}