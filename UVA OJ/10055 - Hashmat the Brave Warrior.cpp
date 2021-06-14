#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b;
    while(scanf("%lld %lld", &a, &b)== 2)
    {
        long long ans = a-b;
        if(ans<0)
            ans = ans* -1;
        printf("%lld\n", ans);
    }
    return 0;
}
