#include<stdio.h>

int main()
{
    float avg, n, m=0;
    int i, j=0;
    for(i = 0; i < 6; i++)
    {
        scanf("%f", &n);
        if(n > 0){
            m += n;
            j++;
        }
    }
    avg = m / j;
    printf("%d valores positivos\n%.1f\n",j, avg);

    return 0;
}
