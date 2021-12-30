//Hourly salary is 200 and hourly overtime salary is 300
#include<stdio.h>
int main()
{
    int hours,ohours,gross;
    printf("Enter the number of hours you've worked:\n");
    scanf("%d",&hours);
    printf("Enter the number of overtimed work hours:\n");
    scanf("%d",&ohours);
    gross=hours*200+ohours*300;
    printf("The gross salary of the employee is %d.\n",gross);
    return 0;
} 