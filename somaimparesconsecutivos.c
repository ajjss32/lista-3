#include <stdio.h>

int main(){
    int a,b,soma=0,i;
    int Maior,Menor;

    scanf("%d %d",&a,&b);

    Maior = a;
    Menor = b;

    if (b>a )
    {
        Maior = b;
        Menor = a;
    }

    for (i = Menor; i < Maior; i++)
    {

        if (i%2!=0){
            if(i == Menor){
                soma = (soma + i) - Menor;
                 
            }
            else{
                soma = soma + i;
            }
            
        }
    }
     printf("%d\n",soma);
    return 0;
    }