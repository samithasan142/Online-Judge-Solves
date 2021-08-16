#include <stdio.h>
int main()
{
    int count, m, n;
    int a, b;
    double ac, bc;
    scanf("%d", &n);
    for(m=1; m<=n; m++)
    {
        count = 0;
        scanf("%d %d %lf %lf", &a, &b, &ac, &bc);
        while(a <= b)
        {
            a *= (ac / 100.0) + 1.0;
            b *= (bc / 100.0) + 1.0;
            count++;
            if (count > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (count <= 100)
            printf("%d anos.\n", count);
    }
    return 0;
}
