#include <stdio.h>

int main(){
    //criacao da primeira carta
    //declaracao das variaveis da carta 1
    char ESTADO[10]= "MG";
    char CODIGO[10]= "MG01";
    char CIDADE[15]= "TURMALINA";
    int POPULACAO= 20000;
    float AREA= 1153.111f;
    float PIB= 443.706f;//MILHOES
    int TURISTICOS= 5;
    float DENSIDADE;
    float PERCAPITA;
    DENSIDADE= (float)POPULACAO / AREA;
    PERCAPITA= (PIB * 1000000.0f)/ POPULACAO;

    
    //titulo da carta
    printf("\n***CARTA 01***\n");

    //entrada e saida dos dados
    printf("DIGITE O NOME DO ESTADO:\n");
    scanf("%s", ESTADO);

    printf("DIGITE O CODIGO:\n");
    scanf("%s", CODIGO);

    printf("DIGITE O NOME DA CIDADE:\n");
    scanf("%s", CIDADE);

    printf("DIGITE O NUMERO DA POPULACAO:\n");
    scanf("%d", &POPULACAO);

    printf("DIGITE A AREA EM KM2:\n");
    scanf("%f", &AREA);

    printf("DIGITE O PIB EM MILHOES:\n");
    scanf("%f", &PIB);

    printf("DIGITE O NUMERO DE PONTOS TURISTICOS:\n");
    scanf("%d", &TURISTICOS);

    printf("\nESTADO: %s\n", ESTADO);
    printf("CODIGO: %s\n", CODIGO);
    printf("CIDADE: %s\n", CIDADE);
    printf("POPULCAO: %d\n", POPULACAO);
    printf("AREA: %.2f KM2\n", AREA);
    printf("PIB: %.2f MILHOES DE REAIS\n", PIB);
    printf("PONTOS TURISTICOS: %d\n", TURISTICOS);
    printf("DENSIDADE POPULACIONAL: %.2f HAB/KM2\n", DENSIDADE);
    printf("PIB PER CAPITA: %.2f REAIS\n", PERCAPITA);

    

    //carta numero 2
    //declaracao das variaveis da carta 2
    char ESTADO2[10]= "SP";
    char CODIGO2[10]= "SP02";
    char CIDADE2[15]= "GUARULHOS";
    int POPULACAO2= 1291771;
    float AREA2= 318.84f;
    float PIB2= 97.6f;//bilhoes
    int TURISTICOS2= 15;
    float DENSIDADE2;
    float PERCAPITA2;
    DENSIDADE2= (float)POPULACAO2 / AREA2;
    PERCAPITA2= (PIB2 * 1000000000.0f) / (float)POPULACAO2;


    //titulo da carta 2
    printf("\n***CARTA 02***\n");

    //entrada e saida de dados
    printf("DIGITE O NOME DO ESTADO:\n");
    scanf("%s", ESTADO2);

    printf("DIGITE O CODIGO:\n");
    scanf("%s", CODIGO2);

    printf("DIGITE O NOME DA CIDADE:\n");
    scanf("%s", CIDADE2);
    
    printf("DIGITE O NUMERO DA POPULACAO:\n");
    scanf("%d", &POPULACAO2);

    printf("DIGITE AREA EM KM2:\n");
    scanf("%f", &AREA2);

    printf("DIGITE O PIB EM BILHOES:\n");
    scanf("%f", &PIB2);

    printf("DIGITE O NUMERO DE PONTOS TURISTICOS:\n");
    scanf("%d", &TURISTICOS2);

    
    printf("\nESTADO: %s\n", ESTADO2);
    printf("CODIGO: %s\n", CODIGO2);
    printf("CIDADE: %s\n", CIDADE2);
    printf("POPULCAO: %d\n", POPULACAO2);
    printf("AREA: %.2f KM2\n", AREA2);
    printf("PIB: %.2f BILHOES DE REAIS\n", PIB2);
    printf("PONTOS TURISTICOS: %d\n", TURISTICOS2);
    printf("DENSIDADE POPULACIONAL: %.2f HAB/KM2\n", DENSIDADE2);
    printf("PIB PER CAPITA: %.2f REAIS\n", PERCAPITA2);

    


    return 0;







}