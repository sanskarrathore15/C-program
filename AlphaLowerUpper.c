#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character: \n");
    scanf("%c",&ch);
    if(ch>=97 && ch<=122)
    printf("Alpha is lowercase ");
    else if(ch>=65 && ch<=90)
    printf("Alpha is not lowercase");
    else
    printf("Please enter any Alphabet");
    return 0;

}
