#include <stdio.h>

/*peca 1 numero do usuario e diga se eh par ,impar ou par negativo e impar negativo.*/

/*int main(){
    int n1;
    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
    if(n1 == 0){
        printf("Esse numero eh zero");
    }
    else if(n1>0){
    if(n1%2 == 0){
    printf("Esse numero eh par");
    }else{
        printf("Esse numero eh impar");
    }
    }
    else{
        if(n1%2==0){
        printf("Esse numero eh par negativo");//quando precisar ter um if dentro do else a chave tem que fechar apos o proximo else se tiver.
        
    }
    else{
        printf("Eh impar negativo");
    }
}
return 0;

}*/

/*faça uma calculadora simples que tenha + - * e /.*/

/*int main(){
    int opcao;
    double num1,num2,soma;
    printf("Me informe o primeiro numero: ");
    scanf("%lf", &num1);
    printf("Informe o segundo numero: ");
    scanf("%lf", &num2);
    printf("1- somar\n");
    printf("2- subtrair\n");
    printf("3- multiplicar\n");
    printf("4- dividir\n");
    printf("Escolha a opcao\n");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:{
      soma= num1+num2;
        break;
    }
    case 2:{
        soma=num1-num2;
        break;
    }
    case 3:{
        soma=num1*num2;
        break;
    }
    case 4:{
        soma=num1/num2;
        break;
    }
    default:{
        printf("Nao temos isso aqui");
    }
       
    }
    printf("O resultado eh %2.lf", soma);
    return 0;
}*/

/*qual eh maior e se sao iguais*/


/*int main(){
    int a,b;
    printf("Me de o primeiro numero: ");
    scanf("%d", &a);
    printf("Me de o segundo numero: ");
    scanf("%d",&b);
    if(a<b){
        printf("O maior eh o %d",b);
    }
    else if (a==b)
    {
        printf("Eles sao iguais");
    }else
    {
        printf("esse eh maior %d",a);
    }

}*/

/*peca a noa de um aluno e mostre se esta aprovado de recuperaçao ou reprovado*/

/*int main(){
    int nota;
    printf("Fale sua nota do boletim: ");
    scanf("%d", &nota);
    if (nota>=60 && nota<=79)
    {
        printf("Passou mas poderia estar melhor!");
    }
    else if(nota>=80){
        printf("Voce passou de ano!");
    }else{
        printf("Voce reprovou na materia");
    }
    
}*/

/*classifique a idade do usuario*/

/*int main(){
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if(idade<=12){
        printf("Voce eh uma crianca ainda");
    }
    else if (idade<=18){
        printf("Voce ja eh um adolecente");
    }
    else if(idade>=19 && idade<=59){
        printf("Voce eh adulto");
    }
    else{
        printf("Voce eh idoso");
    }
    
}*/

int main(){
    int lado1,lado2,lado3;
    printf("Informe o 1 valor:");
    scanf("%d", &lado1);
    printf("Informe o 2 valor: ");
    scanf("%d", &lado2);
    printf("Informe o 3 valor: ");
    scanf("%d", &lado3);

    if (lado1==lado2 && lado2==lado3)
    {
        printf("Os 3 lados sao iguas logo ele eh um equilatero");
    }else if(lado1 + lado2> lado3 && lado1 + lado3>lado2 && lado2 + lado3>lado1){
        printf("Eh um triangulo");
    }
    else{
        printf("Eh um Escaleno por conter 3 lados diferentes");
    }
    return 0;
}
//apenas pratica