#include <stdio.h>


/*impacto em ads (linha no exterior, coluna no interior)*/


/*Exercicio 01*/

/*int main(){

    int V[8];

    for (int  i = 1; i <= 8; i++)
    {
        printf("coloque os numeros %d: ", i+1);
        scanf("%d", &V[i]);

    }

    for (int i ; i >= 1; i--)
    {
        printf("\nOs numeros sao %d:\n ", V[i]);
    }
    
    return 0;
}*/


/*
int main(){
    double notas[5];
    int pesos[5]={1,2,3,4,5};
    double soma_notas_ponderadas= 0.0;
    int soma_pesos=0;
    double media_ponderada;
    printf("Calculo de media ponderada\n");
    for (int i = 0; i < 5; i++)
    {
        printf("digite a nota da avaliação %lf(peso%d):",i+1,pesos[i]);
        if(scanf("%lf", &notas[i])!=1){
            printf("Digite a nota ")
        }
    }
    
}*/


/*Exercicio 03*/

/*int main(){
    int m[3][3];

    for (int i = 0; i <= 2; i++)
    {
        for (int e = 0; e <= 2; e++)
        {
            printf("teste[%d] [%d]: ", i,e);
            scanf("%d",&m[i][e]);

            
        }
        
        for (int y = 0; y <x; y++)
        {
            printf("\n O valor %d requisitado eh %d", y+1,m[x][y]);
        }
        
        
    }
    
    return 0;
}*/

/*Exercicio 06*/

int main(){
    int z[5][5];
    int i,j;
    int n = 0;

    printf("De os numeros: ", z[2][2]);

    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &z[i][j]);

            if (z[i][j] > 10)
            {
                n++;
            }
            
        }
        
    }

    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("%d \n", z[i][j]);

            if (z[i][j] > 10)
            {
                /* code */
            }
            
        }
        
    }

    printf("Existem %d numeros maiores que 10 na matriz.\n", n);
    return 0;
    
    
}