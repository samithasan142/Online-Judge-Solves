#include <stdio.h>
int main()
{
    int p=0;
    float i=0.0,j;
    for(i=0.0; i<2.2; i=i+0.2)
    {
        if(p==5)
            p=0;
        for(j=1; j<=3; j++)
        {
            if(p==0)
                printf("I=%.0f J=%.0f\n",i,j+i);
            else if(i==2.0)
                printf("I=%.0f J=%.0f\n",i,j+i);
            else
                printf("I=%.1f J=%.1f\n",i,j+i);
        }
        p++;
    }
    return 0;
}
