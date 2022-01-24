#include <stdio.h>

int main(){
    double a,media;
    int i,cont;
     cont = 0;
    for ( i = 1; i <= 6; i++)
    {
        scanf("%lf",&a);
        if(a>0){
            cont++;
            media = (media + a);
        }
    }
    printf("%d valores positivos\n",cont);
    printf("%.1lf\n",media/cont);

    return 0;
}