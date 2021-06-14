#include<bits/stdc++.h>
using namespace std;

int main()
{
    int H1,H2,M1,M2,H,M;
    while(scanf("%d%d%d%d",&H1,&M1,&H2,&M2)==4)
    {
        if(H1==0 && M1==0 && H2==0 && M2==0) break;
        else
        {
            H=H2-H1;
            M=M2-M1;
            if(M<0)
            {
                M=M+60;
                H=H-1;
            }
            if(H<0)
                H=H+24;
        }
        printf("%d\n", H*60+M);
    }
    return 0;
}
