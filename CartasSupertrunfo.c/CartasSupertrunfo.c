#include <stdio.h> // Para funções de entrada e saída (printf, scanf)
#include <stdlib.h> // Para system("pause") - opcional

// Define a estrutura para representar uma carta
struct CartaTrunfo {
    int populacao;
    float area; // Em km²
    float pib;  // Em bilhões de USD (ex: 1900.5 para 1.9 trilhões)
    int pontos_turisticos;
};

int main() {

    // Declara as duas variáveis do tipo da estrutura
    struct CartaTrunfo carta_brasil;
    struct CartaTrunfo carta_eua;

    // --- Pré-Popula os dados (Valores aproximados) ---
    // Estes valores servirão como base, mas o scanf permitirá alterá-los.

    // Dados do Brasil (Aproximados)
    carta_brasil.populacao = 215000000;
    carta_brasil.area = 8510000.0f;
    carta_brasil.pib = 1900.0f;         // Aproximadamente 1.9 trilhões USD (representado em bilhões)
    carta_brasil.pontos_turisticos = 150; // Valor ilustrativo

    // Dados dos EUA (Aproximados)
    carta_eua.populacao = 333000000;
    carta_eua.area = 9830000.0f;
    carta_eua.pib = 25500.0f;        // Aproximadamente 25.5 trilhões USD (representado em bilhões)
    carta_eua.pontos_turisticos = 250; // Valor ilustrativo

    // --- Cadastro Interativo da Carta 1 (Brasil) ---
    // O usuário verá os prompts e poderá digitar novos valores,
    // sobrescrevendo os valores pré-populados.
    printf("--- Cadastro/Confirmacao da Carta 1 (Brasil) ---\n");
    printf("Os valores atuais serao sobrescritos se voce digitar novos.\n\n");

    printf("Digite a Populacao do Brasil (atual: %d): ", carta_brasil.populacao);
    scanf("%d", &carta_brasil.populacao); // Lê um inteiro

    printf("Digite a Area (em km²) do Brasil (atual: %.0f): ", carta_brasil.area);
    scanf("%f", &carta_brasil.area); // Lê um float

    printf("Digite o PIB (em bilhoes USD) do Brasil (atual: %.1f): ", carta_brasil.pib);
    scanf("%f", &carta_brasil.pib); // Lê um float

    printf("Digite o Numero de Pontos Turisticos do Brasil (atual: %d): ", carta_brasil.pontos_turisticos);
    scanf("%d", &carta_brasil.pontos_turisticos); // Lê um inteiro

    // Adiciona uma linha em branco para melhor visualização no terminal
    printf("\n");

    // --- Cadastro Interativo da Carta 2 (EUA) ---
    printf("--- Cadastro/Confirmacao da Carta 2 (EUA) ---\n");
    printf("Os valores atuais serao sobrescritos se voce digitar novos.\n\n");

    printf("Digite a Populacao dos EUA (atual: %d): ", carta_eua.populacao);
    scanf("%d", &carta_eua.populacao);

    printf("Digite a Area (em km²) dos EUA (atual: %.0f): ", carta_eua.area);
    scanf("%f", &carta_eua.area);

    printf("Digite o PIB (em bilhoes USD) dos EUA (atual: %.1f): ", carta_eua.pib);
    scanf("%f", &carta_eua.pib);

    printf("Digite o Numero de Pontos Turisticos dos EUA (atual: %d): ", carta_eua.pontos_turisticos);
    scanf("%d", &carta_eua.pontos_turisticos);

    // Adiciona mais linhas em branco para separar a entrada da saída final
    printf("\n\n--- Dados Finais Cadastrados ---\n");

    // --- Exibição dos Dados da Carta 1 (Brasil) ---
    printf("\n--- Carta 1 (Brasil) ---\n");
    printf("Populacao: %d habitantes\n", carta_brasil.populacao);
    printf("Area: %.2f km²\n", carta_brasil.area); // %.2f para mostrar com 2 casas decimais
    printf("PIB: %.2f Bilhoes USD\n", carta_brasil.pib); // %.2f para mostrar com 2 casas decimais
    printf("Pontos Turisticos: %d\n", carta_brasil.pontos_turisticos);

    // --- Exibição dos Dados da Carta 2 (EUA) ---
    printf("\n--- Carta 2 (EUA) ---\n");
    printf("Populacao: %d habitantes\n", carta_eua.populacao);
    printf("Area: %.2f km²\n", carta_eua.area);
    printf("PIB: %.2f Bilhoes USD\n", carta_eua.pib);
    printf("Pontos Turisticos: %d\n", carta_eua.pontos_turisticos);

    printf("\nCadastro e exibicao concluidos!\n");

    // Opcional: Pausa a execução no Windows para ver a saída antes da janela fechar
    // system("pause");

    return 0; // Indica que o programa terminou com sucesso
}



