#include <stdio.h>
int main()
{
   int i, s, r;
   printf("Enter the number of rows: ");
   scanf("%d", &r);
   for (i=1;i<=r;i++) 
   {
      for (s=1;s<=r;s++)
    {
      if(s<=(r-i))
      {printf(" ");}
      else{printf(" *");}
    }
      
       printf("\n");    
   }                                                
     return 0;
}