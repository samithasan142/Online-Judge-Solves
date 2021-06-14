#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int T, a, b, c;
    scanf("%lld", &T);
    for(int i=0; i<T; i++){
        scanf("%lld %lld %lld", &a, &b, &c);
        if(a+b>c && b+c>a && c+a>b){
            if(a==b && b==c && c==a)
                printf("Case %d: Equilateral\n", i+1);
            else if (a==b || b==c || c==a)
                printf("Case %d: Isosceles\n", i+1);
            else if (a!=b && b!=c && c!=a)
                printf("Case %d: Scalene\n", i+1);
        }
        else
            printf("Case %d: Invalid\n", i+1);
    }
    return 0;
}


