#include<stdio.h>
int main()
{
    int radius,circum,area;
    float pi=3.14;
    printf("Enter the radius of the circle:\n");
    scanf("%d",&radius);
    circum=2*pi*radius;
    printf("The circumferance of the circle is %d.\n",circum);
    area=pi*radius*radius;
    printf("The area of the circle is %d.\n",area);
    return 0;
}
