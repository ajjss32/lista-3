#include <stdio.h>

int main(){
    double i=0,j=1;
    int testeInteiro;

    while (i<=1.8)
    {
        testeInteiro = i * 100;
        if (testeInteiro%100==0)
        {
            printf("I=%.0lf J=%.0lf\n",i,j);
            j++;
            printf("I=%.0lf J=%.0lf\n",i,j);
            j++;
            printf("I=%.0lf J=%.0lf\n",i,j);
            j++;
        }
        else{
             printf("I=%.1lf J=%.1lf\n",i,j);
            j++;
            printf("I=%.1lf J=%.1lf\n",i,j);
            j++;
            printf("I=%.1lf J=%.1lf\n",i,j);
            j++;
        }
        
        i+=0.2;
        j-=2.8;
    }
     
        printf("I=%.0lf J=%.0lf\n",i,j);
        j++;
        printf("I=%.0lf J=%.0lf\n",i,j);
        j++;
        printf("I=%.0lf J=%.0lf\n",i,j);
        j++;
 
    
    return 0;
    }