#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int T, a, b, c;
    scanf("%lld", &T);
    for(int i=0; i<T; i++){
        scanf("%lld %lld %lld", &a, &b, &c);
        if(a>b && a>c){
            if(b>c)
                printf("Case %d: %lld\n",i+1, b);
            else printf("Case %d: %lld\n",i+1, c);
        }
        else if(b>a && b>c){
            if(a>c)
                printf("Case %d: %lld\n",i+1, a);
            else printf("Case %d: %lld\n",i+1, c);
        }
        else if(c>b && c>a){
            if(a>b)
                printf("Case %d: %lld\n",i+1, a);
            else printf("Case %d: %lld\n",i+1, b);
        }
    }
    return 0;
}



