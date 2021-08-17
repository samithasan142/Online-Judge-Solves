#include <stdio.h>

int main()
{
    long long x, y;

    while(scanf("%lld", &x) != EOF)
    {
        scanf("%lld", &y);
        if(x > y)
            printf("%lld\n", x-y);
        else
            printf("%lld\n", y-x);
    }

    return 0;
}
