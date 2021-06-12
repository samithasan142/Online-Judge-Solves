#include<stdio.h>
int main()
{
    char first_name[50];
    double fixed_salary, total_sell, total_salary;

    scanf("%s", first_name);
    scanf("%lf %lf", &fixed_salary, &total_sell);

    total_salary = fixed_salary + (0.15 * total_sell);
    printf("TOTAL = R$ %.2lf\n",total_salary);
    return 0;

}
