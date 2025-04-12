#include <stdio.h> // Biblioteca padrão para entrada e saída de dados

int main() {
    // Declaração de variáveis da Carta 1 e Carta 2
    // Cada carta representa informações sobre uma cidade brasileira fictícia no estilo "Super Trunfo"

    // Letras representando o estado (A até H)
    char estado, estado2;

    // Códigos das cidades (ex: A01, B02...)
    char codigo[5], codigo2[5]; 

    // Nomes das cidades
    char nome[20], nome2[20];

    // População total da cidade
    int populacao, populacao2;

    // Área em quilômetros quadrados (km²)
    float area, area2;

    // Produto Interno Bruto (PIB) em bilhões de reais
    float pib, pib2;

    // Quantidade de pontos turísticos relevantes na cidade
    int pontosturisticos, pontosturisticos2;

    // ==========================
    // Entrada de dados - Carta 1
    // ==========================
    printf("\nCarta 1\n ");
    
    // Solicita a letra do estado (de A a H)
    printf("\nDigite uma letra de 'A' a 'H' para (representar um dos 8 estados): \n");
    scanf("%c", &estado);
    
    // Solicita o código da cidade (como A01, B03, etc.)
    printf("Digite o codigo do estado usando um numero de 2 digitos (ex: A01, A02, ...): \n");
    scanf("%3s", codigo); // Lê no máximo 3 caracteres (evita ultrapassar o tamanho do array)

    // Solicita o nome da cidade
    printf("Digite o nome de uma cidade brasileira: \n");
    scanf("%s", nome);

    // Solicita a população da cidade
    printf("Digite a quantidade populacional da cidade: \n");
    scanf("%d", &populacao);

    // Solicita a área da cidade
    printf("Digite a area da cidade em km²: \n");
    scanf("%f", &area);

    // Solicita o PIB da cidade
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    // Solicita o número de pontos turísticos
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosturisticos);


    // ==========================
    // Entrada de dados - Carta 2
    // ==========================
    printf("\nCarta 2\n ");

    // Repetimos o processo para a segunda carta
    // Note que adicionamos um espaço antes do %c para consumir o '\n' deixado pelo scanf anterior
    printf("\nDigite uma letra de 'A' a 'H' para (representar um dos 8 estados): \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo do estado usando um numero de 2 digitos (ex: A01, A02, ...): \n");
    scanf("%3s", codigo2);

    printf("Digite o nome de uma cidade brasileira: \n");
    scanf("%s", nome2);

    printf("Digite a quantidade populacional da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosturisticos2);


    // ==========================
    // Exibição dos dados - Carta 1
    // ==========================
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area); // Exibe a área com 2 casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib); // Exibe o PIB formatado
    printf("Pontos turisticos: %d\n", pontosturisticos);

    // ==========================
    // Exibição dos dados - Carta 2
    // ==========================
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2); 
    printf("Nome: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turisticos: %d\n", pontosturisticos2);

    return 0; // Fim do programa
}
