#include <stdio.h>

int main(){
   int N,MAIOR,i,count;
    MAIOR = 0;
     for ( i = 1; i <=100; i++)
     {
         scanf("%d",&N);
        if (N>MAIOR)
        {
            MAIOR = N;
            count = i;
        }
        
     }
     printf("%d\n",MAIOR);
     printf("%d\n",count);

    return 0;
    }