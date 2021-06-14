#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, temp;
    while(scanf("%d", &n)==1)
    {
        if(n==0) break;
        temp=n;
        while((temp/10)>0){
            int sum=0;

            while(n>0)
            {
                sum = sum + (n % 10);
                n = n / 10;
            }
            temp=sum;
            n=temp;
        }

        printf("%d\n", temp);
    }
    return 0;
}

