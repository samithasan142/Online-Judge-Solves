#include <stdio.h>
int main()
{
    int N, X, i, j, c, num=0;
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        scanf("%d", &X);
        c=X/2;
        num=0;
        for(j=1; j<=c; j++)
        {
            if(X%j==0)
                num=num+j;
        }
        if(num==X)
            printf("%d eh perfeito\n",X);
        else
            printf("%d nao eh perfeito\n",X);
    }
    return 0;
}
