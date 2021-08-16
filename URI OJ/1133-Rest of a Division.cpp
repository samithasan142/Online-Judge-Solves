#include<stdio.h>
int main()
{
    int num1,num2,i;

    scanf("%d %d",&num1,&num2);

    if(num1<num2)
    {
        for(i=num1+1; i<num2; i++)
        {
            if(i%5==2 || i%5==3)
            {
                printf("%d\n",i);
            }
        }
    }
    else if(num1>num2)
    {
        for(i=num2+1; i<num1; i++)
        {
            if(i%5==2 || i%5==3)
            {
                printf("%d\n",i);
            }
        }
    }
    return 0;
}
