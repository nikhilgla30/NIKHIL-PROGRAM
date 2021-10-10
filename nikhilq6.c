#include<stdio.h>
int main()
{
    int divisor, dividend,quoteint , remainder;
    printf("Enter the dividend:");
    scanf("%d",&dividend);
    printf("enter the divisor:");
    scanf("%d",&divisor);
    quoteint=dividend / divisor;
    remainder=dividend % divisor;
     printf("quoteint= %d\n",quoteint);
     printf("remainder= %d",remainder);
     return 0;


}