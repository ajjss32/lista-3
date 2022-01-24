#include <stdio.h>

int main(){
    int N,i;
    double PC,PR,PS,QUANTIA,COELHO=0,RATO=0,SAPO=0,TOTAL;
    char Tipo;

    //N numero de casos
    scanf("%d",&N);

    for ( i = 1; i <=N; i++)
    {
        scanf("%lf %c",&QUANTIA,&Tipo);
        switch (Tipo)
        {
        case 'C':
         COELHO = COELHO + QUANTIA;
         break;
        case 'R':
         RATO = RATO + QUANTIA;
         break;
        case 'S':
         SAPO = SAPO + QUANTIA;
         break;
        default:
            break;
        }
    }
    TOTAL = COELHO+RATO+SAPO;
    printf("Total: %.0lf\n",TOTAL);
    printf("Total de coelhos: %.0lf\n",COELHO);
    printf("Total de ratos: %.0lf\n",RATO);
    printf("Total de sapos: %.0lf\n",SAPO);
    PC = (COELHO * 100)/TOTAL;
    PR = (RATO * 100)/TOTAL;
    PS = (SAPO * 100)/TOTAL;
    printf("Percentual de coelhos: %.2lf %%\n",PC);
    printf("Percentual de ratos: %.2lf %%\n",PR);
    printf("Percentual de sapos: %.2lf %%\n",PS);

    return 0;
    }