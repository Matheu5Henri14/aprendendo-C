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

/*====================================================================================================================*/

/*int main()
{
    double idade;
    printf("digite sua idade: ");
    scanf("%lf", &idade);
    idade = idade * 365;
    printf("Essa pessoa viveu: %2.lf", idade);
    return 0;
}*/

/*====================================================================================================================*/

/*int main()
{
    double valor, porcentagem;
    printf(" quantos R$ voce tem: ");
    scanf("%lf",&valor);
    porcentagem = valor * 0.40;
    printf(" o valor é: %.2lf", porcentagem);
    return 0;
}*/

/*====================================================================================================================*/

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

/*====================================================================================================================*/

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

/*====================================================================================================================*/

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

/*====================================================================================================================*/

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

/*====================================================================================================================*/

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

/*====================================================================================================================*/

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

/*====================================================================================================================*/

/*int main()
{
    int numero, dezena;
    printf("Digite um numero inteiro de 3 algarismo: ");
    scanf("%d", &numero);

    dezena = (numero / 10) % 10;
     printf("A casa das dezenas e : %d\n", dezena);
     return 0; 
}*/

/*====================================================================================================================*/

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

/*====================================================================================================================*/

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
/*====================================================================================================================*/

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
/*====================================================================================================================*/

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

/*====================================================================================================================*/

/*1. O proprietário de uam empresa precisa de um programa de computador para
calcular o novo salário que seus funcionários irão receber a partir do mês que vem.
Sabendo que o aumento de salário para todos os funcionários será de 25%, escreva
um algoritmo que recebe o valor do salário atual do funcionário e informa o seu
novo salário acrescido de 25%.*/

/*int main(){

        double salario,aumento, reajuste;
    printf("Salario do funcionario1: ");
    scanf("%lf", &salario);
    
    reajuste = (salario/100)*25;
    aumento = salario + reajuste;

    printf("O salario subiu 25%% logo o novo salario eh: %.2lf\n", aumento);
    return 0;
}*/


/*int main(){
    double salario,extra,reajuste;
    printf("Salario dos funcionarios: ");
    scanf("%lf", &salario);

    reajuste = (salario/100)*25;
    extra = salario + reajuste;
    printf("O salario aumentou em 25%% para todos funcionarios entao o novo salario eh: %2.lf", extra);
    return 0;
}*/

/*====================================================================================================================*/

/*2. Um dos sócios da empresa descrita acima soube que você desenvolveu um
algoritmo para o reajuste salarial para a empresa e pediu que você desenvolva um
algoritmo similar. Na verdade, ele gostaria que você acrescentasse ao programa
anterior à possibilidade dele informar não somente o salário atual do funcionário,
mas também o valor percentual que deve ser incrementado para aquele
funcionário, uma vez que ele aplicará valores percentuais de aumento diferentes
para cada funcionário.*/

/*int main(){
    double salario,reajuste;
    printf("Seu salario com o aumento: ");
    scanf("%lf", &salario);
    reajuste = (salario/100)*25;
    salario = salario + reajuste;
    printf("O seu novo salario eh: %2.lf reais, aumento de %2.lf", salario, reajuste);
    return 0;
}*/

/*====================================================================================================================*/

/*3. Desenvolva um algoritmo que recebe como entrada o ano de nascimento de uma
pessoa e o ano atual. O seu algoritmo deve mostrar a idade da pessoa em anos, a
idade da pessoa em meses e a idade da pessoa em dias.*/

/*int main(){
    int nascimento, agora,anos,meses,dias;
    printf("Em que anos voce esta no momento: ");
    scanf("%d", &agora);
    printf("Ano de nascimento: ");
    scanf("%d", &nascimento);
    anos = agora - nascimento;
    meses = anos * 12;
    dias = anos * 365;
    printf(" quantos anos de idade: %d, anos %d, meses %d, dias %d", anos, meses, dias);
    return  0;
}*/

/*====================================================================================================================*/

/*4. Crie um algoritmo que recebe como entrada dois valores inteiros para as variáveis
A e B. O seu algoritmo deve efetuar a troca dos valores de forma que a variável
A passe a possuir o valor da variável B e a variável B passe a possuir o valor da
variável A. Por fim, o seu algoritmo deve imprimir o valor das variáveis A e B.*/

/*int main()
{
    int a,b,c;
    printf("de o valor de a: ");
    scanf("%d", &a);
    printf("de o valor de b: ");
    scanf("%d", &b);
c = a;
a = b;
b = c;

printf("Logo a eh %d e b eh %d", a, b);
}*/

/*====================================================================================================================*/

/*5. Crie um algoritmo para realizar a conversão de valores informados em real (R$)
para dólar (US$). O programa deve receber como entrada o valor em real e o valor
da cotação do dólar.*/

/*int main()
{
    double real,cotacao;
    printf("valor em real: ");
    scanf("%lf", &real);
    
    cotacao = real*5.47;

    printf("o valor do real em dollar eh de: %2.lf",cotacao);
    return 0;
}*/

/*====================================================================================================================*/

/*6. Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, para
os quais fornece a quantidade de ração em gramas. A quantidade diária de ração
fornecida para cada gato é sempre a mesma. Faça um programa que receba o peso
do saco de ração e a quantidade de ração fornecida para cada gato, calcule e mostre
quanto restará de ração no saco após cinco dias*/

/*int main()
{
    double kg,gramas;
    printf("Kg do saco de racao: ");
    scanf("%lf", &kg);
    printf("Quantas gramas o kiko e o chico come: ");
    scanf("%lf", &gramas);
    kg = kg * 1000; //1000 = 1kg
    gramas = gramas*5; //5 dias
    kg = kg - gramas; //Quantos sobrou
// na hora de testar o codigo colocar "2.000" e nao "2000" para dar certo.
    printf("O vai sobrar no saco de racao apos 5 dias eh: %2.lf", kg);
    return 0;
}*/

