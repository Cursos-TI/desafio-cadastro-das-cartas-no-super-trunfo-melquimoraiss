#include <stdio.h> // Biblioteca padrão para entrada e saída de dados

int main() {
    // Declaração de variáveis da Carta 1 e Carta 2
    // Cada carta representa informações sobre uma cidade brasileira fictícia no estilo "Super Trunfo"

    
    char estado, estado2;
    char codigo[5], codigo2[5]; 
    char nome[20], nome2[20];
    int populacao, populacao2;
    int pontosturisticos, pontosturisticos2;
    float area, area2;
    float pib, pib2;
    float pibpercapita, pibpercapita2; 
    float densidadepop, densidadepop2; // (Densidade Populacional)



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
    printf("Digite o PIB da cidade (em bilhões): \n");
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

    printf("Digite o PIB da cidade (em bilhões): \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosturisticos2);

    // ==========================
    // CALCULANDO PIB PER CAPITA
    // ==========================

    pibpercapita = pib / populacao; //PIB per capita da carta 1
    pibpercapita2 = pib2 / populacao2; //PIB per capita da carta 2

    // ==========================
    // CALCULANDO DENSIDADE POPULACIONAL
    // ==========================

    densidadepop = populacao / area; // Densidade populacional da carta 1
    densidadepop2 = populacao2 / area2; // Densidade populacional da carta 2



    // ==========================
    // Exibição dos dados - Carta 1
    // ==========================
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area); // Exibe a área com 2 casas decimais
    printf("PIB: R$ %.2f bilhões\n", pib); // Exibe o PIB formatado
    printf("Pontos turisticos: %d\n", pontosturisticos);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidadepop); 
    printf("PIB per capta: R$ %.2f\n", pibpercapita); 

    // ==========================
    // Exibição dos dados - Carta 2
    // ==========================
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2); 
    printf("Nome: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos turisticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidadepop2); 
    printf("PIB per capta: R$ %.2f\n", pibpercapita2); 

    return 0; // Fim do programa
}
