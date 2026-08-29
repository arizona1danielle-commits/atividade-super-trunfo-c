#include <stdio.h>

int main(){
    
    char estado;
    char codigo[4];
    char cidade[50];
    int Populucao = 12325000;
    float Area = 1521.10f;
    float PIB =  699.28f;
    int Numero_de_pontos_turisticos = 30;

    printf("Digite a populacao:\n");
    scanf("%d",&Populucao);

    printf("Digite a area:\n");
    scanf("%f",&Area);

    printf("Informe o Pib:\n");
    scanf("%f", &PIB);

    printf("Informe o estado:\n");
    scanf(" %c", &estado);

    printf("Informe o codigo:\n");
    scanf("%s", codigo);

    printf("Pontos turisticos:\n");
    scanf("%d", &Numero_de_pontos_turisticos);

    printf("Informe a cidade:\n");
    getchar();
    fgets(cidade, 50, stdin);

    






}
