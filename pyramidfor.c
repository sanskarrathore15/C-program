#include <stdio.h>
int main() {
   int i, space, rows, k;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) 
   {
      for (space = 1; space <=(rows-i); ++space)
      {
         printf(" ");                                          
      } 
       for(k=0;k < 2 * i - 1;k++)             //we can also do k<=i
     {                                
          printf("*");                                        
          
                                                         
      }   
       printf("\n");    
   }                                                
     return 0;
}