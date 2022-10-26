//WAP to check whater a given year is leap year or not using Ternary operator
#include<stdio.h>
int main()
{
int a;
printf("Enter year which you want to check: ");
scanf("%d",&a);
int b;

b=(a%4==0 && a%100!=0)?(printf("%d is a leap year \n",a)):((a%400==0)?(printf("%d is a leap year \n",a)):(printf("%d is not a leap year \n",a)));
return 0;
}
