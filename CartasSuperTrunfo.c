#include <stdio.h>

int main() {
  
char ESTADO[10]= "MG";
char CODIGO[10]= "M01";
char CIDADE[20]= "TURMALINA";
int POPULACAO= 20000;
float AREA= 1153.11;
float PIB= 44206.07;
int TURISMOS= 5;

printf("--CARTA 01--\n");

printf("ESTADO:");
scanf("%s", ESTADO);

printf("CODIGO DA CARTA:");
scanf("%s", CODIGO);

printf("NOME DA CIDADE:");
scanf("%s", CIDADE);

printf("POPULACAO:");
scanf("%d", &POPULACAO);

printf("AREA EM KM²:");
scanf("%f", &AREA);

printf("PIB EM MILHOES:");
scanf("%f", &PIB);

printf("NUMERO DE PONTOS TURISTICOS:");
scanf("%d", &TURISMOS);

printf("\n --- CARTA 01 ---\n");
printf("ESTADO:%s\n", ESTADO);
printf("CODIGO:%s\n", CODIGO);
printf("CIDADE:%s\n", CIDADE);
printf("POPULACAO:%d\n", POPULACAO);
printf("AREA:%.2f KM2\n", AREA);
printf("PIB:%.2fREAIS\n", PIB);
printf("TURISMOS:%dPONTOS TURISTICOS\n", TURISMOS);



     
    char ESTADO2[10]="MG";
    char CODIGO2[15]="M02";
    char CIDADE2[20]="BeloHorizonte";
    int POPULACAO2=2434975;
    float AREA2=331.35;
    float PIB2=1302;
    int TURISMOS2=17;
     
    printf("\n");

    printf("---CARTA 02---\n");

    printf("ESTADO2:");
    scanf(" %s", ESTADO2);

    printf("CODIGO2:");
    scanf(" %s", CODIGO2);

    printf("CIDADE2:");
    scanf(" %s", CIDADE2);

    printf("POPULACAO2:");
    scanf(" %d", &POPULACAO2);

    printf("AREA EM KM2:");
    scanf(" %f", &AREA2);

    printf("PIB EM MILHOES:");
    scanf(" %f", &PIB2);

    printf("NUMERO DE PONTOS TURISTICOS:");
    scanf(" %d", &TURISMOS2);

    printf("\n---CARTA 02---\n");
    printf("ESTADO: %s\n", ESTADO2);
    printf("CODIGO: %s\n", CODIGO2);
    printf("CIDADE: %s\n", CIDADE2);
    printf("POPULACAO: %d\n", POPULACAO2);
    printf("AREA EM KM2: %.2f KM2\n", AREA2);
    printf("PIB EM MILHOES: %.2fREAIS\n", PIB2 );
    printf("PONTOS TURISTICOS: %d\n", TURISMOS2);


    return 0;


    






}

    







































  



