    #include <stdio.h>

    int main(){
        
        char estado;
        char codigo[4];
        char cidade[50];
        int Populucao;
        float Area;
        float PIB;
        int Numero_de_pontos_turisticos;
        float Densidade_Populaciona;
        float Pib_Capita;

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

        Densidade_Populaciona = Populucao/Area;
            Pib_Capita = (PIB * 1000000000) / Populucao;

            printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populaciona);
            printf("Pib per Capita: %.2f reais\n", Pib_Capita);
            printf("\n=== RESULTADO CARTA 1 ===\n");

            printf("Estado: %c\n", estado);
            printf("Codigo: %s\n", codigo);
            printf("Nome da Cidade: %s", cidade);
            printf("Populacao: %d\n", Populucao);
            printf("Area: %.2f km²\n", Area);
            printf("PIB: %.2f bilhoes de reais\n", PIB);
            printf("Numero de Pontos Turisticos: %d\n", Numero_de_pontos_turisticos);
            printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populaciona);
            printf("PIB per Capita: %.2f reais\n", Pib_Capita);


            printf("\n=== CARTA 2 ===\n");

            char estado2;
            char codigo2[4];
            char cidade2[50];
            int Populacao2;
            float Area2;
            float PIB2;
            int Numero_de_pontos_turisticos2;
            float Densidade_Populacional2;
            float Pib_Capita2;


        printf("Digite a populacao:\n");
        scanf("%d", &Populacao2);

        printf("Digite a area:\n");
        scanf("%f", &Area2);

        printf("Informe o PIB:\n");
        scanf("%f", &PIB2);

        printf("Informe o estado:\n");
        scanf(" %c", &estado2);

        printf("Informe o codigo:\n");
        scanf("%3s", codigo2);

        printf("Pontos turisticos:\n");
        scanf("%d", &Numero_de_pontos_turisticos2);

        printf("Informe a cidade:\n");
        getchar();
        fgets(cidade2, 50, stdin);

        Densidade_Populacional2 = Populacao2 / Area2;

    Pib_Capita2 = (PIB2 * 1000000000) / Populacao2;

    printf("\n=== RESULTADO CARTA 2 ===\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s", cidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhoes de reais\n", PIB2);
    printf("Numero de Pontos Turisticos: %d\n", Numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional2);
    printf("PIB per Capita: %.2f reais\n", Pib_Capita2);

        return 0;
        



        }
