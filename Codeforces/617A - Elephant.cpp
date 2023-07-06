#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, res;
    cin >> x;
    if(x%5 == 0){
        cout << x/5;
    }
    else
        cout << (x/5)+1;

    return 0;
}

