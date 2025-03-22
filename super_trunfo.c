#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    //Variáveis     

    char estado1, estado2;
    char cod1[3], cod2[3];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2; 
    float pib1, pib2;
    float den_p1, den_p2, pib_capt1, pib_capt2;
    int turistico1, turistico2;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Carta1, entrada e saida de dados:
   
    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): "); 
    scanf("%c", &estado1);
    

    printf("Gerando código para a carta, escolha uma númeração de 01 a 04 (ex:01,02,03 ou 04): ");
    scanf("%s", cod1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
   

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area1);
   
    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite quantidade de pontos turisticos: ");
    scanf("%d", &turistico1);

    //Calculando variáveis carta 1 

    den_p1 = (float) (populacao1 / area1); 
    pib_capt1 = (float) (pib1 * 1000000000) / populacao1;

    
    // Carta2, entrada e saida de dados:
    
    printf("\n ");    
    printf("Cadastrando Carta2\n");
    
    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados):");
    scanf(" %c", &estado2);

    printf("Gerando código para a carta, escolha uma númeração de 01 a 04 (ex:01,02,03 ou 04):");
    scanf("%s", cod2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite quantidade de pontos turisticos: ");
    scanf("%d", &turistico2);    

    //Calculando variáveis carta 2 

    den_p2 = (float) (populacao2 / area2); 
    pib_capt2 = (float) (pib2 * 1000000000) / populacao2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    

    //Carta1 exibição das informações em tela:

    printf("\nCarta 1:\n");    
    printf("Estado:%c\n", estado1);
    printf("Código:%c%s\n", estado1, cod1); //gerando código da carta.
    printf("Nome da Cidade:%s\n", cidade1);
    printf("População:%d\n", populacao1);
    printf("Área:%.2fkm²\n", area1);
    printf("PIB:%.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos:%d\n", turistico1); 
    printf("Densidade Populacional: %.2f hab/km²\n", den_p1);
    printf("PIB per Capita: %.2f reais\n", pib_capt1);


    //Carta2 exibição das informações em tela:

    printf("\nCarta 2:\n");    
    printf("Estado:%c\n", estado2);
    printf("Código:%c%s\n", estado2, cod2); //gerando código da carta.
    printf("Nome da Cidade:%s\n", cidade2);
    printf("População:%d\n", populacao2);
    printf("Área:%.2fkm²\n", area2);
    printf("PIB:%.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos:%d\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", den_p2);
    printf("PIB per Capita: %.2f reais\n", pib_capt2);

    return 0;
}
