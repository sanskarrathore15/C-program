#include<stdio.h>
int main()
{   int a,b,c,e,f,g,h,i,sum,d;
    printf("Enter 5 digit number:  ");
    scanf("%d",&d);
    a=d%10; 
    b=d/10;//1234
    c=b%10; 
    e=b/10;//123
    f=e%10;
    g=e/10;//12
    h=g%10;
    i=g/10;//1
    sum=a+i;
    printf("Sum of 1st and 5th digit is %d",sum);
    return 0;
}
/*we can also do it directly by dividing 
no. with 10000(/) and dividing it by 10(%),take remainder
*/