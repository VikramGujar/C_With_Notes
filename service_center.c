// Write a C program for a service center by following given Rules and Guide lines.



// * This service center only accepts 2 wheeler ,3 wheeler & 4 wheeler . If any other vehicle 

// came to you , you have to show a message that "this service center is not accepting

// other than 2 wheeler, 3 wheeler and 4 wheeler".



// * If the vehicle is 2 ,3 & 4 only then you have to ask the user what is the age of the vehicle.



// * If the age your vehicle is above 8 months then only accept the service center 

// otherwise you have to show a message that "your vehicle servie will done after a while".



// * If the vehicle age is greater than 8 months then show options to the user on the console
// * Options:



// 1)Enter 1 for tyre problem

// 2)Enter 2 for fuel problem

// 3)Enter 3 for engine issue

// 4)Enter 4 for general services



// * If the user enter 1 as input so it is tyre problem statement so you have to show a message "how many tyres you are facing the issue ?", based on the issue on the no of tyres,

// generate the bill.



// * For example tyre cost Rs. 400 , if the user providing 3 tyre then the bill should be

// generated as Rs. 1200 in below format.



// Name of the owener

// Name of the bike

// Issue

// Bill



// * For fuels problem cost is Rs.1500

// * For engine issue cost is Rs.5000

// * For general servicing cost is Rs.1000



// And generate the bill in the above format.

#include<stdio.h>
int main()
{
    int wheel,age,issue,bill;

    puts("Enter how many wheeler vehical is? and age of your vehical in months \n");
    scanf("%d %d",&wheel,&age);
    char BikeName[20];
    char name[20];
    printf(" Enter your firstname and bike name");
    scanf(" %s %s",name ,BikeName);
    

    if(wheel != 2 && wheel != 3 && wheel != 4 )
    {
        printf("this service center is not accepting other than 2 wheeler, 3 wheeler and 4 wheeler");
    }
    if(age >=0 && age <=8)
    {
        printf("your vehicle servie will done after a while");
    }
   
   else{
    label:
    printf("Enter 1 for tyre problem \n Enter 2 fṇor fuel problem \n Enter 3 for engine issue \n Enter 4 for general services ");
    scanf("%d",&issue);

    if(issue ==1)
    {
        int tyre;
        printf("how many tyres you are facing the issue ? \n");
        scanf("%d",&tyre);
        bill = 400 * tyre;
        
        printf("Name of the owener %s \n",name);
        printf("Name of the bike %s \n",BikeName);
        printf("Tire proble");
        printf("Your bill is : %d",bill);

    }else if(issue==2)
    {
        bill = 1500; // fuel problem cost is 1500
        printf("Name of the owener %s \n",name);
        printf("Name of the bike %s \n",BikeName);
        printf("fuels problem \n");
        printf("Your bill is : %d",bill);
    }else if(issue==3)
    {
        bill = 5000; // engine problem cost is 5000
        printf("Name of the owener %s \n",name);
        printf("Name of the bike %s \n",BikeName);
        printf("engine issue \n");
        printf("Your bill is : %d",bill);
    }else if(issue==4)
    {
        bill = 1000; // General service cost is 5000
        printf("Name of the owener %s \n",name);
        printf("Name of the bike %s \n",BikeName);
        printf("General Service \n");
        printf("Your bill is : %d",bill);
    }else{
        printf("\a You entered invalid input \n");
        goto label;
    }
    
    }
}
