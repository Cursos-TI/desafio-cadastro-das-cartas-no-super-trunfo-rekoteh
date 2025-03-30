#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    char Nome_Cidade1[50];
    char Estado1;
    char Codigo1[20];
    unsigned long int Populacao1;
    int pontos_turisticos1;
    float Area1;
    float Pib1;
    float densidade_populacional1,PIB_per_Capita1;
    float super_poder1;    
    
    char Nome_Cidade2[67];
    char Estado2;
    char Codigo2[18];
    unsigned long int Populacao2;
    int pontos_turisticos2;
    float Area2;
    float Pib2;
    float densidade_populacional2,PIB_per_Capita2;
    float super_poder2;

    // Entrada de dados para a Carta 1
    printf("---Informações Carta 1---\n");
    printf("Digite o nome da cidade: ");
    scanf(" %s", Nome_Cidade1);

    printf("Digite uma letra de A a H: ");
    scanf(" %c", &Estado1);  

    printf("Digite o código da carta(formato ex: A01): ");
    scanf("%s", Codigo1);

    printf("Digite o número da população: ");
    scanf("%lu", &Populacao1);

    printf("Qual é a área total da cidade? ");
    scanf("%f", &Area1);

    printf("Qual é o produto interno bruto? ");
    scanf("%f", &Pib1);

    printf("Quantos pontos turísticos possui esta cidade? ");
    scanf("%d", &pontos_turisticos1);

    densidade_populacional1 = Area1 / Populacao1;
    PIB_per_Capita1 =  Pib1 / Populacao1;
    super_poder1 = (float) Populacao1 + Area1 + Pib1 + PIB_per_Capita1 + pontos_turisticos1 + (1/ densidade_populacional1);  
    

    // Entrada de dados para a Carta 2
    printf("\n---Informações Carta 2---\n");
    printf("Digite o nome da cidade: ");
    scanf(" %s", Nome_Cidade2);  

    printf("Digite uma letra de A a H: ");
    scanf(" %c", &Estado2); 

    printf("Digite o código da carta (formato ex: A01): ");
    scanf("%s", Codigo2);

    printf("Digite o número da população: ");
    scanf("%lu", &Populacao2);

    printf("Qual é a área total da cidade? ");
    scanf("%f", &Area2);

    printf("Qual é o produto interno bruto? ");
    scanf("%f", &Pib2);

    printf("Quantos pontos turísticos possui esta cidade? ");
    scanf("%d", &pontos_turisticos2);
   
    densidade_populacional2 =  Populacao2 / Area2;
    PIB_per_Capita2 =  Pib2 / Populacao2;
    super_poder2 = (float) Populacao2 + Area2 + Pib2 + PIB_per_Capita2 + pontos_turisticos2  + (1/ densidade_populacional2);  


    // Saída de dados para a Carta 1
    printf("\n---Carta 1---\n");
    printf("Nome da Cidade: %s\n", Nome_Cidade1);
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("População: %lu\n", Populacao1);
    printf("Área: %.2f km²\n", Area1); 
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais.\n", PIB_per_Capita1);
    printf("Super Poder: %.2f \n", super_poder1);

    
    printf("\n---Carta 2---\n");
    printf("Nome da Cidade: %s\n", Nome_Cidade2);
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("População: %lu\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais.\n", Pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f habitantes.\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais.\n", PIB_per_Capita2);
    printf("Super Poder: %.2f\n", super_poder2);


    printf("\n---Comparação das Cartas---\n");
    printf("População: %d\n", Populacao1 > Populacao2);
    printf("Área: %d\n", Area1 > Area2);
    printf("Pib: %d\n", Pib1 > Pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: %d\n", densidade_populacional1 > densidade_populacional2);
    printf("Pib per capita: %d\n", PIB_per_Capita1 > PIB_per_Capita2);
    printf("Super Trunfo:  %d\n",super_poder1 > super_poder2);

    return 0;
}
