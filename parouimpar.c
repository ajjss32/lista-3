#include <stdio.h>

int main(){
    int i,a;
    int n;
     scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        scanf("%d",&a);
        if(a==0){
            printf("NULL ");
        }

        else{
            if(a%2==0 && a<0){

            printf("EVEN NEGATIVE\n");
        }
           if(a%2==0 && a>0){

            printf("EVEN POSITIVE\n");
        }
        if (a%2!=0 && a<0)
        {
            printf("ODD NEGATIVE\n");
        }
        if (a%2!=0 && a>0)
        {
            printf("ODD POSITIVE\n");
        }
        }
    }
    return 0;
    }

   