#include <stdio.h>
int main()
{
    int N, a, sum=1;
    scanf("%d", &N);
    for(a=N; a>=1; a--)
        sum=sum*a;
    printf ("%d\n",sum);
    return 0;
}
