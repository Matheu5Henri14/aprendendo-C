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