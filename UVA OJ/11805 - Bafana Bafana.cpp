#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i=0;
    cin>>T;

    while(T>0)
    {
        i++;
        int N,K,P;

        cin>>N>>K>>P;

        int A=K+P;
        while(A>N)
        {
            A=A-N;
        }
        printf("Case %d: %d\n",i,A);

        T--;
    }
    return 0;
}

