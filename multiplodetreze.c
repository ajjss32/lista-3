#include <stdio.h>

int main(){
    int X,Y,MAIOR,MENOR,i,SOMA=0;
    scanf("%d %d",&X,&Y);

    MAIOR = X;
    MENOR = Y;

    if (X<Y)
    {
        MAIOR = Y;
        MENOR = X;
    }

    for ( i = MENOR; i <= MAIOR; i++)
    {
        if (i%13!=0)
        {
            SOMA+=i;
        }
        
    }
    printf("%d\n",SOMA);
    return 0;
    }