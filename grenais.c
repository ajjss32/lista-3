#include <stdio.h>

int main(){
    int gremio=0,inter=0,empate=0,count=1,N=0;

    while (1)
    {
        scanf("%d %d",&inter,&gremio);

        
        if (inter>gremio)
        {
            inter++;
        }
        else if (gremio>inter)
        {
            gremio++;
        }
        else if (gremio == inter)
        {
            empate++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&N);
        if (N==2)
        {
            break;
        }
        count++;
        
    }
    printf("%d grenais\n",count);
    printf("Inter:%d\n",inter);
    printf("Gremio:%d\n",gremio);
    printf("Empate:%d\n",empate);

    if (inter>gremio)
    {
         printf("Inter venceu mais\n");
    }
    if (inter<gremio)
    {
         printf("Gremio venceu mais\n");
    }
    

    return 0;
}