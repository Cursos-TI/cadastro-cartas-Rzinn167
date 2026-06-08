#include <stdio.h>

int main(){
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
    float DensidadePopulacional1 = Populacao1 / Area1;
    float DensidadePopulacional2 = Populacao2 / Area2;
    float PIBPerCapita1 = PIB1 * 1000000000 / Populacao1;
    float PIBPerCapita2 = PIB2 * 1000000000 / Populacao2;
    float SuperTrunfo1 = (Populacao1 * 0.2) + (Area1 * 0.3) + (PIB1 * 0.4) + (IDH1 * 0.1);
    float SuperTrunfo2 = (Populacao2 * 0.2) + (Area2 * 0.3) + (PIB2 * 0.4) + (IDH2 * 0.1);
    
    printf("Carta 1: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões\n", PIB1);
    printf("IDH: %d\n", IDH1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", PIBPerCapita1);
    printf("Super Trunfo: %.2f pontos\n", SuperTrunfo1);
    printf("\n");

    printf("Carta 2: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("IDH: %d\n", IDH2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", PIBPerCapita2);
    printf("Super Trunfo: %.2f pontos\n", SuperTrunfo2);

    printf("\nComparação entre as cartas:\n");
    printf("População: %s, %s\n", (Populacao1 > Populacao2) ? Codigo1 : Codigo2, (Populacao1 > Populacao2) ? "Carta 1 Venceu" : "Carta 2 Venceu");
    printf("Área: %s, %s\n", (Area1 > Area2) ? Codigo1 : Codigo2, (Area1 > Area2) ? "Carta 1 Venceu" : "Carta 2 Venceu");
    printf("PIB: %s, %s\n", (PIB1 > PIB2) ? Codigo1 : Codigo2, (PIB1 > PIB2) ? "Carta 1 Venceu" : "Carta 2 Venceu");
    printf("IDH: %s, %s\n", (IDH1 > IDH2) ? Codigo1 : Codigo2, (IDH1 > IDH2) ? "Carta 1 Venceu" : "Carta 2 Venceu");
    printf("Densidade Populacional: %s, %s\n", (DensidadePopulacional1 > DensidadePopulacional2) ? Codigo1 : Codigo2, (DensidadePopulacional1 > DensidadePopulacional2) ? "Carta 1 Venceu" : "Carta 2 Venceu");
    printf("PIB per Capita: %s, %s\n", (PIBPerCapita1 > PIBPerCapita2) ? Codigo1 : Codigo2, (PIBPerCapita1 > PIBPerCapita2) ? "Carta 1 Venceu" : "Carta 2 Venceu");
    printf("Super Trunfo: %s, %s\n", (SuperTrunfo1 > SuperTrunfo2) ? Codigo1 : Codigo2, (SuperTrunfo1 > SuperTrunfo2) ? "Carta 1 Venceu" : "Carta 2 Venceu");

    return 0;
}