#include <stdio.h>

int main(){
    int i,j;

        for ( i = 1; i <=9; i+=2)
    { 
        for ( j = 7; j <=7; j--)
    {       
        printf("I=%d J=%d\n",i,j);
        if (j==5)
        {
            break;
        }     
    }      
    }
    return 0;
    }