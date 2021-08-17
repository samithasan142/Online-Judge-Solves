#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int x, y, temp;
    int sum;

    cin >> n;

    while(true)
    {
        if(n == 0) break;
        cin >> x >> y;

        if(x > y)
        {
            temp = x;
            x = y;
            y = temp;
        }
        sum = 0;
        for(int i = x+1; i < y; i++)
        {
            if(i%2 != 0)
                sum =sum + i;
        }
        cout << sum << endl;
        n--;
    }
    return 0;
}
