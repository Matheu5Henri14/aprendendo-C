
# include <stdio.h>
#include <math.h>

/*int main()
{
  double angulo, seno,cosseno,tangente;
  printf("Informe o valor do angulo: ");
  scanf("%lf", &angulo);
  seno = sin(angulo);
  cosseno = cos(angulo);
  tangente = tan(angulo);
  printf("Seno: %.2lf\n", seno);
  printf("Cosseno: %.2lf\n", cosseno);
  printf("Tangente: %.2lf\n", tangente);
  return 0;
}*/

/*int main()
{
  double num, raiz;
  printf("informe o numero: ");
  scanf("%lf", &num);
  raiz = sqrt(num);
  printf("A raiz do numero eh: %.2lf\n", raiz);
  return 0;
    }*/

   /* int main() {
    double x, y, resultado;
    printf("informe o valor de x: ");
    scanf("%lf", &x);
    printf("informe o valor de y: ");
    scanf("%lf", &y);
    resultado = pow(x,y);
    printf("resultado: %.2lf\n", resultado);
    return 0;
    }*/

    /* Floor: arrendonda o número informado para o inteiro menor que ele
• Assinatura da função: double floor(double)
• Exemplo: y = floor(3.5); o valor de y é 3
• Ceil: arrendonda o número informado para o inteiro maior que ele
• Assinatura da função: double ceil (double)
• Exemplo: y = ceil(3.5); o valor de y é 4*/

/*Round:
• Caso o número informado seja inferior a x.5, o número é arredondado para baixo.
Caso contrário, o número é arredondado para cima.
• Assinatura da função: double round (double)
• Exemplo:
• y = round(3.5); o valor de y é 4
• y = round(3.45); o valor de y é 3*/

/*int main(){
  double num;
  printf("informe um  numero: ");
  scanf("%lf", &num);
  printf("Floor: %d\n", floor(num));
  printf("Ceil: %2.lf\n", ceil(num));
  printf("Round: %2.lf\n", round(num));
  return 0;
}*/


/////////////////////////////////////////////////////////
/*int main()
{
  double num,cubo,quad;
  printf("informe um numero: ");
  scanf("%lf", &num);
quad = pow(num, 2);
cubo = pow(num,3);
printf("quadrado: %2.lf\nCubo: %.2lf", quad, cubo);
return 0;
}*/


/*Escreva um algoritmo em C que recebe do usuário um número e imprime seu quadrado e seu
cubo. FEITO*/

/*int main()
{
  double num1,num2, resultado;
  printf("informe o primeiro numero: ");
  scanf("%lf", &num1);
  printf("informe o segundo numero: ");
  scanf("%lf", &num2);
  resultado = sqrt(num1*num2);
  printf("Resultado: %2.lf\n", resultado);
  return 0;
}*/
/////////////////////////////////////////////////////////////////
/*• Escrever um algoritmo em C que recebe dois números do usuário e retorna a raiz quadrada da
mulNplicação desses números.*/

/*• Nesse exercício, você deve escrever um algoritmo para calcular o valor de um termo n de uma
progressão aritméNca (PA), que tem a seguinte fórmula:
an= "#$%&$#' + ) − 1 ∗ #-.ã'
Dessa forma, o algoritmo deve solicitar ao usuário que informe o valor do primeiro termo, o valor
da razão da P.A. e seu número de ordem (n), e deve imprimir o termo calculado a parNr dos
valores informados.*/

/*============================================================================================================================================*/

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
/*int main(){
    int nascimento, agora,anos,meses,dias;
    printf("Em que anos voce esta no momento: ");
    scanf("%d", &agora);
    printf("Ano de nascimento: ");
    scanf("%d", &nascimento);
    anos = agora - nascimento;
    meses = anos * 12;
    dias = anos * 365;
    printf("Sua idade em anos eh: %d ", anos);
    printf("meses eh: %d ", meses);
    printf("Sua idade em dias eh: %d ", dias);
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

/*==========================================================================================================================*/

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

/*====================================================================================================================*/

/*int main(){
    
    int a,b, soma;
    printf("De o valor de a: ");
    scanf("%d", &a);
    printf("De o valor de b: ");
    scanf("%d", &b);
    soma = a + b;
    if (soma > 10)
    {
        printf("A soma eh: %d", soma);
    }
    else
    {
        printf("A soma eh menor ou igual a 10!");
    }
    return 0;
}*/

/*====================================================================================================================*/

/*int main(){
    int a, b, soma;
    printf("De o valor de A: ");
    scanf("%d", &a);
    printf("De o valor de B: ");
    scanf("%d", &b);
    soma = a + b;
    if (soma == 10)
    {
        printf("%d Sao iguais");
    }
    else
    {
        printf("Nao sao iguas");
    }
    
    return 0;
}*/

/*====================================================================================================================*/

/*int main(){
    int a,b;
    printf("De o valor de A: ");
    scanf("%d", &a);
    printf("De o valor de B: ");
    scanf("%d", &b);
    if (a<b)
    {
        printf("%d %d", a,b);
    }
    else
    {
        printf("%d %d", b,a);
    }
    return 0;
    
}*/

/*====================================================================================================================*/

/*int main(){
    int a;
    printf("Informe um numero: ");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("Numero positivo!");
    }
    else if (a == 0)
    {
        printf("Numero nulo!");
    }
    else
    {
        printf("Numero negativo!");
    }
    
    return 0;
}*/

/*====================================================================================================================*/

/*Escreva um algoritmo em C que recebe dois números inteiros do
usuários e verifica se ambos os números são pares. Em caso posi9vo
imprimir a mensagem “Ambos os números informados são pares!”.
Em caso nega9vo, verificar se algum dos dois números é par e
informar.*/

    /*int main(){
    int a,b;
    printf("De o valor de A: ");
    scanf("%d", &a);
    printf("De o valor de B: ");
    scanf("%d", &b);

    if (a%2==0 && b%2==0) {
        printf("Ambos os numeros informados sao pares!");
    } else if {
        printf("apenas 1 eh par!");
    }
    else
    {
        printf("Os dois nnumeros sao impares");
    }
    
    return 0;
}*/

/*====================================================================================================================*/

/*int main(){
    char sexo;
    double altura,peso;
    printf("Informe o sexo: ");
    scanf("%c", &sexo);
    printf("Informe a altura: ");
    scanf("%lf", &altura);
    if (sexo == 'M' || sexo == 'm')
    {
        peso = (72.7 * altura) - 58;
        printf("Peso ideal: %.2lf\n", peso);
    }
    else if(sexo =='f' || sexo == 'F'){
        peso = (62.1 * altura) - 44.7;
        printf("Peso ideal: %.2lf\n", peso);
    }
else{
    printf("Opcao invalida!");
}
return 0;
}*/

/*====================================================================================================================*/

/*Faça um programa que receba três números e mostre-os em ordem
crescente*/
/*int main(){
    int a,b,c;
    printf("De o primeiro numero: ");
    scanf("%d", &a);
    printf("De o segundo numero: ");
    scanf("%d", &b);
    printf("De o terceiro numero: ");
    scanf("%d", &c);
    if (a>=b && b>=c)
    {
        printf("A ordem eh: %d, %d, %d",a,b,c);
    }
    else
    {
        printf("fora de ordem!");
    }
    return 0;
    
}*/

/*====================================================================================================================*/

/*• Faça um programa que receba como entrada uma data no formato
(dd/mm/aa) e determine se ela é válida. Ou seja, verifique se o mês
está entre 1 e 12, e se o dia existe naquele mês. Note que fevereiro
tem 29 dias em anos bissextos, e 28 dias em anos não bissextos.*/
/*int main(){
    int  dd,mm,aa;
    printf("informe seu dia de nascimento: ");
    scanf("%d", &dd);
    printf("informe seu mes de nascimento: ");
    scanf("%d", &mm);
    printf("informe seu ano de nascimento: ");
    scanf("%d", &aa);
    if (dd>=1 && dd<=29)
    {
        printf("dia valido\n");
    }
    else
    {
        printf("Dia invalido\n");
    }
    if (mm>=1 && mm<=12)
    {
        printf("mes valido\n");
    }
    else if (mm>=13)
    {
        printf("mes invalido\n ");
    }
    
    if (aa>=2003 && aa<=2025)
    {
        printf("Ano valido\n");
    }
    else if (aa<=2002 && aa>=2026)
    {
        printf("Ano invalido\n ");
    }
    return 0;
}*/

/*============================================================================================================================================*/


/*Tabuada*/
/*int main(){
    for (int b = 1; b <=10; b++)
    {
        printf("tabuada do %d\n", b);
    
    for (int a = 0; a <=10; a++)
    {
        printf("%d * %d = %d\n",b,a,(b*a));
    }
    }
    
}*/

/*============================================================================================================================================*/

/*int main(){
    char conceito;
    printf("Informe o conceito do aluno: ");
    scanf("%c", &conceito);
    switch (conceito)
    {
    case 'a':
        printf("Excelente!");
        break;
    }
    {
    case 'b':
    printf("bom!");
    break;
    }
    {
    case 'c':
    printf("regular");
    break;
    }
    {
    case 'd':
    printf("reprovado");
    break;
    }
    }*/

/*=============================================================================================================================================*/

/*int main(){
double n1,n2;
char operacao;
printf("Informe dois numeros: ");
scanf("%lf %lf", &n1,&n2);
printf("Informe a operacao: +, -, * ou /");
scanf(" %c", &operacao);
switch (operacao)
{
    case '+':{
        printf("Soma: %.2lf\n", n1 + n2);
        break;
    }
    case '-':{
        printf("Subtracao: %.2lf\n", n1,n2);
        break;
        
    }
    case '/':{
        if (n2 == 0)
        {
            printf("Divisao por zero!\n");
        }
        else{
            printf("Divisao: %.2lf", n1/n2);
        }
        break;
    }
    case '*':{
        printf("Vezes: %.2lf\n", n1*n2);
        break;
    }
    default:{
        printf("Opcao invalida");
        }
    }
}*/

/*=============================================================================================================================================*/

/*int main()
{
    int n = 1;
    while (n <=10){
        printf("%d\t", n);
        n++; //e igual a +1
    }
    
    return 0;
}*/

/*=============================================================================================================================================*/

/*int main()
{
    int n,f=1;
    printf("Informe um numero: ");
    scanf("%d", &n);
    while (n>=1)
    {
        f *= n;
        n--;
    }
    printf("Fatorial: %d", f);
    return 0;

}*/

/*============================================================================================================================================*/

/*int main()
{
    int cont = 1, n,soma = 0;
    while(cont <=10){
         printf("Informe o %d: ",cont);
        scanf("%d",&n);
        soma += n;
        cont++;
    }
    printf("A soma dos numeros eh: %d.", soma);
    return 0;
}*/

/*==============================================================================================================================================*/

/*int main()
{
    int cont =1, n, negativo,soma= 0;
    while (cont <=15)
    {
        printf("informe o %d: ", cont);
        scanf("%d", &n);
        if (n >=0)
        {
            soma +=n;
        }
        else{
            negativo++;
            
        }
        cont++;
    
    }
    printf("Total %d", soma);
    printf("numero negativo: %d", negativo);
    return 0;
    
}*/

/*============================================================================================================================================*/

/*Escrever um algoritmo que recebe 15 números reais do usuário,
determina e escreve a soma dos valores posiGvos e a quanGdade
de valores negaGvos lidos.*/

/*int main()
{
    int cont =1, n,negativo,soma= 0;
    while (cont <=15)
    {
        printf("informe o %d: ", cont);
        scanf("%d", &n);
        if (n >=0)
        {
            soma +=n; //soma = soma + n;
        }
        else{
            negativo++; // negativo=negativo + 1;
            
        }
        cont++;
    
    }
    printf("Total %d", soma);
    printf("numero negativo: %d", negativo,);
    return 0;
    
}*/

/*Escreva um algoritmo que recebe 10 números do usuário, verifica
e imprime o maior e o menor número.*/

/*int main(){
    int num,maior,menor,cont = 2;
    printf("Informe o primeiro numero: ");
    scanf("%d", &num);
    maior = num;
    menor = num;
    while (cont<=10){
        printf("Informe o %d numero", cont);
        scanf("%d", &num);
        if (num > maior)
        {
            maior = num;
        }
        else if (num<menor)
        {
            menor=num;
        }
        cont++;
    }
    printf("Maior: %d\nMenor:%d\n", maior,menor);
    return 0;
}*/

/*Escreva um programa em C que inicialmente recebe do usuário um valor inteiro
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

/*6. Escrever um algoritmo que apresenta ao usuário menus de escolhas de pratos,
sobremesas e bebidas, de acordo com a tabela abaixo.
O usuário pode escolher um dos pratos, uma das sobremesas e uma das bebidas
desse cardápio. A seguir, o algoritmo deve calcular e escrever o total de calorias
da refeição, com base nas calorias dos pratos escolhidos.*/

