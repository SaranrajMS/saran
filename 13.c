#include <stdio.h>
int main()
{
    int n, i,f= 0;
    scanf("%d",&n);
    for(i=2; i<=n/2; ++i)
    {
     if(n%i==0)
        {
            f=1;
            break;
        }
    }if (f==0)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);
    
    return 0;
}
