#include <stdio.h>
int main() {

char uf1[3],uf2[3],cidade1[20],cidade2[20];
float pib1,pib2,area1,area2;
int tour1,tour2,carta1,carta2,pop1,pop2; 
char cod1[10],cod2[10],enter[3];


//INICIO
    printf("///---Bem-Vindo ao supertrunfo Brasil do Tallecos!---///\n");
    
    //CARD 1
    printf("---CARD 1---\n Digite o nome da cidade:\n");
    scanf(" %19[^\n]",cidade1); /*%s é um especificador de formato, utilizado para STRING (conjunto de char)
                                  [^\n] é utilizado para permitir a inserção de espaços no scanf sem finalizar o programa.
                                  o número 19 é o limite de caracteres da string */

                                  
     printf("Digite o PIB da cidade:\n");
    scanf("%f",&pib1);

    printf("Digite o numero da populacao:\n");
    scanf("%d",&pop1);

    printf("Quantos pontos turisticos existe na cidade?\n");
    scanf("%d",&tour1);

    printf("Qual a Area da cidade?\n");
    scanf("%f",&area1);

    printf("Digite uma letra do alfabeto entre --A e H-- para representar sua carta:\n");
    scanf("%2s",uf1);

    printf("Digite um numero para sua carta:\n");
    scanf("%d",&carta1);


    //CARD 2
    printf("---CARD 2---\n Digite o nome da cidade:\n");
    scanf(" %19[^\n]",cidade2);

    printf("Digite o PIB da cidade:\n");
    scanf("%f",&pib2);

    printf("Digite o numero da populacao:\n");
    scanf("%d",&pop2);

    printf("Quantos pontos turisticos existe na cidade?\n");
    scanf("%d",&tour2);

    printf("Qual a Area da cidade?\n");
    scanf("%f",&area2);

    printf("Digite uma letra do alfabeto entre --A e H-- para representar sua carta:\n");
    scanf("%2s",uf2);

    printf("Digite um numero para sua carta:\n");
    scanf("%d",&carta2); //%d é um especificador de formato, uilizado para números inteiros (arredonda)


    //RESULTADO APÓS O SCANF

    printf("\n\n\n-------------------\n\n\n");
    
    sprintf(cod1,"%s%d",uf1,carta1); //sprintf faz a junção do que foi obtido no scanf e printa 
    printf("---CARD 1---\n--ESTADO: %s\n--CODIGO: %s\n--CIDADE: %s\n--AREA: %.2f KM²\n--POPULACAO: %d\n--PIB: %.2f REAIS\n--TOUR: %d PONTOS TURISTICOS\n",uf1,cod1,cidade1,area1,pop1,pib1,tour1);

    printf("\n\n\n-------------------\n\n\n");

    sprintf(cod2,"%s%d",uf2,carta2);
    printf("---CARD 2---\n--ESTADO: %s\n--CODIGO: %s\n--CIDADE: %s\n--AREA: %.2f KM²\n--POPULACAO: %d\n--PIB: %.2f REAIS\n--TOUR: %d PONTOS TURISTICOS\n",uf2,cod2,cidade2,area2,pop2,pib2,tour2);
    printf("\n\n\n-------------------\n\n\n");

    printf("Pressione F e ENTER para finalizar.\n");
    scanf("%s",enter);

    return 0;
}