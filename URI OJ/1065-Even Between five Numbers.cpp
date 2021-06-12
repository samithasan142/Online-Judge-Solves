#include <stdio.h>

int main()
{
    int num, i;
    int temp = 0;

    for (i = 0; i < 5; ++i)
    {
        scanf("%d", &num);
        if(num < 0){
            num = -num;
        }

        if(num % 2 == 0){
            temp++;
        }
    }

    printf("%d valores pares\n", temp);

    return 0;
}
