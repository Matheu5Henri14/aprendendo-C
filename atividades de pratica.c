/*1. Escreva um programa em C que inicialmente recebe do usuário um valor inteiro
i. Logo após, o seu programa deve solicitar ao usuário que informe mais 3 valores
a, b e c (podem ser inteiros ou decimais). Se o valor de i for par então o seu
programa deve calcular e imprimir na tela a média aritmética de a, b e c. Caso
contrário, se i>10 então o programa deve calcular e imprimir na tela a média
ponderada de a, b e c. Os pesos dos valores são respectivamente 2, 3 e 4.*/

/*int main(){
    int i;
    double a,b,c;
    printf("De o valor de I; ");
    scanf("%d", &i);
    printf("De o valor de A,B e C: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (i%2==0)
    {
        printf("A media aritmetica eh: %.2lf", ((a+b+c)/3));
    }
    else if (i>10 && i%2==1)
    {
       printf("A media ponderada eh: %.2lf",((a*2)+(b*3)+(c*4))/9);
    }
    
    else{
        printf("eh impar eh menor que 10");
    }
   
}*/

/*============================================================================================================================================*/

/*2. Elabore um algoritmo em C que receba dois valores do usuário, que correspondem
a base e a altura de um retângulo. Seu algoritmo deve verificar inicialmente se os
valores formam um retângulo ou um quadrado. Caso formem um quadrado,
imprima a palavra QUADRADO, e caso seja um retângulo, mostre o perímetro
(soma de todos os lados) e a área (base vezes a altura) do retângulo.*/

/*int main(){
int base,altura,perimetro,area;
printf("Fale a altura primeiro: ");
scanf("%d", &altura);
printf("De a base agora: ");
scanf("%d", &base);
if (base == altura)
{
    printf("Isso eh claramente um quadrado");
}
else{
    perimetro = (base * 2)+(altura * 2); // sempre faça * 2 a base a altura
    area = base * altura;
    printf("Voce deu as proporcoes de um triangulo sendo assim a base %d a altura %d, o perimetro:%d e a area:%d", base,altura,perimetro,area);
    return 0;
}
}*/

/*=============================================================================================================================================*/

/*3. Escreva um algoritmo que permite ao usuário executar ações a partir de dois
números informados por ele. O seu algoritmo deve solicitar inicialmente ao
usuário informe os dois números e depois exibir o seguinte menu em tela:
1- Soma de 2 números.
2- Diferença entre 2 números (maior pelo menor).
3- Produto entre 2 números.
4- Divisão entre 2 números (o denominador não pode ser zero).
O seu programa deve retornar o resultado de acordo com a opção escolhida pelo
usuário, obedecendo as restrições existentes em algumas das opções (caso sejam
escolhidas).*/

/*int main(){
    double a,b, resultado;
    int opcao;
    printf("Digite o primeiro numero: ");
    scanf("%lf", &a);
    printf("Informe o segundo numero: ");
    scanf("%lf", &b);
    printf("\nEscolha uma das opcoes\n");
    printf("1 - A soma dos 2 numeros\n");// +
    printf("2- Diferenca entre 2 numeros (maior pelo menor).\n"); //-
    printf("3- Produto entre 2 numeros.\n"); // *
    printf("4- Divisão entre 2 numeros (o denominador não pode ser zero)\n");// %
    scanf("%d", &opcao);
if (opcao == 1)
{
 resultado = a + b;
 printf("A soma dos 2 numeros eh: %.2lf", resultado);   
}
else if (opcao == 2)
{
    if (a>b)
    {
        resultado = a - b;
       
    }else{
            resultado = b - a;
        }
    printf("A diferenca entre 2 numeros eh %.2lf", resultado);
}
else if (opcao == 3)
{
    resultado = a*b;
    printf("O produto entre os 2 numero eh: %.2lf", resultado);
}
else if (opcao == 4)
{
    resultado = a/b;
    printf("A divisao entre esses 2 numeros eh: %.2lf", resultado);
}

}*/

/*=============================================================================================================================================*/


/*4. As tarifas de certo parque de estacionamento são as seguintes:
1ª e 2ª hora - R$ 1,00 cada
3ª e 4ª hora - R$ 1,40 cada
5ª hora e seguintes - R$ 2,00 cada
O número de horas a pagar é sempre inteiro e arredondado por excesso. Deste
modo, quem estacionar durante 61 minutos pagará por duas horas, que é o mesmo
que pagaria se tivesse permanecido 120 minutos. Os momentos de chegada ao
parque e partida deste são apresentados na forma de pares de inteiros,
representando horas e minutos. Por exemplo, o par 12 50 representará “dez para
a uma da tarde”. Pretende-se criar um programa que, lidos pelo teclado os
momentos de chegada e de partida, escreva na tela o preço cobrado pelo
estacionamento. Admite-se que a chegada e a partida se dão com intervalo não
superior a 24 horas. Portanto, se uma dada hora de chegada for superior à da
partida, isso não é uma situação de erro, antes significará que a partida ocorreu no
dia seguinte ao da chegada.*/

/*int main(){
    double min,horas;
    printf("Quantas hoars voce ficou: ");
    scanf("%lf", &horas);
    printf("Quantos minutos ?: ");
    scanf("%lf", &min);
    if (horas<=1 && min<=60)
    {
        printf("Voce pagara 1R$");
    }
    else if (min>=61)
    {
        printf("Voce pagara 1R$");
    }
    
    else if (horas>1 && horas<=2 && min>=61)
        {printf("Voce pagara 1R$");

    }
    else if (horas>= 3 && horas<=4)
    {
        printf("Voce pagara 1.40R$");
    }
    else if (horas>=5)
    {
        printf("Voce pagara 2R$");
    }
    
    

    return 0;
}*/



/*=============================================================================================================================================*/

/*5. Uma empresa determinou um reajuste salarial de 5 % a todos os seus funcionários.
Além disto, concedeu um abono de R$ 100,00 para aqueles que recebem até R$
750,00. Escreva um algoritmo que, dado o valor do salário de um funcionário,
informe para quanto ele será reajustado.*/

/*int main(){
    double salario,reajuste;
    printf("Digite seu salario: ");
    scanf("%lf", &salario);
    if (salario>=750 && (reajuste=(salario/100)*5))
    {
        printf("O aumento de 5%% foi feito tendo o aumento de: %.2lfR$", reajuste);
    }
    else if (salario<=750)
    {
        printf("Voce recebeu um abono de 100R$");
    }
    
    
}*/

/*=============================================================================================================================================*/

/*6. Escrever um algoritmo que apresenta ao usuário menus de escolhas de pratos,
sobremesas e bebidas, de acordo com a tabela abaixo.
O usuário pode escolher um dos pratos, uma das sobremesas e uma das bebidas
desse cardápio. A seguir, o algoritmo deve calcular e escrever o total de calorias
da refeição, com base nas calorias dos pratos escolhidos.*/

/*int main(){
    int prato, sobremesa, bebida,soma;
    printf("Escolha seu prato principal entre 1-Vegetariano(180Cal),2-Peixe(230Cal),3-Frango(250Cal),4-Carne(350Cal) : ");
    scanf("%d", &prato);
    printf("Escolha sua sobremesa entre 1-abacaxi(75Cal),2-sorvete(110Cal),3-moussediet(170),4-mousseChocolate(200Cal) : ");
    scanf("%d", &sobremesa);
    printf("Escolha sua bebida entre 1-Cha(20Cal),2-sucodelaranja(70Cal),3-sucodemelao(100Cal),4-Refrigerante(65Cal) :");
    scanf("%d", &bebida);
    switch (prato)
    {
    case 1:{
     soma = 180;
     break;
    }
    case 2:{
        soma = 230;
        break;
    }
    case 3:{
        soma = 250;
        break;
    }
    case 4:{
        soma = 350;
        break;
    }
    
    default:{
        printf("Nao existe essa opcao de prato\n");
    }
   
    }
    switch (sobremesa)
    {
    case 1:{
        soma += 75;
        break;
    }
    case 2:{
        soma +=110;
        break;
    }
    case 3:{
        soma += 170;
        break;
    }
    case 4:{
        soma += 200;
        break;
    }
    
    default:{
        printf("Nao temos essa opcao de sobremesa, logo nao sera comtabilizado\n");
       
    }
    }
    switch (bebida)
    {
    case 1:{
        soma += 20;
        break;
    }//20,70,100,65
    
    case 2:{
        soma +=70;
        break;
    }
    case 3:{
        soma += 100;
        break;
    }
    case 4:{
        soma +=65;
        break;
        if(bebida>4){
            printf("nao tem");
        }else{

        }
    }
    default:{
        printf("Nao temos essa opcao de bebida, logo nao sera contabilizado\n");
    }
    }
    printf("Voce escolheu o %d, %d e o %d e a soma das calorias eh: %d", prato,sobremesa,bebida,soma);
    return 0;
}*/

/*=====================================⬇️ATIVIDADE DO DIA 10-09-2025⬇️=====================================*/


    
    
/*Escreva um programa em C que receba do usuário a idade, o peso e o sexo de 10
pessoas. Por fim, o seu algoritmo deve imprimir:
a. O total de homens;
b. O total de mulheres;
c. A soma e a média das idades dos homens;
d. A soma e a média dos pesos das mulheres.*/


/*int main() {
    int idade, totalHomens = 0, totalMulheres = 0;
    int somaIdadeHomens = 0, somaIdadeMulheres = 0;
    char sexo;
    double mediaHomens = 0.0, mediaMulheres = 0.0;

    for (int i = 1; i <= 10; i++) {
        printf("Pessoa %d:\n", i);
        
        printf("Idade: ");
        scanf("%d", &idade);

        printf("Peso: ");
        float peso;
        scanf("%f", &peso);

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo); 

        if (sexo == 'M' || sexo == 'm') {
            totalHomens++;
            somaIdadeHomens += idade;
        } else if (sexo == 'F' || sexo == 'f') {
            totalMulheres++;
            somaIdadeMulheres += idade;
        } else {
            printf("nao tem (use M ou F)\n");
            i--; 
        }

        printf("\n");
    }

    if (totalHomens > 0)
        mediaHomens =  somaIdadeHomens / totalHomens;

    if (totalMulheres > 0)
        mediaMulheres =  somaIdadeMulheres / totalMulheres;

    printf("Total de homens: %d\n", totalHomens);
    printf("Total de mulheres: %d\n", totalMulheres);
    printf("Soma das idades dos homens: %d\n", somaIdadeHomens);
    printf("Media das idades dos homens: %.2f\n", mediaHomens);
    printf("Soma das idades das mulheres: %d\n", somaIdadeMulheres);
    printf("Media das idades das mulheres: %.2f\n", mediaMulheres);

    return 0;
}*/


/*2. Escreva um programa que receba do usuário 10 valores inteiros e positivos e:
a. Encontre e imprima o maior valor;
b. Encontre e imprima o menor valor;
c. Calcule a média dos números lidos.*/

/*int main(){
    int valor;
    double maior,menor,soma;
    
    for (int i = 1; i <=10; i++)

    {
        printf("De o valor %d: ", i);
        scanf("%d", &valor);
        if (i == 1)
        {
            maior=valor;
            menor=valor;
        }
        else if (maior<valor)
        {
            maior=valor;
        }else if (menor>valor)
        {
            menor=valor;
        }
        soma+=valor;
        
        
        
    }
    printf("O maior numero eh: %.2lf\n e o menor eh %.2lf\n a soma dos valores eh: %.2lf\n", maior,menor,soma,(soma/10));

    return 0;
    
}*/

/*3. Escreva um programa que receba do usuário 2 valores inteiros e positivos: X e Y.
O seu programa deve calcular e escrever o valor da função potência XY utilizando
um laço de repetição (ou seja, sem utilizar a função pow)*/

/*int main(){
    int X,Y, soma;
    for (int i = 1; i <=1; i++)
    {
        printf("De o valor de x: ");
        scanf("%d", &X);
        printf("De o valor de Y: ");
        scanf("%d", &Y);
    }
    soma=X+Y;
    printf("A soma eh de %d e %d eh %d", X,Y,soma);
    return 0;
}*/



/*4. Escreva um algoritmo que exiba uma mensagem com as opções "1-
multiplicar","2-somar", "3- Subtrair", "4-Dividir", "5-Sair". O seu programa deve
ler a opção desejada (1, 2, 3, 4), solicitar ao usuário que informe dois valores,
executar a operação escolhida e exibir o resultado. O programa deve ficar
repetindo a execução (ou seja, exibição das opções, leitura doa valores e exibição
do resultado), até que seja escolhida a opção sair*/

/*int main(){
    int multiplicar,somar,subtrair,dividir,sair,opcao;
    double v1,v2;
    do
    {
        printf("\nEscolha as opcoes:\n ");
        printf("1-Multiplicacao\n2-somar\n3-subtrair\n4-divir\n5-Sair\n");
        scanf("%d", &opcao);
        printf("De o valor1: ");
        scanf("%lf", &v1);
        printf("De o valor2: ");
        scanf("%lf", &v2);

         switch (opcao)
            {
            case 1:{
                printf("A multiplicacao desses numeros eh: %.2lf", (v1*v2));
                break;
            }
            case 2:{
                printf("A soma desses numeros eh: %.2lf", (v1+v2));
                break;
            }
            case 3:{
                printf("A Subtracao desses numeros eh: %.2lf", (v1-v2));
                break;
            }
            case 4:{
                printf("A divisao desses numeros eh: %.2lf", (v1/v2));
                break;
            }
            case 5:{
                opcao=5;
            }
        }
    } while (opcao!=5);   
}*/

/*5. Escreva um programa que receba a idade e o peso de 15 pessoas. O seu programa
de calcular e mostre as médias dos pesos das pessoas da mesma faixa etária. As
faixas etárias são: de 1 a 10 anos, de 11 a 20, de 21 a 30 anos e maiores de 31
anos.*/

/*int main()
    {
int idade;
double kg,soma,soma2,soma3,soma4;

for (int i = 1; i <=3; i++)
    {
        printf("\nQual a idade dessa pessoa?:\n ");
        scanf("%d", &idade);
        printf("Qual o peso dessa pessoa:\n" );
        scanf("%lf", &kg);
    }  
    if (idade<=10)
    {
        soma+=kg; 
    }else if (idade>=11 || idade<=20)
    {
        soma2+=kg;  
    }else if (idade>=21 || idade<=30)
    {
        soma3+=kg; 
    }else if (idade>=31)
    {
        soma4+=kg;
    }
     printf("O peso total dessas pessoas eh: %.2lf", soma/15);
     printf("O peso total dessas pessoas de 11 a 20 anos eh: %.lf", soma2/15);
     printf("O peso total dessas pessoas de 21 a 30 anos eh: %.2lf", soma3/15);
     printf("O peso total dessas pessoas de 31 anos acima eh: %.2lf", soma4/15);
        return 0;

    }*/

/*Escreva um programa que leia o código de um determinado
produto e mostre a sua classificação. Utilize a tabela abaixo
como referência:*/


    /*int main(){

        int opcao;

        printf("Escolha uma opcao: ");
        printf("1:\n");
        printf("2:\n");
        printf("3:\n");
        printf("4:\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:{
            printf("Alimento nao perecivel");
            break;
        }
        case 2:{
            printf("Alimento_perecivel");
            break;
        }
        case 3:{
            printf("vestuario");
            break;
        }
        case 4:{
            printf("limpeza");
            break;
        }
        }
    }*/


    /*Escreva um algoritmo que recebe como entrada o RA de um aluno, as 3 notas obtidas durante o semestre e a nota dos exercícios e
calcula a média de aproveitamento, usando a fórmula: Média = (nota 1 + nota 2 * 2 + nota 3 * 3 + ME)/7
A atribuição dos conceitos obedece à regra abaixo. Por fim, o seu algoritmo deve escrever o RA do aluno, suas notas, a média dos
exercícios, a média final, o conceito correspondente e a mensagem 'Aprovado' se o conceito for A, B ou C, e 'Reprovado' se o conceito
for D ou E.*/

/*int main(){
    int RA;
    double media,nota1,nota2,exercicios,ME;
    printf("Digite seu RA: ");
    scanf("%d", &RA);
    printf("Nota dos exercicios: ");
    scanf("%lf", &exercicios);
    printf("Nota da primeira prova: ");
    scanf("%lf", &nota1);
    printf("Nota da segunda prova: ");
    scanf("%lf", &nota2);
    printf("Media dos exercicios: ");
    scanf("%lf", &ME);

    media=(nota1+nota2*2+exercicios*3 + ME)/7;
    if (media>= 90)
    {
        printf("A aprovado!");
    }
    else if (media>=75 && media<90){
        printf("B aprovado!");
    }
    else if (media>=60 && media<75)
    {
        printf("C aprovado!");
    }
    else if (media>=40 && media<60)
    {
        printf("D voce reprovou");
    }
    else if (media<40)
    {
        printf("E voce reprovou");
    }
    return 0;
    
    
    
}*/

/* Exercício 3 Escreva um algoritmo que permita fazer um levantamento do estoque de
vinhos de uma adega, que tem como dados de entrada os tipos de vinhos,
sendo: “T” para tinto; “B” para branco e “R” para rosê. A quantidade de
garrafas de vinho da adega é desconhecida. Quando a letra “F” (de fim) for
informada, o programa deve parar de receber dados e escrever a quantidade
de cada tipo de vinho e a quantidade total de vinhos na adega.
*/


/*int main(){
    char vinho;
    int tinto=0,branco=0,rose=0,total;
    printf("Escolha um dos estoques:\n");
    printf("Adega T\n");
    printf("Adega B\n");
    printf("Adega R\n");
    printf("Sair F\n");
    scanf("%c", &vinho);

while (vinho!='F')
{
    switch (vinho)
    {
        case 'T':
        case 't':
            printf("Vinho tinto adicionado ao estoque!");
            tinto++;
            break;
        
        case 'B':
        case 'b':
            printf("Vinho Branco adicionado ao estoque!");
            branco++;
            break;
        
        case 'R':
        case 'r':
            printf("Vinho Rose adicionado ao estoque!");
            rose++;
            break;
        
        case 'F':
        case 'f':
            printf("\nObrigado por acessar nosso estoque!\n");
            break;
    }
    printf("Escolha um dos estoques:\n");
    scanf("%c", &vinho);
    
}
    total=tinto+branco+rose;
     printf("Temos um total de %d tinto %d branco %drose. o total eh:%d", tinto,branco,rose,total);

}*/

/*Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos. Os
dados utilizados para a contagem dos votos obedecem à seguinte codificação:
• 1,2,3,4 = voto para os respectivos candidatos;
• 5 = voto nulo;
• 6 = voto em branco;
• Elabore um algoritmo que leia o código do candidato em um voto. Calcule e escreva:
• total de votos para cada candidato;
• total de votos nulos;
• total de votos em branco;
• Como finalizador do conjunto de votos, tem-se o valor 0.*/

/*int main(){
    int candidato1 = 0,candidato2 = 0,candidato3 = 0,candidato4 = 0;
    int Candidatos;
    double nulo = 0,branco = 0; 
    printf("1-Eneias!\n");
    printf("2-Bolsonaro!\n");
    printf("3-Lula\n");
    printf("4-Dilma\n");
    printf("5-Voto Nulo\n");
    printf("6-Voto em branco\n");
    printf("0-Encerrar Votacao\n");
    
    while (Candidatos)
    {
        printf("Digite seu voto:  ");
        scanf("%d", &Candidatos);

        if (Candidatos == 0) break;

        switch(Candidatos){
            case 1:{
                printf("voce votou no Eneias!!\n");
                candidato1++;
                break;
            }
            case 2:{
                printf("Voce votou no Bolsonaro!!\n");
                candidato2++;
                break;
            }
            case 3:{
                printf("Voce votou no lula PETISTA SAFADOOOOO!!\n");
                candidato3++;
                break;
            }
            case 4:{
                printf("Voce votou na Dilma Ladrao de Bancos!\n");
                candidato4++;
                break;
            }
            case 5:{
                printf("Voce votou Nulo\n");
                break;
            }
            case 6:{
                printf("Voce votou em branco\n");
                break;
            }
            case 0:{
                printf("A votacao acabou");
                break;
            }
            default:{
                printf("Voto Invalido\n");
            }

        }

    }
    printf("O total de votos para o Eneias foi de %d\n",candidato1);
    printf("O total de votos para o Eneias foi de %d\n",candidato2);
    printf("O total de votos para o Eneias foi de %d\n",candidato3);
    printf("O total de votos para o Eneias foi de %d\n",candidato4);
    printf("O total de votos para o Eneias foi de %2.lf\n",nulo);
    printf("O total de votos para o Eneias foi de %2.lf\n",branco);

        return 0;
    }*/

    /*As Ilhas Weblands formam um reino independente nos mares do Pacífico. Como é um reino recente, a sociedade é
muito influenciada pela informática. A moeda oficial é o Bit; existem notas de B$ 50,00, B$10,00, B$5,00 e B$1,00.
Você foi contratado(a) para ajudar na programação dos caixas automáticos de um grande banco das Ilhas Weblands.
• Tarefa: Os caixas eletrônicos das Ilhas Weblands operam com todos os tipos de notas disponíveis, mantendo um
estoque de cédulas para cada valor ( B$ 50,00, B$10,00, B$5,00 e B$1,00). Os clientes do banco utilizam os caixas
eletrônicos para efetuar retiradas de um certo número inteiro de Bits. Sua tarefa é escrever um programa que, dado
o valor de Bits desejado pelo cliente, determine o número de cada uma das notas necessário para totalizar esse
valor, de modo a minimizar a quantidade de cédulas entregues. Por exemplo, se o cliente deseja retirar B$ 50,00,
basta entregar uma única nota de cinquenta Bits. Se o cliente deseja retirar B$72,00, é necessário entregar uma nota
de B$50,00, duas de B$10,00 e duas de B$1,00.
• O seu programa deve funcionar uma quantidade indeterminada de vezes, até q o valor zero (condição de para do
programa) seja informado.
Exercício 5*/

/*int main(){
    int valor;
    int nota50,nota10,nota5,nota1;
    printf("|===Bem vindo===|\n|======ao=======|\n|====Caixa======|\n\n");
    printf("qual o valor desejado?\n\n");
    scanf("%d", &valor);
    while (valor)
    {

        if (valor == 0){
            printf("Obrigado por acessar nosso caixa");
            break;
        }
        
        if (valor<0)
        {
            printf("Numero inferior a zero nao eh valido");
        }
        nota50=valor/50;
        valor=valor%50;

        nota10=valor/10;
        valor=valor%10;

        nota5=valor/5;
        valor=valor%5;

        nota1=valor/1;

        printf("Nota para entregar\n");
        if(nota50>0)
        printf("B$50: %d\n", nota50);
        if(nota10>0)
        printf("B$10: %d\n", nota10);
        if(nota5>0)
        printf("B$5: %d\n", nota5);
        if(nota1>0)
        printf("B$1: %d\n", nota1);
        
       
       }
       return 0;
}*/


/*#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
    int opcao;
    double raio, area, circunferencia;

    printf("|=== Calculadora de Círculo Interativa ===|\n");

    while (1) {
        printf("\nEscolha o que voce tem:\n");
        printf("1 - Raio\n");
        printf("2 - area\n");
        printf("3 - Circunferencia\n");
        printf("0 - Sair\n");
        printf("Digite a opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Encerrando a calculadora. Ate mais!\n");
            break;
        }

        switch(opcao) {
            case 1:
                printf("Digite o valor do raio: ");
                scanf("%lf", &raio);
                area = PI * raio * raio;
                circunferencia = 2 * PI * raio;
                break;

            case 2:
                printf("Digite o valor da area: ");
                scanf("%lf", &area);
                raio = sqrt(area / PI);
                circunferencia = 2 * PI * raio;
                break;

            case 3:
                printf("Digite o valor da circunferencia: ");
                scanf("%lf", &circunferencia);
                raio = circunferencia / (2 * PI);
                area = PI * raio * raio;
                break;

            default:
                printf("Opção invalida! Tente novamente.\n");
                continue; // volta para o início do loop
        }

        printf("\nResultados:\n");
        printf("Raio: %.2lf\n", raio);
        printf("area: %.2lf\n", area);
        printf("Circunferencia: %.2lf\n", circunferencia);
    }

    return 0;
}*/
