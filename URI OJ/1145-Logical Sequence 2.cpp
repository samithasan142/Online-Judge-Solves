#include<stdio.h>

int main()
{
    int n, a, i, j, k, l, m=1;
    scanf("%d %d", &a, &n);
    k = n / a;
    l = a;
    for(i = 1; i <= k; i++)
    {
        printf("%d",m);
        for(j=m+1; j<=l; j++)
            printf(" %d",j);
        printf("\n");
        m += a;
        l += a;
    }
    return 0;
}
