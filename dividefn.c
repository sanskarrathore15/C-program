#include<stdio.h>
int div(int a,int b)
{
    int div=a/b;
printf(" div is %d",div);
return div;
}
int main()
{int a,b;
printf("Enter 2 no.:");
scanf("%d %d",&a,&b);
div(a,b);
return 0;

}