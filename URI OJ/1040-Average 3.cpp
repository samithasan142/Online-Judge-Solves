#include <stdio.h>
int main()
{
    double first, second, third, fourth, last, sum;
    scanf("%lf %lf %lf %lf", &first, &second, &third, &fourth);
    sum = (first * 2 + second * 3 + third * 4 + fourth) / 10;
    printf("Media: %.1f\n", sum);
    if (sum >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (sum >= 5.0)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &last);
        printf("Nota do exame: %.1f\n", last);
        if (last + sum / 2.0 > 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", (last + sum ) / 2.0);
    }
    else
    {
        printf("Aluno reprovado.\n");
    }
    return 0;
}
