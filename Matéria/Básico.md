# Básico sobre algoritmos
## O que é um algoritmo?

Bom, para entendermos melhor sobre o que é um algoritmo, podemos pegar um conceito feito por Dirceu Douglas Salvetti:

> "Algoritmo é uma sequência finita de instruções ou operações cuja execução, em tempo finito, resolve um problema computacional, qualquer que seja sua instância."

Os algoritmos estão presentes em diversos lugares, como em receitas culinárias, em manual de instruções, em que uma pessoa tem um passo a passo do que fazer para solucionar um problema. Vejamos um exemplo que demonstre isso com mais clareza:

```
Soma de dois números:

1. inicio
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

 | Bibliotecas  | Descrição |
| ------------- | ------------- |
| **stdlib.h**  | Contém funções relacionadas ao gerenciamento de memória, alocação dinâmica e conversão de tipos. |
| **stdio.h**  | Fornece funções de entrada e saída padrão, como `printf()`, `scanf()`.  |
| **math.h**  | Possui funções matemáticas, como `sqrt()`, `cos()`, `sin()` e várias outras.  |
| **string.h**  | Obtém funções para manipulação de strings, `strcpy()`, `strcmp()`, `strlen()` |
| **stdbool.h** | É usada para manipular variáveis lógicas como verdadeiro (true) e falso (false) |

### Variáveis
Para entender o conceito de variável vou dar um exemplo que explique melhor:
Duas pessoas estão conversando e precisam fazer uma conta, então a primeira pessoa diz: "preciso fazer uma subtração de dois números e o primeiro número é o 7". Então a segunda pessoa pega esse número e guarda ele na cabeça, ou seja, na memória. A primeira pessoa então diz: "E o segundo número é o 3". A segunda pessoa também guarda esse número na memória, mas em outra parte, sem sobrescrever o 7. Por fim a primeira pessoa pergunta: "Qual a resposta ?". A segunda pessoa resgata os números 7 e 3 e faz a subtração e responde: "A resposta 4".

Com esse exemplo podemos entender que váriavel é um espaço na memória que serve para armazenar e manipular dados enquanto o programa estiver em execução. Cada variável deve ter um nome e seu tipo correspondente






































