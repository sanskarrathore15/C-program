#include<stdio.h>
int main()
{
    int X,Y,T,i;
    printf("The number of test cases: ");
    scanf("%d",&T);
    if(T<=100 && T>0)
    {
        for(i=1;i<=T;i++)
    {
    
       printf("Enter price of first cabe and second cabe: ");
        scanf("%d %d",&X,&Y);
       if(X<=100 && X>=1 && Y<=100 && Y>=1)
        {if(X<Y)
        {printf("Y is greater\n ");}
        else 
        {printf("X is greater\n");}
        }
        else{printf("Values of X and Y should be between 1 to 100\n");}
    }}
    else{printf("Values of test cases should be between 1 to 100\n");}
        
    
    return 0;
}