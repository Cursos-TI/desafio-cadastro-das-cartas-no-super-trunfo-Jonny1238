#include <stdio.h> // Para funções de entrada e saída (printf, scanf)
#include <stdlib.h> // Para system("pause") - opcional

// Define a estrutura para representar uma carta
// (Vamos chamar de Local, já que a descrição mencionou "cidade" também)
struct CartaTrunfo {
    int populacao;
    float area; // Em km²
    float pib;  // Em alguma unidade monetária (ex: bilhões de USD)
    int pontos_turisticos;
    // Poderíamos adicionar um nome: char nome[50]; mas não foi pedido.
};

int main() {

    // Declara as duas variáveis do tipo da estrutura para armazenar os dados
    struct CartaTrunfo carta1;
    struct CartaTrunfo carta2;

  // --- Cadastro da Carta 1 ---
  printf("--- Cadastro da Carta 1 ---\n");

  printf("Digite a Populacao da Carta 1: ");
  scanf("%d", &carta1.populacao); // Lê um inteiro e armazena em carta1.populacao

  printf("Digite a Area (em km²) da Carta 1: ");
  scanf("%f", &carta1.area); // Lê um float e armazena em carta1.area

  printf("Digite o PIB (ex: 1900.5 para 1.9 trilhoes) da Carta 1: ");
  scanf("%f", &carta1.pib); // Lê um float e armazena em carta1.pib








