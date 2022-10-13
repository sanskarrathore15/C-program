#include <stdio.h>
int main()
{


int ar[10];
int max[0];
int i;
max[0]=0;
printf("Enter any number: ");
for(i=0;i<10;i++)
 scanf("%d",&ar[i]);
 printf("Elements in array \n");    
 for(i=0;i<10;i++)
 if(max[0]<ar[i])
 {
    max[0]=ar[i];
 }
 printf("Greater no. is %d",max[0]);
return 0;
}
