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
    scanf("%lf", porcentagem);
    printf("impostos: ");
    scanf("%lf", impostos);
    custo = (porcentagem + impostos);
    printf("o custo de fabrica de um carro é: %lf\n", custo);
    return 0;

}*/