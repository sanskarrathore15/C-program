#include <stdio.h>
int main()
{
                                     

int ar[5];                                   
int i;
printf("Enter any number: ");
for(i=0;i<5;i++)
 scanf("%d",&ar[i]);
 printf("Elements in array");
 for(i=0;i<5;i++)

 printf(" %d",ar[i] );
return 0;
} 
/* PROPERTIES of Arrays 
1)Arrays are homogeneous(Elements are of same data type)
2)In arrays elements are stored continuously
DRAWBACK
1)Arrays are not dynamic i.e.,we cannot change the size of array 
*/

