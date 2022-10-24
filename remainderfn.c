#include <stdio.h>
int rem(int a,int b)
{ int rem;      //i can write rem=a%b directly also
    rem=a%b;
    printf("rem is %d",rem);
    return rem;

}
int main()
{
    int a,b;
    printf("Enter 2 no.:");
    scanf("%d %d",&a,&b);
    rem(a,b);
    return 0;
    
}