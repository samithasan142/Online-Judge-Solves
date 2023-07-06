#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, Petya, Vasya, Tonya;
    int num = 0;
    cin >> n;
    while (n--)
    {
        cin >> Petya >> Vasya >> Tonya;
        if(Petya + Vasya + Tonya >= 2){
            num ++;
        }
    }
    cout << num << endl;
    return 0;
}
