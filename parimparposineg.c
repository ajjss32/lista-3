#include <stdio.h>

int main(){
    int N,i,par=0,impar,positivo,negativo;
    

    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&N);
        if (N%2==0)
        {
            par++;
        }
        else{
            impar++;
        }
        if (N>0)
        {
            positivo++;
        }
        if (N<0){
            negativo++;
        }
        
    }
    printf("%d valor(es) par(es)\n",par);
    printf("%d valor(es) impar(es)\n",impar);
    printf("%d valor(es) positivo(s)\n",positivo);
    printf("%d valor(es) negativo(s)\n",negativo);
    
    return 0;
}