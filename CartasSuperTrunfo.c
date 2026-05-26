#include <stdio.h>

int main() {
  
char ESTADO[10]= "MG";
char CODIGO[10]= "M01";
char CIDADE[20]= "TURMALINA";
int POPULACAO= 20000;
float AREA= 1153.11;
float PIB= 44206.07;
int TURISMOS= 5;

printf("--CARTA 1--\n");

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

printf("\n --- CARTA 1 ---\n");
printf("ESTADO:%s\n", ESTADO);
printf("CODIGO:%s\n", CODIGO);
printf("CIDADE:%s\n", CIDADE);
printf("POPULACAO:%d\n", POPULACAO);
printf("AREA:%.2fKM²\n", AREA);
printf("PIB:%.2f\n", PIB);
printf("TURISMOS:%d\n", TURISMOS);







return 0;


  


} 
