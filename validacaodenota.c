#include <stdio.h>

int main(){
    int count=0;
    double NOTA1,NOTA2,MEDIA;

    while (count<1)
    {
        scanf("%lf",&NOTA1);
        
        if (NOTA1>=0 && NOTA1<=10)
        {
            MEDIA = MEDIA + NOTA1;
            count ++; 
        }
        else{
            printf("nota invalida\n");
        }
        
    }
    while (count<2)
    {
        scanf("%lf",&NOTA2);
        
        if (NOTA2>=0 && NOTA2<=10)
        {
            MEDIA = MEDIA + NOTA2;
            count ++; 
        }
        else{
            printf("nota invalida\n");
        }
        
    }
    
   printf("media = %.2lf\n",MEDIA/2);
    return 0;
    }
    