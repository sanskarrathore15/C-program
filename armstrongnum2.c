#include<stdio.h>
#include<math.h>
int main()
{
    int i2,n,i1,d1,i=1;
    printf("Enter any num: ");
    scanf("%d",&n);
  
  for(i=1;i<=n;i++)
  {int s=0,c=0;
    i1=i; i2=i;
   while(i1!=0)
   {
    i1=i1/10;
    c++;
   }
   while(i2!=0)
   {
    d1=i2%10;
    s+= pow(d1,c);
    i2=i2/10;
   }
   if(s==i)
   printf("%d ",i);

 }
return 0;
}