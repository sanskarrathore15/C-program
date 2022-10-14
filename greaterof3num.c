//WAP to show greatst b/w THREE number
#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter any THREE numbers");
scanf("%d %d %d",&a,&b,&c);
 if (a>b)
   {if(a>c)
      {printf("%d is greater",a);}
   }
 else if (b>c)
    {printf("%d is greater",b);}
 else
    {printf("%d is greater",c);}
 return 0;
 }     
