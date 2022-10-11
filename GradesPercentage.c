#include <stdio.h>
int main()
{
    int Percentage,a,b,c,d,e;
    printf("Enter marks in 5 subjects:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    Percentage=(a+b+c+d+e)/5;
    printf("Percentage is %d%%\n",Percentage);
    if (Percentage>=85)
    {printf("Your Grade is A");
    }
    else if (Percentage>=65 && Percentage<85)
    {printf("Your grade is B");
    }
    else if (Percentage<65 && Percentage>=35)
    {printf("Your grade is C");
    }
    else 
    {printf("Padhai me dhyaan lagao");
    }
    return 0;
}
