#include <stdio.h>



int main() {
    char estado;
    char codigo[10];
    char nome[20];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    
    char estado2;
    char codigo2[10];
    char nome2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

// CARTA 1
    printf("Carta 1\n\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf("%c", &estado);

    printf("Digite o código do estado usando um numero de 2 dígitos (Ex: A01, A02, ...): \n");
    scanf("%s", &codigo);

    printf("Digite o nome de uma cidade brasileira: \n");
    scanf("%s", &nome);

    printf("Digite a quantidade populacional da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos);

    printf("\n\n");

// CARTA 2
    printf("Carta 2\n\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf("%c", &estado2);

    printf("Digite o código do estado usando um numero de 2 dígitos (Ex: A01, A02, ...): \n");
    scanf("%s", &codigo2);

    printf("Digite o nome de uma cidade brasileira: \n");
    scanf("%s", &nome2);

    printf("Digite a quantidade populacional da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos2);
 
    printf("\n\n");

    printf("Carta 1\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos turísticos: %d\n", pontosturisticos);

    printf("\n\n");

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    

   
    return 0;
}
