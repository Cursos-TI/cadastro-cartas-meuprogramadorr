#include <stdio.h>

int main(){
    //criacao da primeira carta
    //declaracao de variaveis
    char ESTADO[10]= "MG";
    char CODIGO[10]= "MG1";
    char CIDADE[15]= "TURMALINA";
    int POPULACAO= 20769;
    float AREA= 115311.0f;
    float PIB= 486.9f;//MILHOES
    int TURISTICOS= 5;
    float DENSIDADE;
    float PERCAPITA;
    DENSIDADE= (float)POPULACAO / AREA;
    PERCAPITA= (PIB * 1000000.0f)/ POPULACAO;

    //titulo da carta
    printf("***CARTA 01***");

    //entrada e saida dos dados
    printf("DIGITE O NOME DO ESTADO:\n");
    scanf("%s", ESTADO);

    printf("DIGITE O NOME DA SUA CIDADE:\n");
    scanf("%s", CIDADE);

    printf("DIGITE O CODIGO:\n");
    scanf("%s", CODIGO);

    printf("PONTOS TURISTICOS:\n");
    scanf("%d", TURISTICOS);

    printf("DIGITE O NUMERO DA POPULACAO:\n");
    scanf("%d", POPULACAO);

    printf("DIGITE O PIB EM MILHOES:\n");
    scanf("%.2f", PIB);

    printf("DIGITE AREA EM KM2:\n");
    scanf("%.2F", AREA);

}
   
int main(){

    //carta numero 2
    //declaracao das variaveis da carta 2
    char ESTADO2[10]= "SP";
    char CODIGO2[10]= "SP02";
    char CIDADE2[15]= "GUARULHOS";
    int POPULACAO2= 1291771;
    float AREA2= 3188.4f;
    float PIB2= 97.6f;//bilhoes
    int TURISTICOS2= 15;
    float DENSIDADE2;
    float PERCAPITA2;
    DENSIDADE2= (float)POPULACAO2 / AREA2;
    PERCAPITA2= (PIB2 * 1000000.0f) / (float)POPULACAO2;


    //titulo da carta 2
    printf("***CARTA 02***");

    //entrada e saida de dados
    printf("DIGITE O NOME DO ESTADO:\n");
    scanf("%s", ESTADO2);

    printf("DIGITE O NOME DA SUA CIDADE:\n");
    scanf("%s", CIDADE2);

    printf("DIGITE O CODIGO:\n");
    scanf("%s", CODIGO2);

    printf("PONTOS TURISTICOS:\n");
    scanf("%d", TURISTICOS2);

    printf("DIGITE O NUMERO DA POPULACAO:\n");
    scanf("%d", POPULACAO2);

    printf("DIGITE O PIB EM MILHOES:\n");
    scanf("%.2f", PIB2);

    printf("DIGITE AREA EM KM2:\n");
    scanf("%.2F", AREA2);






}