#include<stdio.h>

int main()
{
    long long int i,j,m,n;
    long long int f1,f2;
    f1=f2=1;
    while(scanf("%lld %lld",&m,&n) != EOF)
    {

        for(i=1; i<=m; i++)
        {
            f1=f1 * i;
        }
        for(j=1; j<=n; j++)
        {
            f2=f2 * j;
        }
        long long int sum = f1+f2;
        printf("%lld\n",sum);
        f1=f2=1;

    }
}
