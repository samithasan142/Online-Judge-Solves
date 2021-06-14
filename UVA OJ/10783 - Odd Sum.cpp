#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, a, b, sum=0;
    scanf("%d", &T);
    for(int i=0; i<T; i++){
        scanf("%d %d", &a, &b);
        for(int j=a; j<=b; j++){
            if(j%2!=0){
                sum=sum+j;
            }
        }
        printf("Case %d: %d\n", i+1, sum);
        sum=0;
    }

    return 0;
}
