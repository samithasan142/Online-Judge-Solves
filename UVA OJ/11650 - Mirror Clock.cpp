#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;

    while(T>0)
    {
        int HH,MM;
        scanf("%d:%d",&HH,&MM);

        if(HH==12 && MM==0)
        {
            printf("%02d:%02d\n",HH,MM);
        }
        else if(MM==0)
        {
            HH = 12-HH;
            printf("%02d:%02d\n",HH,MM);
        }
        else
        {
            MM = 60-MM;
            HH = 23 - HH;
            if(HH>12)
            {
                HH = HH-12;
            }
            printf("%02d:%02d\n",HH,MM);
        }

        T--;
    }
    return 0;
}
