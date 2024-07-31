// Write a C program to determine the eligibility for marriage based on specific criteria. The program checks the nationality India as (I or i) 

// gender, and age of an individual and provides a response regarding their eligibility for marriage.



// Conditions:

// ----------------



// * The program is designed for Indian citizens only.



// * If the person is an Indian citizen, the program prompts for their gender.



// * For males, the program asks for their age and checks if it falls between 21 and 50 (inclusive). 

//  If so, it displays a message stating that "Congratulation! you are eligible for marriage".

//  If not, it must display a message stating that "Sorry! you are not eligible for marriage".



// * For females, the program asks for their age and checks if it falls between 18 and 45 (inclusive). 

//  If so, it displays a message stating that "Congratulation! you are eligible for marriage".

//  If not, it must display a message stating that "Sorry! you are not eligible for marriage".



// * If the person is not an Indian citizen, the program displays a message stating that the eligibility

//  check is only for Indian citizens.



// * Your task is to write a C program that implements the above conditions to determine the eligibility for marriage.



// Instructions:

// ------------------



// * Implement the program using the C programming language.

// * Use suitable variable names and data types for the program.

// * Display appropriate messages to guide the user through the input process.

// * Assume that the user will provide valid inputs.

// * Test your program with different inputs to ensure its correctness.

#include<stdio.h>
int main()
{
    char ind,gender;
    int age;
    printf("Enter your nationality if Indian enter 'I' \n");
    scanf(" %c",&ind);
    printf("Enter your Gender MALE['M'] FEMALE['F'] and age");
    scanf(" %c %d",&gender,&age);
    if(ind!='I' && ind!='i')
    {
        printf("This program is only for indians SORRY!!!\n");
    }else if(gender=='M' || gender=='m' && age >=21 && age <= 50)
    {
        printf("Congratulations !!! \n You are elegeble for marrige");
    }else if(gender=='F' || gender=='f' && age >=18 && age <= 45)
    {
        printf("Congratulations !!! \n You are elegeble for marrige");
    }else{
        printf("Sorry !!!\n You are not elegeble for marrege");
    }
}
