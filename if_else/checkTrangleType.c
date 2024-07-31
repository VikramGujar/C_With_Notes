// Write a C Program to check whether the triangle is an equilateral, isosceles or scalene triangle. Using the if-else statement.

// Take the inputs from the user.



// Case-1 :

// Enter the lengths of the sides of the triangle:

// Side 1: 5

// Side 2: 5

// Side 3: 5



// Case-2:

// Enter the lengths of the sides of the triangle:

// Side 1: 4

// Side 2: 5

// Side 3: 4

// The triangle is an isosceles triangle.



// Case-3:

// Enter the lengths of the sides of the triangle:

// Side 1: 3

// Side 2: 4

// Side 3: 5

// The triangle is a scalene triangle.

#include<stdio.h>
int main()
{
    int sideA,sideB,sideC;
    puts("Enter three sides of trangle \n");
    scanf("%d %d %d",&sideA,&sideB,&sideC);

    if(sideA==sideB && sideA==sideC)
    {
        printf("The trangle is an equilateral triangle\n");
    }else if(sideA==sideB || sideA==sideC)
    {
        printf("The triangle is an isosceles triangle \n");
    }else{
        printf("The triangle is a scalene triangle.");
    }
    return 0;
}