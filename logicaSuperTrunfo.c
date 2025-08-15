#include <stdio.h>

int main(){

    //Carta 1
    char codigo_da_carta1 [20];
    char estado1 [20];
    char cidade1 [20];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pturistico1;
    float denspopulacional1;
    float pibpercap1;

    //Carta 2
    char codigo_da_carta2 [20];
    char estado2 [20];
    char cidade2 [20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pturistico2;
    float denspopulacional2;
    float pibpercap2;

    int opcao;

    //Cadastro da carta 01

    printf("Digite os dados da carta 01\n");
    printf("Codigo da carta: ");
    scanf("%3s", codigo_da_carta1);

    printf("Estado: ");
    scanf("%20s", estado1);

    printf("Nome da Cidade: ");
    scanf("%20s", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Números de Pontos Turísticos:");
    scanf("%d", &pturistico1);

    denspopulacional1 = populacao1 / area1;
    pibpercap1 = pib1 / populacao1;

    printf("\nOs dados da carta 01 %s é: \n Estado: %s \n Cidade: %s \n População: %lu \n Área: %.2f \n PIB: %.2f \n Pontos Turísticos: %d\n Densidade Populacional: %.2f \n PIB per Capita: %.2f \n",
         codigo_da_carta1, estado1, cidade1, populacao1, area1, pib1, pturistico1, denspopulacional1, pibpercap1);
    //Cadastro da carta 02

    printf("\nDigite os dados da carta 02\n");
    printf("Codigo da carta: ");
    scanf("%3s", codigo_da_carta2);

    printf("Estado: ");
    scanf("%20s", estado2);

    printf("Nome da Cidade: ");
    scanf("%20s", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Números de Pontos Turísticos:");
    scanf("%d", &pturistico2);

    denspopulacional2 = populacao2 / area2;
    pibpercap2 = pib2 / populacao2;

    printf("\nOs dados da carta 02 %s é: \n Estado: %s \n Cidade: %s \n População: %lu \n Área: %.2f \n PIB: %.2f \n Pontos Turísticos: %d \n Densidade Populacional: %.2f \n PIB per Capita: %.2f\n", 
        codigo_da_carta2, estado2, cidade2, populacao2, area2, pib2, pturistico2, denspopulacional2, pibpercap2);

// Menu interativo e comparação de cartas

        printf("\n ### Menu de Comparação ###\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Demográfica\n");
        printf("Escolha uma Opção: ");
        scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\nComparação da População:\n");
        printf("%s: %lu\n", cidade1, populacao1);
        printf("%s: %lu\n", cidade2, populacao2);
    
            if(populacao1 > populacao2){
                printf("Carta %s Venceu\n", codigo_da_carta1);
            } else if (populacao2 > populacao1){
                printf("Carta %s Venceu\n", codigo_da_carta2);
            } else {
                printf("Empate!\n");
            }
        break;
    case 2:
        printf("\nComparação da Área:\n");
        printf("%s: %.2f\n", cidade1, area1);
        printf("%s: %.2f\n", cidade2, area2);

        if(area1 > area2){
            printf("Carta %s Venceu\n", codigo_da_carta1);
        } else if (area2 > area1){
            printf("Carta %s Venceu\n", codigo_da_carta2);
        } else {
            printf("Empate!\n");
        }
        break;
    case 3:
        printf("\nComparação do PIB:\n");
        printf("%s: %.2f\n", cidade1, pib1);
        printf("%s: %.2f\n", cidade2, pib2);

        if(pib1 > pib2){
            printf("Carta %s Venceu!\n", codigo_da_carta1);
        } else if (pib2 > pib1){
            printf("Carta %s Venceu!\n", codigo_da_carta2);
        } else {
            printf("Empate!\n");
        }
        break;
    case 4:
        printf("\nComparação dos Pontos Turísticos\n");
        printf("%s: %d\n", cidade1, pturistico1);
        printf("%s: %d\n", cidade2, pturistico2);

        if(pturistico1 > pturistico2){
            printf("Carta %s Venceu!\n", codigo_da_carta1);
        } else if (pturistico2 > pturistico1){
            printf("Carta %s Venceu!\n", codigo_da_carta2);
        } else {
            printf("Empate!\n");
        }
        break;
    case 5:
        printf("\nComparação entre Densidade Demográfica\n");
        printf("%s: %.2f\n", cidade1, denspopulacional1);
        printf("%s: %.2f\n", cidade2, denspopulacional2);

        if(denspopulacional1 < denspopulacional2){
            printf("Carta %s Venceu!\n", codigo_da_carta1);
        } else if (denspopulacional2 < denspopulacional1){
            printf("Carta %s Venceu!\n", codigo_da_carta2);
        } else {
            printf("Empate!\n");
        }
        break;
    default:
        printf("Opção inválida, tente novamente!\n");
        break;
    }

return 0;
}