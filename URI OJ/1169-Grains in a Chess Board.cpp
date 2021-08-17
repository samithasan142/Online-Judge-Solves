#include <stdio.h>
#include <math.h>

int main()
{
    int n, x;
    long long int quantity;

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        quantity = (long long)(pow(2,x)/12000);
        printf("%lld kg\n", quantity);
    }

    return 0;
}
