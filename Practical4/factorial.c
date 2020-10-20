
#include <stdio.h>

int main()
{
    int n=5;
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    
    printf("factorial is %d",fact);
    return 0;
}

