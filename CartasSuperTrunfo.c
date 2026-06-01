#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    char Carta1 = 'A', Carta2 = 'B';
    char Codigo1[20] = "A01";
    char Codigo2[20] = "B02";
    char Cidade1[20] = "São Paulo";
    char Cidade2[20] = "Rio de Janeiro";
    int Populacao1 = 12325000;
    int Populacao2 = 13875000;
    float Area1 = 1521.11;
    float Area2 = 1221.50;
    float PIB1 = 699.28;
    float PIB2 = 899.45;
    int IDH1 = 50;
    int IDH2 = 55;

    printf("Carta 1: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões\n", PIB1);
    printf("IDH: %d\n", IDH1);
    printf("\n");

    printf("Carta 2: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("IDH: %d\n", IDH2);

return 0;
} 