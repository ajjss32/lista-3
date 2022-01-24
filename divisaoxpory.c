#include <stdio.h>

int main(){
    int N,i;
    double X,Y;

    scanf("%d",&N);

    for ( i = 0; i < N; i++)
    {
        scanf("%lf %lf",&X,&Y);
        if(Y==0){
            printf("divisao impossivel\n");
        }else{
            printf("%.1lf\n",X/Y);
        }
    }
    return 0;
    }