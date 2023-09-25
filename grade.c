#include<stdio.h>
int main()
{
    int x;
    printf("Enter your marks : ");
    scanf("%d",&x);
    if(x<40)
    {
        printf("you are fail");
    }
    else if(x>=40 && x<=49)
    {
        printf("you get C");
    }


    else if(x>=50 && x<=54)
    {
        printf("you get C+");
    }


    else if(x>=55 && x<=59)
    {
        printf("you get B-");
    }


    else if(x>=60 && x<=64)
    {
        printf("you get B");
    }

    else if(x>=65 && x<=69)
    {
        printf("you get B+");
    }

    else if(x>=70 && x<=74)
    {
        printf("you get A-");
    }
    else if(x>=75 && x<=79)
    {
        printf("you get A");
    }
    else if(x>=80 && x<=100)
    {
        printf("you get A+");
    }

}
