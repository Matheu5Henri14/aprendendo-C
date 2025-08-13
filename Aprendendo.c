# include <stdio.h>

/*
int main()
{
    int raio;
    double perimetro;
    double area;
    printf("de o valor do raio:");
    scanf("%d", &raio);
    perimetro = 2 * raio * 3.14;
    printf("O perimetro é: %.2lf\n", perimetro);
    area = 3.14 * raio * raio;
    printf("valor da area e: %.2lf", area);

    return 0;
}*/

/*int main()
{
    double idade;
    printf("digite sua idade: ");
    scanf("%lf", &idade);
    idade = idade * 365;
    printf("Essa pessoa viveu: %2.lf", idade);
    return 0;
}*/

/*int main()
{
    double valor, porcentagem;
    printf(" quantos R$ voce tem: ");
    scanf("%lf",&valor);
    porcentagem = valor * 0.40;
    printf(" o valor é: %.2lf", porcentagem);
    return 0;
}*/


/* Faça um programa que receba as três notas de um aluno em uma matéria e mostre na
tela a sua média na disciplina.
• Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste aluno.
Considerar que a média é ponderada e que o peso das notas é: 2,3 e 5, respectivamente.
*/


/*int main()
{
    int aluno1, aluno2, aluno3;
    double soma;
    double media;
    printf("Nota do primeiro aluno: ");
    scanf("%d", &aluno1);
    printf("Nota do segundo aluno: ");
    scanf("%d", &aluno2);
    printf("Nota do terceiro aluno: ");
    scanf("%d", &aluno3);
    soma = aluno1 *2+ aluno2*3 + aluno3*5;
    printf("A soma das suas notas: %2.lf\n", soma);
    media = soma / 10;
    printf("A soma das notas é: %2.lf", media);

   return 0;
    
}*/


/*Escrever um algoritmo que recebe como entrada a distância percorrida em uma viagem
e o tempo gasto para percorrê-la. Calcule a velocidade média do veículo durante a
viagem e retorne para o usuário.
• Obs: Vm = distancia/tempo*/


/*int main()
{
    double distancia,tempo,vm;
    printf("Distancia percorrida: km ");
    scanf("%lf", &distancia);
    printf("Tempo  decorrido: horas ");
    scanf("%lf", &tempo);
    vm = distancia/tempo;
    printf("A velocidade media é de : %.2lf km/h", vm);
    return 0;


}*/

/*O custo ao consumidor de um carro novo é a soma do custo de fábrica com a
percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo
que a percentagem do distribuidor seja de 28% e os impostos de 45%, escrever um
algoritmo que leia o custo de fábrica de um carro e escreva o custo ao consumidor.*/

/*int main()
{
    double porcentagem, impostos, custo;
    printf("porcentagem do distribuidor: ");
    scanf("%lf", &porcentagem);
    printf("impostos: ");
    scanf("%lf", &impostos);
    custo = (porcentagem + impostos);
    printf("o custo de fabrica de um carro e: %2.lf mil \n", custo);
    return 0;

}*/

/*int main()
{
    double fabrica, dist, imposto, custo;
    printf("informe o custo da fabrica: ");
    scanf("%lf", &fabrica);
    dist = fabrica * 0.28;
    imposto = fabrica * 0.45;
    custo = fabrica + dist + imposto;
    printf("O custo total eh: %.2lf\n", custo);
    return 0;

}*/

/*int main()
{
    int dia,mes,ano;
    printf("Dia: ");
    scanf("%d", &dia);
    printf("Mes: ");
    scanf("%d", &mes);
    printf("Ano: ");
    scanf("%d", &ano);
    printf("esse e o dia, ano e mes que voce escolheu Dia:%d Mes:%d Ano:%d ", dia,mes,ano);
    return 0;
}*/

/*int main()
{
    int nota1,nota2,nota3,media;
    printf("Nota da prova 1: ");
    scanf("%d", &nota1);
    printf("Nota da prova 2: ");
    scanf("%d", &nota2);
    printf("Nota da recuperacao: ");
    scanf("%d", &nota3);
    
        if (media <= 60) {
            printf("Aluno aprovado!\n");
        } else {
            printf("Aluno reprovado =(\n");
        }
        return 0;

}*/


/*int main()
{
    int numero, dezena;
    printf("Digite um numero inteiro de 3 algarismo: ");
    scanf("%d", &numero);

    dezena = (numero / 10) % 10;
     printf("A casa das dezenas e : %d\n", dezena);
     return 0; 
}*/

/*int main()
{
    int centena, dezena, unidade;
    printf("O algarismo da casa da Unidade e: ");
    scanf("%d",  &centena);
    printf("o algorismo da casa da dezena e : ");
    scanf("%d",  &dezena);
    printf("O algarismo da casa da centena e : ");
    scanf("%d", &unidade);
    printf("O algorismo da casa da dezena e : %d", dezena);
    return 0;
}*/

/*int main()
{
    int centena, dezena, unidade;
    printf("Digite um numero inteiro de 3 algarismo: ");
    scanf("%d%d%d", &centena, &dezena, &unidade);

    dezena = (dezena * 10);
     printf("A casa das dezenas e : %d\n", dezena);
     return 0; 
}
     */


/*int main()
{
int num1,num2, soma;
printf("De o primeiro numero: ");
scanf("%d", &num1);
printf("De o segundo numero: ");
scanf("%d", &num2);
soma = num1 + num2;
printf(" a soma de %d e %d eh : %d", num1, num2, soma);
return 0;
}*/


/*Escrever um algoritmo em C que recebe como entrada um inteiro que representa uma
data no formato ddmmaa e imprima na tela a seguinte saída:
Dia: dd Mês: dd Ano: dd 
*/

/*int main()
{
    int dia,mes,ano, num,aux;
    printf("informe o numero no formato ddmmaa :");
    scanf("%d", &num);
    dia = num / 10000;
    aux = num % 10000;
    mes = aux / 100;
    ano = aux % 100;
    printf("dia: %d mes: %d ano: %d", dia, mes, ano, aux);
    return 0;

}*/
