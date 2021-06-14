#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
    long int a,b,c,x,y,z;
    while(scanf("%ld %ld %ld", &a, &b, &c)== 3)
    {
        x=a*a;
        y=b*b;
        z=c*c;
        if(a==0 || b==0 || c==0) break;

        if(x == y+z)
            printf("right\n");
        else if (y == z+x)
            printf("right\n");
        else if (z == x+y)
            printf("right\n");
        else printf("wrong\n");
    }
    return 0;
}


