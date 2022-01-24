#include <stdio.h>

int main(){
    int X,Y,i,N;
    while (1)
    {
        scanf("%d %d",&X,&Y);
        if (X == Y)
        {
            break;
        }
        else{
                    
        if (X>Y)
        {
            printf("Decrescente\n");
        }
        if (Y>X)
        {
            printf("Crescente\n");
        }
        }

    }
    return 0;
}