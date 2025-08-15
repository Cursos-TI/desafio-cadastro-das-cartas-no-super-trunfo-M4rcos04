#include <stdio.h>
#include <string.h>

int main() {
    // Definindo as duas cartas fixas para o desafio
    char nomePais1[100] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8515767.0;
    float pib1 = 1.645; // Trilhões de dólares
    int pontosTuristicos1 = 50;

    char nomePais2[100] = "Canadá";
    int populacao2 = 38000000;
    float area2 = 9984670.0;
    float pib2 = 1.97; // Trilhões de dólares
    int pontosTuristicos2 = 40;

    // Calculando a densidade demográfica para ambas as cartas
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int opcao;

    // Menu Interativo
    printf("--- Super Trunfo de Países ---\n");
    printf("Escolha o atributo para a batalha:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("------------------------------\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    // Estrutura de decisão para a escolha do atributo
    switch (opcao) {
        case 1:
            // Lógica de comparação para População
            printf("\nComparando por População...\n");
            printf("%s: %d habitantes\n", nomePais1, populacao1);
            printf("%s: %d habitantes\n", nomePais2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            // Lógica de comparação para Área
            printf("\nComparando por Área...\n");
            printf("%s: %.2f km²\n", nomePais1, area1);
            printf("%s: %.2f km²\n", nomePais2, area2);
            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            // Lógica de comparação para PIB
            printf("\nComparando por PIB...\n");
            printf("%s: %.2f trilhões de dólares\n", nomePais1, pib1);
            printf("%s: %.2f trilhões de dólares\n", nomePais2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            // Lógica de comparação para Pontos Turísticos
            printf("\nComparando por Pontos Turísticos...\n");
            printf("%s: %d pontos turísticos\n", nomePais1, pontosTuristicos1);
            printf("%s: %d pontos turísticos\n", nomePais2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            // Lógica de comparação para Densidade Demográfica (vence o menor valor)
            printf("\nComparando por Densidade Demográfica...\n");
            printf("%s: %.2f hab/km²\n", nomePais1, densidade1);
            printf("%s: %.2f hab/km²\n", nomePais2, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            // Lidar com entradas inválidas
            printf("\nOpção inválida. Por favor, escolha um número de 1 a 5.\n");
            break;
    }

    return 0;
}
