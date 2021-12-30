#include<stdio.h>
int main()
{
    float principal,rate,time,interest,amt=0;
    printf("Enter the principal value,rate and time respectively:\n");
    scanf("%f%f%f",&principal,&rate,&time);
    interest=principal*rate*time/100;
    printf("The simple interest is Rs.%.2f.\n",interest);
    amt=principal+interest;
    printf("The total amount is Rs.%.2f.",amt);
    return 0;
}