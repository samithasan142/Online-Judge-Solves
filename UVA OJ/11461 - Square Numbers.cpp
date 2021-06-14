#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
    int cnt=0;
    long long a,b,root;
    while(scanf("%lld %lld", &a, &b)== 2)
    {
        if(a==0 && b==0) break;
        b=b+1;
        for(int i=a; i<b; i++){
            root=sqrt(i);
            if(root*root == i){
                cnt++;
            }
        }
        printf("%d\n", cnt);
        cnt=0;
    }
    return 0;
}

