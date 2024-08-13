// take input from user as 6 subject marks then calculate the average and give grade to the student



#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5,sub6;
    int avg;

    puts("Enter six subject marks of srudent \n");
    scanf("%d %d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5,&sub6);
    avg=(sub1+sub2+sub3+sub4+sub5+sub6)/6;
    printf("Total marks =%d \n",sub1+sub2+sub3+sub4+sub5+sub6);
    printf("Average = %d \n",avg);
    if(avg>=90){
        printf("Grade A");
    }
            if(avg>=80  && avg<90){
        printf("Grade B");
            }
    if(avg>=70 && avg<80){
        printf("Grade C");
    }
        if(avg>=50 && avg<70){
        printf("Grade D");
    }
    if(avg<50){
        printf("Grade F");
    }
    return 0;
}