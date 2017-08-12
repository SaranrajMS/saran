#include <stdio.h>
int main()
{
    int l, h, i, f;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d",&l,&h);
    while (l< h)
    {
        f= 0;

        for(i = 2; i <= low/2; ++i)
        {
            if(l % i == 0)
            {
                f= 1;
                break;
            }
        }

        if (f== 0)
            printf("%d ", l);

        ++l;
    }

    return 0;
