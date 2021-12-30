#include<stdio.h>
int main()
{
    int val;
    char ch;
    printf("Enter the character:\n");
    scanf("%s",&ch);
    val=ch;
    printf("The ASCII value of %c is %d.\n",ch,val);
    return 0;
}