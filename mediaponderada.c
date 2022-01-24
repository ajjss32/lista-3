#include <stdio.h>

int main(){
    int i,N;
    double x,y,z,media;
    scanf("%d",&N);
    for ( i = 0; i < N; i++)
    {
        scanf("%lf %lf %lf",&x,&y,&z);
        media = ((x*2 )+( y*3 )+ (z*5))/10;
        printf("%.1lf\n",media);
    }
    
    
    return 0;
}