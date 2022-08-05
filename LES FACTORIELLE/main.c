#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ,fact ,nb ;
    fact = 1;
    printf("donnez un nombre:");
    scanf("%d",&nb);
    if(nb<0)
        printf("impossible:");
        else
        for(i= 2;i<=nb;i++)
            fact= fact*i;
    printf("est :%d",fact);

    return 0;

}

