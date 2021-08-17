#include <stdio.h>
int count;
int fibonacci(int n)
{
    count++;
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}
int main()
{
    int n, x;
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&x);
        count = 0;
        printf("fib(%d) = %d calls = %d\n",x,count-1,fibonacci(x));
    }
    return 0;
}
