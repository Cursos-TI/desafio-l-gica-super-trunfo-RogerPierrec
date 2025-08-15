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

    int opcao1, opcao2;
    float valor1a, valor2a, valor1b, valor2b;

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

// Menu interativo e escolhas do atributo

        printf("\nEscolha do 1° atributo\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Demográfica\n");
        printf("Escolha uma Opção: ");
        scanf("%d", &opcao1);

        printf("Escolha do 2° atributo (diferente do primeiro):\n");
        if(opcao1 != 1) printf("1.População\n");
        if(opcao1 != 2) printf("2.Área\n");
        if(opcao1 != 3) printf("3.PIB\n");
        if(opcao1 != 4) printf("4.Pontos Turísticos\n");
        if(opcao1 != 5) printf("5.Densidade Demográfica\n");
        scanf("%d", &opcao2);

        // valor dos atributos
    switch (opcao1)
    {
        case 1:
            valor1a = populacao1;
            valor2a = populacao2;
        break;
        case 2:
            valor1a = area1; 
            valor2a = area2; 
        break;
        case 3:
            valor1a = pib1;
            valor2a = pib2; 
        break;
        case 4:
            valor1a = pturistico1;
            valor2a = pturistico2;
        break;
        case 5:
            valor1a = denspopulacional1;
            valor2a = denspopulacional2;
        break;
    }

    switch (opcao2){
        case 1:
            valor1b = populacao1;
            valor2b = populacao2;
        break;
        case 2:
            valor1b = area1;
            valor2b = area2;
            break;
        case 3:
            valor1b = pib1;
            valor2b = pib2;
            break;
        case 4:
            valor1b = pturistico1;
            valor2b = pturistico2;
            break;
        case 5:
            valor1b = denspopulacional1;
            valor2b = denspopulacional2;
            break;
    }

    //Comparação

    printf("\nComparação Atributo 1: ");
    printf("%s: %.2f | %s: %.2f - ", cidade1, valor1a, cidade2, valor2a);

    if(opcao1==5)
        printf("%s\n", valor1a < valor2a ? codigo_da_carta1 : valor2a<valor1a ? codigo_da_carta2 : "Empate");
    else
        printf("%s\n", valor1a > valor2a ? codigo_da_carta1 : valor2a > valor1a ? codigo_da_carta2 : "Empate");

    printf("Comparação Atributo 2: ");
    printf("%s: %.2f | %s: %.2f - ", cidade1, valor1b, cidade2, valor2b);

    if(opcao2==5)
        printf("%s\n", valor1b < valor2b ? codigo_da_carta1 : valor2b < valor1b ? codigo_da_carta2 : "Empate");
    else
        printf("%s\n", valor1b > valor2b ? codigo_da_carta1 : valor2b > valor1b ? codigo_da_carta2 : "Empate");

    // Soma e vencedor

    float soma1 = valor1a + valor1b;
    float soma2 = valor2a + valor2b;

    printf("\nSoma dos atributos: %s: %.2f | %s: %.2f\n", codigo_da_carta1, soma1, codigo_da_carta2, soma2);

    if(soma1 > soma2) printf("Carta vencedora: %s\n", codigo_da_carta1);
    else if(soma2 > soma1) printf("Carta vencedora: %s\n", codigo_da_carta2);
    else printf("Empate!\n");


return 0;
}