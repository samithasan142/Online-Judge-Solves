#include <stdio.h>

int main()
{
    char str1[15];
    char str2[15];
    char str3[15];
    scanf("%s", str1);
    scanf("%s", str2);
    scanf("%s", str3);

    if (str1[0] == 'v' && str2[0] == 'a' && str3[0] == 'c')
        printf("aguia\n");
    if (str1[0] == 'v' && str2[0] == 'a' && str3[0] == 'o')
        printf("pomba\n");
    if (str1[0] == 'v' && str2[0] == 'm' && str3[0] == 'o')
        printf("homem\n");
    if (str1[0] == 'v' && str2[0] == 'm' && str3[0] == 'h')
        printf("vaca\n");
    if (str1[0] == 'i' && str2[0] == 'i' && str3[2] == 'm')
        printf("pulga\n");
    if (str1[0] == 'i' && str2[0] == 'i' && str3[2] == 'r')
        printf("lagarta\n");
    if (str1[0] == 'i' && str2[0] == 'a' && str3[0] == 'h')
        printf("sanguessuga\n");
    if (str1[0] == 'i' && str2[0] == 'a' && str3[0] == 'o')
        printf("minhoca\n");

    return 0;
}
