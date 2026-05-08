#include<stdio.h>

int main()
{
    int age;

    printf("Enter age:\n");
    scanf("%d",&age);

    if(age>=60)
    {
        printf("Senior Citizen\n");
        printf("Eligible for Voting\n");
    }
    else if(age>=18)
    {
        printf("Eligible for Voting\n");
    }
    else
    {
        printf("Not Eligible for Voting\n");
    }

    return 0;
}
