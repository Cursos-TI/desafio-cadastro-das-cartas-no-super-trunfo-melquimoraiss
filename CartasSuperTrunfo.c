#include <stdio.h>



int main() {
    char estado, estado2;
    char codigo[5], codigo2[5];
    char nome[20], nome2[20];
    int populacao, populacao2,pontosturisticos, pontosturisticos2;
    float area, area2, pib, pib2;

    

// CARTA 1
    printf("\nCarta 1\n");

    printf("\nDigite uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf(" %c", &estado);

    printf("Digite o código do estado usando um numero de 2 dígitos (Ex: A01, A02, ...): \n");
    scanf("%3s", codigo);

    printf("Digite o nome de uma cidade brasileira: \n");
    scanf("%s", nome);

    printf("Digite a quantidade populacional da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos);

// CARTA 2
    printf("\nCarta 2\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf(" %c", &estado2);

    printf("Digite o código do estado usando um numero de 2 dígitos (Ex: A01, A02, ...): \n");
    scanf("%3s", codigo2);

    printf("Digite o nome de uma cidade brasileira: \n");
    scanf("%s", nome2);

    printf("Digite a quantidade populacional da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos2);
 

    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos turísticos: %d\n", pontosturisticos);

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    

   
    return 0;
}
