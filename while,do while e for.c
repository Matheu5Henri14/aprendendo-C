#include <stdio.h>
/*int main(){
    int i = 1;
    while (i <=10)
    {
        printf("%d", i);
        i++;// eh igual a +1,+1,+1....ate chegar ao numero maximo no caso 10
    }
    return 0;
}*/

/*int main(){
    int n,i = 0;
    printf("Informe um numero: ");
    scanf("%d", &n);
    if (n>0)
    {
        while (i<= n)
        {
            printf("%d\t", i);
            i++;
        }
        
       
    }else{
        printf("O numero deve ser postivo");
    }
}*/

/*int main(){
    int n;
    printf("De o valor: ");
    scanf("%d", &n);
    if (n>0)
    {
        while (n>=1)
        {
            printf("%d\t", n);
            n--;
        }
        
    }
    
}*/

/*int main(){
    int n1,soma = 0, cont = 1;
    while (cont <= 5)
    {
        printf("Informe o %d numero: ", cont);
        scanf("%d", &n1);
        soma = soma + n1; // soma += n1;
        cont++;
    }
    printf("Soma dos nuemros: %d", soma);
    return 0;
    

}*/

/*int main(){
    int n,soma = 0, cont = 1;
    while (cont<=10)
    {
        printf("Informe %d numero: ", cont);
        scanf("%d", &n);
        soma = soma + n;
        cont++;
    }
    soma = soma / 10;
    printf("resultado eh : %d", soma);
    return 0;
}*/

/*int main(){
    int i, count = 0, total = 0;
    printf("Digite um n: ")
    scanf("%d", &i);
    while (count <= i)
    {
        total = total + count;
        count++;
    }
    printf("total = %d", total);
    return 0;
}*/

/*int main(){
    int cont = 1, n, num, somapar = 0, somaimpar = 0,qntitem = 0;
    printf("Informe a quantidade de numeros: ");
    scanf("%d", &n);
    while (cont<= n){
        printf("Informe o %d° numero: ", cont);
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            somapar += num;
        }
        else{
            somaimpar +=num;
            qntitem++;
        }
        
        cont++;
    }
    printf("A soma dos pares eh %d\n", somapar);
    printf("Media dos impares: %d\n", (somaimpar/qntitem));
    return 0;
    
}*/

/*int main(){
    int n, soma = 0, qnt = 0;
    printf("Informe um numero: ");
    scanf("%d", &n);
    while (n!=0)
    {
        soma += n;
        qnt++; 
        printf("Informe um numero: ");
        scanf("%d", &n);
    }
    printf("Media: %d\n", (soma/qnt));
    return 0;
    
}*/

/*do while*/

/*int main(){
    int i = 1;
do
{
    printf("%d", i);
    i++;
} while (i <=10); 
}*/


/*tabuada de uma só*/

/*int main(){
    int  num, cont = 1;
    printf("Informe um numero: ");
    scanf("%d", &num);
    printf("||=====Tabuada=====||\n");
    do
    {
        printf("%d x %d = %d\n", num,cont,(num*cont));
        cont++;
    } while (cont <=10);
    
    return 0;
}*/

/*int main(){
    int n,maior,menor,cont = 1;
    do
    {
        printf("Informe um numero: ");
        scanf("%d", &n);
        if(cont==1){
            maior = n;
            menor = n;
            cont++;
        }else{
            if(n>maior){
                maior = n;
            }
        
        else if(n<menor){
            menor=n;
        }
    }
    } while (n!=0);
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    return 0;
    
}*/

/*utilizado for*/

/*int main(){
    for (int i = 1; i <=10; i++)
    {
        printf("%d\n", i);
    }
    
}*/


/*int main(){
    for (int i = 1; i <=20; i++)
    {
       printf("O resultado eh: %d\n", (i*i));
       
    }
    
}*/

/*multiplo de 3*/

/*int main(){
    int n;
    printf("Informe um numero: ");
    scanf("%d", &n);
    for (int i = 0; i <=n ; i++)
    {
        if(i%3==0){
            printf("%d\n", i);
        }else{
            
        }
  
    }
    
}*/

/*decrescente*/

/*int main(){
    int n;
    printf("Informe um numero: ");
    scanf("%d", &n);
    for(int i = n; i>=0;  i--){
        printf("%d\n", i);

    }
}*/

/*multiplo de 7 e printar o resultado no final.*/

/*int main(){
    int soma=0;
    for (int i = 100; i <=200; i++)
    {
        if (i%7==0)
        {
            printf("%d\n", i);
            soma += i;
        }
       
    }
    printf("A soma desses numeros eh: %d", soma);
      
}*/