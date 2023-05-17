//Crie uma struct "Pessoa" com os campos "nome", "idade" e "altura". Em seguida,
//declare duas variáveis desse tipo e preencha-as com dados diferentes. Imprima as
//informações na tela. Você deverá exibir seu nome e mais um outro aleatório.

#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
    struct Pessoa noob1 = {"Seven", 27, 2.01};
    struct Pessoa noob2 = {"White", 61, 1.66};
    
    printf("Nome noob1 = %s\n", noob1.nome);
    printf("idade noob1 = %d\n", noob1.idade);
    printf("altura noob1 = %.2f\n", noob1.altura);
    printf("Nome noob2 = %s\n", noob2.nome);
    printf("idade noob2 = %d\n", noob2.idade);
    printf("altura noob2 = %.2f\n", noob2.altura);
    return 0;
}