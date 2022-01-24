#include <stdio.h>

int main(){
    int N,X,Y,i,j,soma=0,maior,menor,cont=0;
    scanf("%d",&N);
    while (cont<N)
    {
        scanf("%d",&X);
        scanf("%d",&Y);
        maior = X;
        menor = Y;
        if (X<Y)
        {
            maior = Y;
            menor = X;
        }
        for ( j = menor; j < maior; j++)
        {
            if (j%2!=0){
            if(j == menor){
                soma = (soma + j) - menor;  
               
            }
            else{
                soma = soma + j;
                
            }          
        }    
        }
        printf("%d\n",soma);  
        
        cont++;
        soma = 0;
    }
    return 0;
    }