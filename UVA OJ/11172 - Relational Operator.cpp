#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, a, b;
    scanf("%lld", &t);
    for(int i=0; i<t; i++){
        scanf("%lld %lld", &a, &b);
        if(a>b)
            printf(">\n");
        else if(a<b)
            printf("<\n");
        else if (a==b)
            printf("=\n");
    }
    return 0;
}

