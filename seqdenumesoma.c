#include <stdio.h>

int main(){
    int M,N,Maior,Menor,i=0,soma=0;
    while (i<1)
    {
        scanf("%d %d",&M,&N);

    Maior = M;
    Menor = N;

    if (M<N)
    {
        Maior = N;
        Menor = M;
    }
        if (Menor<=0 || Maior<=0)
        {
            i++;
        }
        else{
            for ( i = Menor; i <= Maior; i++)
        {
                soma+=i;
                printf("%d ",i);
        }
        printf("Sum=%d\n",soma);
        i=0;
        }
        soma = 0;
    }
    return 0;
    }
