// Write a c program to calculate the salary and based on that salary calculate the tax for the person

// based on their designation by following few rules which are below

// * 3 Type of Designation are there name as

//  -> Developer

//  (Indicated by D or d)

//  -> Trainer

//  (Indicated by T or t)

//  -> Manager

//  (Indicated by M or m)

// [Note - For wrong designation print a message as "Invalid input".

// * 3 Type of Extra Allowance are there which will be added in the salary

//  Home Allowance  =10000

//  Food Allowance  =3000

//  Travel Allowance =10000

// * If the designation is Developer There salary will be calculated by adding

//  Total Salary= Salary + Home Allowance

//  If the designation is Trainer There salary will be calculated by adding

//  Total Salary= Salary + Home Allowance + Food Allowance

//  If the designation is Manager There salary will be calculated by adding

//  Total Salary= Salary + Home Allowance + Food Allowance + Travel Allowance

// * If the Total Salary is greater than 40000 then calculate the tax as 10% from the total salary

//  else 5% of total salary

// [note: Take the Designation and salary from the user and based on the that

//     calculate Total Salary and also based on Total Salary calculate the tax].

#include <stdio.h>
int main()
{
    char Designation; // Developer,Trainer,Manager
    int total_sal, Home_Allowance = 10000, Food_Allowance = 3000, Travel_Allowance = 10000, sal = 35000;
    float tax;

    printf("Enter your Designation \n");
    scanf(" %c", &Designation);

    printf("Basic salury is %d \n", sal);

    if (Designation == 'D')
    {
        total_sal = sal + Home_Allowance;
        if (total_sal >= 40000)
        {
            total_sal = sal + Home_Allowance;
            tax = total_sal * 0.1;
            printf("Total Salary:%d \n", total_sal);
            printf("Your tax is %.2f", tax);
        }
        else
        {
            tax = total_sal / 0.05;
            printf("Total Salary:%d \n", total_sal);
            printf("Your tax is %.2f", tax);
        }
    }
    else if (Designation == 'T')
    {
        total_sal = sal + Home_Allowance + Food_Allowance;
        if (total_sal >= 40000)
        {
            total_sal = sal + Home_Allowance + Food_Allowance;
            tax = total_sal *0.1;
            printf("Total Salary:%d \n", total_sal);
            printf("Your tax is %f", tax);
        }
        else
        {
            tax = total_sal / 0.05;
            printf("Total Salary:%d \n", total_sal);
            printf("Your tax is %f", tax);
        }
    }
    else if (Designation == 'M')
    {
        total_sal = sal + Home_Allowance + Food_Allowance + Travel_Allowance;
        if (total_sal >= 40000)
        {
            total_sal = sal + Home_Allowance + Food_Allowance + Travel_Allowance;
            tax = total_sal * 0.1;
            printf("Total Salary:%d \n", total_sal);
            printf("Your tax is %f", tax);
        }
        else
        {
            tax = total_sal / 0.05;
            printf("Total Salary:%d \n", total_sal);
            printf("Your tax is %f", tax);
        }
    }
    else
    {
        puts("Invalid Input");
    }
}