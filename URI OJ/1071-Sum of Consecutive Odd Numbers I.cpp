#include<stdio.h>
int main()
{
    int x, y, temp, i, count=0;
    scanf("%d %d", &x, &y);
    if(x > y)
    {
        temp = y;
        y = x;
        x = temp;
    }
    for(i = x + 1; i < y; i++)
    {
        if(i%2!=0)
            count = count + i;
    }
    printf("%d\n", count);
    return 0;
}
