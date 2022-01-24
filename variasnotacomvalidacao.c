#include <stdio.h>

int main(){
          int count=0,x,y;
    double NOTA1,NOTA2,MEDIA;
    while (x!=2)
    {
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
            if (count==2)
            {
                printf("media = %.2lf\n",MEDIA/2);
            }
            
            
        }
         while (x!=1 && x!=2)
         {
             printf("novo calculo (1-sim 2-nao)\n");
             scanf("%d",&x);
         }
            if (x==1)
            {
                count = 0;
                MEDIA = 0;
                x=0;
            }
            if (x==2)
             {
            break;
             }
        

    }  
    return 0;
    }