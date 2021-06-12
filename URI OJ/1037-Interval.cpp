#include<stdio.h>
int main()
{
    float n;
    scanf("%f",&n);
    if(n>=0 && n<=25.0000)
        printf("Intervalo [0,25]\n");
    else if(n>=25.00001 && n<=50.0000000)
        printf("Intervalo (25,50]\n");
    else if(n>=50.00000001 && n<=75.0000000)
        printf("Intervalo (50,75]\n");
    else if(n>=75.00000001 && n<=100.0000000)
        printf("Intervalo (75,100]\n");
    else printf("Fora de intervalo\n");
    return 0;

}
