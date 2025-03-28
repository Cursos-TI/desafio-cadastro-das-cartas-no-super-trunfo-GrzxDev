#include <stdio.h>

int main(){
    //Vou criar as variásveis da Carta 1.
    char estado[100];
    char codigo[100];
    char nomedacidade[100];
    int populacao;
    float area;
    float PIB;
    int npontosturisticos;

    //Aqui comecei a pegar as informações da Carta 1.

    printf("Dados da Carta 1: \n");

    printf("Digite uma letra de 'A' a 'H' para representar o seu estado: \n");
    scanf("%s", &estado);

    printf("Digite um código (01 a 04) junto com a letra do seu estado: \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade \n");
    scanf("%s", &nomedacidade);

    printf("Digite a população total da cidade \n");
    scanf("%d", &populacao);

    printf("Digite a área em KM da cidade \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos da cidade \n");
    scanf("%d", &npontosturisticos);

    //Aqui vou criar as variásveis da Carta 2.

    char estado2[50];
    char codigo2[50];
    char nomedacidade2[100];
    int populacao2;
    float area2;
    float PIB2;
    int npontosturisticos2;

    //Aqui vou pegar as informações da Carta 2.

    printf("\n Dados da Carta 2: \n");
    
    printf("Digite uma letra de 'A' a 'H' para representar o seu estado: \n");
    scanf("%s", &estado2);

    printf("Digite um código (01 a 04) junto com a letra do seu estado: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade \n");
    scanf("%s", &nomedacidade2);

    printf("Digite a população total da cidade \n");
    scanf("%d", &populacao2);

    printf("Digite a área em KM da cidade \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos da cidade \n");
    scanf("%d", &npontosturisticos2);

    //Já peguei as informações das 2 cartas, vou exibi-las organizadamente.

    printf("\n Carta 1: \n");
    
    printf("\n Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da cidade: %s \n", nomedacidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f bilhões de reais \n", PIB);
    printf("Número de Pontos Turísticos: %d \n", npontosturisticos); 

    printf("\n Carta 2: \n");

    printf("\n Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nomedacidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", PIB2);
    printf("Número de Pontos Turísticos: %d \n", npontosturisticos2);

    //Nas variásveis de tipo "float" limitei a 2 casas decimais para ficar mais organizado.

    return 0;
}