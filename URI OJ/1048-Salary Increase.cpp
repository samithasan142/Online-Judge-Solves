#include<stdio.h>
int main()
{
    float a,b,salary;
    int p;
    char c = '%';
    scanf("%f", &a);
    if (a >= 0 && a <= 400.00 )
    {
        b = (a*15)/100;
        salary = a + b;
        p = 15;
    }
    else if(a >= 400.01 && a <= 800.00)
    {
        b = (a*12)/100;
        salary = a + b;
        p = 12;
    }
    else if(a >= 800.01 && a <= 1200.00)
    {
        b = (a*10)/100;
        salary = a + b;
        p = 10;
    }
    else if(a >= 1200.01 && a <= 2000.00)
    {
        b = (a*7)/100;
        salary = a + b;
        p = 7;
    }
    else
    {
        b = (a*4)/100;
        salary = a + b;
        p = 4;
    }

    printf("Novo salario: %.2f\n",salary);
    printf("Reajuste ganho: %.2f\n",b);
    printf("Em percentual: %d %c\n",p,c);

    return 0;
}
