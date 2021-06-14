#include<bits/stdc++.h>
using namespace std;

int i, m;
void happy_num(int n)
{
    int r, d = 0;
    while(n != 0)
    {
        r = n%10;
        n = n/10;
        d = d + (r*r);
    }
    n = d;
    if(n<=9)
    {
        if(n == 1 || n == 7)
            cout << "Case #" << i << ": "<< m << " is a Happy number." << endl;
        else
            cout << "Case #" << i << ": "<< m << " is an Unhappy number." << endl;
        return;
    }
    happy_num(n);
}
int main()
{
        int n;
        cin >>n;
        for(i=1; i<=n; i++)
        {
            cin >> m;
            happy_num(m);
        }
    return 0;
}
