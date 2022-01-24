#include <stdio.h>

int main(){
     int i=0;
    double x,y;
    while (i<1)
    {
        scanf("%lf %lf",&x,&y);
        if(x==0 || y==0){
            i++;
        }else{
            if(y>0 && x>0){
            printf("primeiro\n");
            }
            else if(y>0 && x<0){
                printf("segundo\n");
            }
            else if(y<0 && x<0){
                printf("terceiro\n");
            }
            else if(y<0 && x>0){
                printf("quarto\n");
            }
            i=0;
        }
    }
    return 0;
    }