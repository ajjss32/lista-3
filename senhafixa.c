#include <stdio.h>

int main(){
    int N;
    while (1)
    {
        scanf("%d",&N);
        if (N==2002)
        {
            printf("Acesso permitido\n");
            break;
        }else{
            printf("Senha Invalida\n");
        }
        
    }
    
    return 0;
}