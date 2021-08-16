#include<stdio.h>
int main()
{
    int I,J,a=5,b=7;
    for(I=1; I<=9; I+=2)
    {
        for(J=b; J>=a; J--)
        {
            printf("I=%d J=%d\n",I,J);
        }
        a=b;
        b=b+2;
    }
    return 0;
}
