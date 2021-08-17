#include<stdio.h>

int main()
{
    int n;
    long long int a,b;

    scanf("%d",&n);
    while(n--)
    {
        scanf("%lld %lld",&a,&b);
        if(a >= b)
        {
            while(b != 0)
            {
                if(b%10 != a%10)
                {
                    printf("nao encaixa\n");
                    goto finish;
                }

                a/=10;
                b/=10;
            }
            printf("encaixa\n");
        }
        else
        {
            printf("nao encaixa\n");
        }
    finish: ;
    }
    return 0;
}
