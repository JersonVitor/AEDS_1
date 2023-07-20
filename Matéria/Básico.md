# Básico sobre algoritmos

## O que é um algoritmo?

Bom, para entendermos melhor sobre o que é um algoritmo, podemos pegar um conceito feito por Dirceu Douglas Salvetti:

> "Algoritmo é uma sequência finita de instruções ou operações cuja execução, em tempo finito, resolve um problema computacional, qualquer que seja sua instância."

Os algoritmos estão presentes em diversos lugares, como em receitas culinárias, em manuais de instruções, em que uma pessoa tem um passo a passo do que fazer para solucionar um problema. Vejamos um exemplo que demonstre isso com mais clareza:

```
.Soma de dois números:

1. início
2. pegar o primeiro número (A)
3. pegar o segundo número (B)
4. Calcular a soma dos números (Soma = A + B)
5. mostrar o resultado (Soma)
6. fim
```

Primeiro, você lê os valores dos dois números a serem somados (etapas 2 e 3). Em seguida, você realiza a soma dos números (etapa 4), armazenando o resultado na variável "Soma". Por fim, você exibe o resultado da soma (etapa 5) e o algoritmo é concluído (etapa 6).

## Variáveis, Bibliotecas e Outros Conceitos

Nesta seção, vamos explorar alguns conceitos fundamentais relacionados aos algoritmos, como o uso de variáveis e bibliotecas. Esses elementos são essenciais para a construção de algoritmos mais complexos e versáteis. Vamos começar com um exemplo básico:

```C
 //Inserindo bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main() //Função Principal
{
 printf("Soma de dois numeros:\n");

//declaração de variáveis
 int A = 2;
 int B = 3;

//Declaração, atribuição e cálculo da soma de dois números
 int soma = A + B;

//Escrita na tela do usuário
 printf("%d + %d = %d",A, B, soma);

 return 0;
}

```

Esse exemplo mostra como seria aquele algoritmo que fizemos de somar dois números, mas agora de um jeito que o compilador consiga construir para que o computador entenda melhor. Mas para elaborar esses algoritmos, precisamos entender alguns conceitos básicos:

### Bibliotecas

 Bibliotecas são coleções de códigos pré-definidos que fornecem funções e recursos específicos para facilitar o desenvolvimento de programas, em geral a linguagem C possui várias bibliotecas para programadores poderem utilizar, pois possui uma ampla gama de funcionalidades e recursos. Alguma das bibliotecas mais comuns são:

| Bibliotecas         | Descrição                                                                                              |
| ------------------- | -------------------------------------------------------------------------------------------------------- |
| **stdlib.h**  | Contém funções relacionadas ao gerenciamento de memória, alocação dinâmica e conversão de tipos. |
| **stdio.h**   | Fornece funções de entrada e saída padrão, como `printf()`, `scanf()`.                           |
| **math.h**    | Possui funções matemáticas, como `sqrt()`, `cos()`, `sin()` e várias outras.                   |
| **string.h**  | Obtém funções para manipulação de strings,`strcpy()`, `strcmp()`, `strlen()`                  |
| **stdbool.h** | É usada para manipular variáveis lógicas como verdadeiro (true) e falso (false)                       |

### Variáveis

Para entender o conceito de variável vou dar um exemplo que explique melhor:
Duas pessoas estão conversando e precisam fazer uma conta, então a primeira pessoa diz: "preciso fazer uma subtração de dois números e o primeiro número é o 7". Então a segunda pessoa pega esse número e guarda ele na cabeça, ou seja, na memória. A primeira pessoa então diz: "E o segundo número é o 3". A segunda pessoa também guarda esse número na memória, mas em outra parte, sem sobrescrever o 7. Por fim a primeira pessoa pergunta: "Qual a resposta ?". A segunda pessoa resgata os números 7 e 3 e faz a subtração e responde: "A resposta 4".

Com esse exemplo podemos entender que váriavel é um espaço na memória que serve para armazenar e manipular dados enquanto o programa estiver em execução. Ela desempenha um papel fundamental na programação permitindo façam um programa de forma eficiente. Cada variável deve ter um nome e seu tipo correspondente. O nome serve como um identificador da variável e o tipo detalha que tipo de valor que está na variável e as operações que podem ser realizadas.

Os tipos mais comuns de variáveis são:

| Tipo de Dado    | Descrição                                       | Escrita em C                     |
| --------------- | ------------------------------------------------- | -------------------------------- |
| Inteiro         | Representa números inteiros                      | `int`, `long`, `short int` |
| Ponto Flutuante | Representa números com casas decimais            | `float`, `double`            |
| Caractere       | Representa um único caractere                    | `char`                         |
| Booleano        | Representa um valor lógico (verdadeiro ou falso) | `bool` (Se usar stdbool.h)     |

 **Declaração de variáveis**

Para declaração de varáveis podemos usar uma parte do exemplo que foi apresentado mais acima:

```C
//declaração de variáveis
  int A;
  A = 2;
//ou
  int B = 3;

//Declaração, atribuição e cálculo da soma de dois números
  int soma = A + B;

```

Olhando o exemplo é possível destacar que quando vai criar uma variável, primeiro é colocado tipo do dado que vai armazenar e logo após o nome que vai ser o identificador da variável. Como você pode perceber existem 3 meios de se inicializar uma variável:

- Você pode simplesmente inicializar a variável e depois adicionar um dado.
- Pode inicializar a Variável atribuindo um dado de início.
- É possível iniciá-la atribuindo com uma operação.

Para colocar um nome de variável é preciso obedecer algumas regras de formatação:

- O caracteres permitidos são números, letras maiúsculas, minúsculas, e o caractere sublinhado.
- O primeiro caractere deve sempre ser uma letra ou o caractere sublinhado.
- Não são permitidos espaços em branco e caracteres especiais.
- Não podemos usar as palavras que são próprias da linguagem de programação como identificadores de variáveis.

Quando uma variável é declarada, é importante destacar que, nesse momento, o compilador reserva uma parte da memória para que aquela variável possa ser utilizada durante a execução do programa. Portanto, é necessário tomar cuidado ao declarar uma variável, seja evitando fazê-lo em locais onde o programa não executará ou dentro de estruturas de repetição. Dentro de uma estrutura de repetição, a variável será inicializada novamente a cada repetição do código, o que pode ocasionar na perda dos dados armazenados anteriormente.

### Entrada e Saída de dados

**Entrada de dados**

No exemplo anterior, nosso programa fazia a soma de 2 + 3 e mostrava o resultado na tela para o usuário. Mas imagine ter que ficar toda hora mudando o código para poder fazer outra soma. Então para resolver isso existe uma função chamada scanf() para poder receber dados do usuário sem alterar o código. Vejamos em um outro exemplo:

```C
#include <stdio.h>
#include <stdlib.h>

int main(){
  //Soma de dois números quaisquer
  puts("\nSoma de dois números quaisquer");
  
//Declaração e leitura do primeiro valor
  printf("\nDigite o primeiro valor:");
  float X;
  scanf("%f",&X);

//Declaração e leitura do primeiro valor
  printf("\nDigite o segundo valor:");  
  float Y;
  scanf("%f",&Y);

// Cálculo dos valores lidos:
  float soma = X + Y;

// escrita na tela do resultado do cálculo
  printf("\n%f + %f = %f\n", X, Y, soma);
 
  return 0;

}
```

Esse código basicamente pega dois números quaisquer que o usuário tenha digitado, faz o cálculo e mostra para o ususário. Para o Scanf() funcionar é preciso passar dois parâmetros:

- O formato do dado que o usuário vai digitar. No exemplo acima o usuário digita um número qualquer, então nesse caso é usado uma formatação que mostre que irá receber um float que é representado dentro das aspas como `"%f"`. Cada tipo possui sua formatação como:

| Tipo   | Formatação          |
| ------ | --------------------- |
| int    | `"%i"` ou `"%d"` |
| double | `"%lf"`             |
| float  | `"%f"`              |
| char   | `"%c"`              |

- O endereço da variável que irá armazenar o dado que o usuário vai digitar. Ele é obtido usando o operador `"&"` antes do nome da variável. O operador `"&"` é conhecido como operador de "endereço" e é usado para obter o endereço de memória de uma variável. Ao passar o endereço de memória para a função scanf(), ela pode armazenar o valor digitado pelo usuário nessa localização de memória específica.

**Saída de dados**

A saída de dados é a forma como o programa apresenta as inforamções para o usuário. Em linguagens como C existem duas funções comuns para realizar a saída de dados:

1. `printf()`: Essa função é amplamente utilizada para exibir dados formatados na tela. Ela permite exibir mensagens, valores de variáveis e outros dados com formatação específica. A sintaxe do `printf()` envolve o uso de códigos de formatação, que são especificados com `%`, para indicar os lugares onde os valores serão inseridos na mensagem de saída. Exemplo:


```C
#include <stdio.h>
int main() {
    int idade = 25;
    printf("A minha idade é %d anos.\n", idade);
    return 0;
}
```


Neste exemplo, a função `printf()` exibe a mensagem "A minha idade é 25 anos." na tela, onde `%d` é um código de formatação que indica que o valor da variável idade será exibido no lugar do `%d`.

2. `puts()`: Essa função é utilizada para exibir mensagens simples, sem formatação, na tela. Ela imprime a mensagem e adiciona uma nova linha após a exibição. Ao contrário do `printf()`, o `puts()` não permite a formatação dos dados e é mais adequado para exibir mensagens de texto simples. Exemplo:


```C
#include <stdio.h>
int main() {
    puts("Bem-vindo ao programa!");
    return 0;
}
```


Neste exemplo, a função `puts()` exibe a mensagem "Bem-vindo ao programa!" na tela, seguida de uma nova linha.

Em resumo, o `printf()` é mais flexível e permite formatar e exibir dados de forma personalizada, enquanto o `puts()` é mais simples e é usado para mostrar mensagens sem formatação. Escolha a função adequada com base nas necessidades de exibição do seu programa.




