#include <stdio.h>
int main() {

char letra[3],letra2[3],pais1[20],pais2[20];
float pib1,pib2,area1,area2,densidadepopulacional1,densidadepopulacional2,pibpercapta1,pibpercapta2;
int tour1,tour2,carta1,carta2;
unsigned long int populacao1,populacao2; //definido como unsigned long int para mais numeros positivos.
char cod1[10],cod2[10],enter[3];


//INICIO
    printf("///---Bem-Vindo ao supertrunfo Paises By Tallecos!---///\n");
    
    //ENTRADA DE DADOS CARTA 1
    printf("---CARD 1---\n Digite o nome do Pais:\n");
    scanf(" %19[^\n]",pais1); /*%s é um especificador de formato, utilizado para STRING (conjunto de char)
                                  [^\n] é utilizado para permitir a inserção de espaços no scanf sem finalizar o programa.
                                  o número 19 é o limite de caracteres da string */

                                  
     printf("Digite o PIB do pais:\n");
    scanf("%f",&pib1);

    printf("Digite o numero da populacao:\n");
    scanf("%ld",&populacao1);

    printf("Quantos pontos turisticos existem no pais?\n");
    scanf("%d",&tour1);

    printf("Qual a Area do pais?\n");
    scanf("%f",&area1);

    printf("Digite uma letra do alfabeto entre --A e H-- para representar sua carta:\n");
    scanf("%2s",letra);

    printf("Digite um numero para sua carta:\n");
    scanf("%d",&carta1);


    //ENTRADA DE DADOS CARTA 2
    printf("---CARD 2---\n Digite o nome do pais:\n");
    scanf(" %19[^\n]",pais2);

    printf("Digite o PIB do pais:\n");
    scanf("%f",&pib2);

    printf("Digite o numero da populacao:\n");
    scanf("%ld",&populacao2);

    printf("Quantos pontos turisticos existem no pais?\n");
    scanf("%d",&tour2);

    printf("Qual a Area do pais?\n");
    scanf("%f",&area2);

    printf("Digite uma letra do alfabeto entre --A e H-- para representar sua carta:\n");
    scanf("%2s",letra2);

    printf("Digite um numero para sua carta:\n");
    scanf("%d",&carta2); //%d DOUBLE é um especificador de formato, uilizado para números inteiros (arredonda)


//(float) é um cast, O cast só afeta o valor no momento da operação. Ele não altera o tipo original da variável.
    densidadepopulacional1 =(float) populacao1 / area1;

    pibpercapta1 = (float) pib1 / populacao1;      //CALCULA O QUE ENTROU DE DADOS, DIVIDINDO E DEFININDO UMA NOVA
                                    // NUMERAÇÃO QUE SERÁ ATRIBUIDA EM UMA NOVA INFORMAÇÃO PARA EXIBIÇÃO.
    densidadepopulacional2 =(float) populacao2 / area2;

    pibpercapta2 = (float) pib2 / populacao2;


/*Alterações para o exercicio nivel mestre.
Criação de SUPER PODER, onde a soma é Populaçao, area, PIB, PIB per capta, Densidade populacional invertida.*/

float superpoder1 = populacao1 + area1 + pib1 + pibpercapta1 + (1/densidadepopulacional1);
float superpoder2 = populacao2 + area2 + pib2 + pibpercapta2 + (1/densidadepopulacional2);


    //RESULTADO APÓS O SCANF

    printf("\n\n\n-------------------\n\n\n");
//EXIBIÇÃO DA CARTA 1  
    sprintf(cod1,"%s%d",letra,carta1); //sprintf faz a junção do que foi obtido no scanf e printa 
    printf("---CARD 1---\n--ESTADO: %s\n--CODIGO: %s\n--PAIS: %s\n--AREA: %.2f KM²\n",letra,cod1,pais1,area1);
    printf("--POPULACAO: %ld\n--PIB: %.2f REAIS\n--TOUR: %d PONTOS TURISTICOS\n",populacao1,pib1,tour1);
    printf("--DENSIDADE POPULACIONAL:%f HAB/Km²\n--PIB PER CAPTA:%.2f REAIS\n",densidadepopulacional1,pibpercapta1);
    printf("Super Poder: %.2f\n",superpoder1);

    printf("\n\n\n-------------------\n\n\n");
//EXIBIÇÃO DA CARTA 2
    sprintf(cod2,"%s%d",letra2,carta2);
    printf("---CARD 2---\n--ESTADO: %s\n--CODIGO: %s\n--PAIS: %s\n--AREA: %.2f KM²\n",letra2,cod2,pais2,area2);
    printf("--POPULACAO: %ld\n--PIB: %.2f REAIS\n--TOUR: %d PONTOS TURISTICOS\n",populacao2,pib2,tour2);
    printf("--DENSIDADE POPULACIONAL:%f HAB/Km²\n--PIB PER CAPTA:%.2f REAIS\n",densidadepopulacional2,pibpercapta2);
    printf("Super Poder: %.2f\n",superpoder2);
  
    printf("\n\n\n\n\n======================================\n");

    //comparações para vitória
        int compararpopulacao = populacao1 > populacao2;
        int compararpib = pib1 > pib2;
        int comparartour = tour1 > tour2;
        int comparardensidade = densidadepopulacional1 < densidadepopulacional2;
        int comparararea = area1 > area2;
        int compararpibpercapta = pibpercapta1 > pibpercapta2;
    //comparação para empate 
        int empatepopulacao = populacao1 == populacao2;
        int empatepib = pib1 == pib2;
        int empatetour = tour1 == tour2;
        int empatedensidade = densidadepopulacional1 == densidadepopulacional2;
        int empatearea = area1 == area2;
        int empatepibpercapta = pibpercapta1 == pibpercapta2;

        int vitoriapais1 = 0, vitoriapais2 = 0;

    int opcao;

    printf("###############################\n");
    printf("Escolha um atriuto para comparar\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. Pontos Turisticos\n");
    printf("4. Densidade Populacional\n");
    printf("5. PIB\n");
    printf("6. PIB Per Capta\n");
    printf("Opcao:  ");
    scanf("%d",&opcao);



     // print das comparações

     switch(opcao){
        case 1:
     //COMPARAÇÃO DE POPULAÇÃO
     printf("____________________________________________________________________\n");
     printf("Populacao de %s: %ld || Populacao de %s: %ld \n\n",pais1,populacao1,pais2,populacao2);
     if(compararpopulacao){
        printf("==A POPULACAO DE %s GANHOU!==\n\n\n",pais1);
                      //vitoriacidade1++;
         }else if(empatepopulacao){
            printf("==A POPULACAO DE %s E %s EMPATARAM!==\n\n\n",pais1,pais2);
         } else{
                printf("==A POPULACAO DE %s GANHOU!==\n\n\n",pais2);
                        //vitoriacidade2++;
         }
         break;
         //COMPARAÇÃO DE ÁREA
         case 2:
     printf("____________________________________________________________________\n");        
           printf("Area de %s: %.2f || Area de %s: %.2f \n\n",pais1,area1,pais2,area2);
     if(comparararea){
        printf("==AREA de %s GANHOU!==\n\n\n",pais1);
               // vitoriacidade1++;
         } else if(empatearea){
            printf("==A AREA DE %s E %s EMPATARAM!==\n\n\n",pais1,pais2);
         }else{
                printf("==AREA de %s GANHOU!==\n\n\n",pais2);
                    //vitoriacidade2++;
            }
            break;
         //COMPARAÇÃO DE PONTOS TURÍSTICOS
         case 3:
     printf("____________________________________________________________________\n");
         printf("Pontos turisticos de %s: %d || Pontos turisticos de %s: %d \n\n",pais1,tour1,pais2,tour2);
     if(comparartour){
        printf("==OS PONTOS TURISTICOS DE %s GANHOU!==\n\n\n",pais1);
                //vitoriacidade1++;
         }else if(empatetour){
            printf("==OS PONTOS TURISTICOS DE %s E %s EMPATARAM!==\n\n\n",pais1,pais2);
         } 
         else{
                printf("==OS PONTOS TURISTICOS DE %s GANHOU!==\n\n\n",pais2);
                        //vitoriacidade2++;
         }
         break;
         //COMPARAÇÃO DE DENSIDADE POPULACIONAL
         case 4:
     printf("____________________________________________________________________\n");
         printf("Densidade Populacional de %s: %.2f || Densidade Populacional de %s: %.2f \n\n",pais1,densidadepopulacional1,pais2,densidadepopulacional2);
     if(comparardensidade){
        printf("==DENSIDADE POPULACIONAL DE %s GANHOU!==\n\n\n",pais1);
                //vitoriacidade1++;
         } else if(empatedensidade){
            printf("==A DENSIDADE DE %s E %s EMPATARAM!== \n\n\n",pais1,pais2);
                 }
         else{
                printf("==DENSIDADE POPULACIONAL DE %s GANHOU!==\n\n\n",pais2);
                            //vitoriacidade2++;
         }
         break;

        //COMPARAÇÃO DE PIB
        case 5:
     printf("____________________________________________________________________\n");
        printf("PIB de %s: %.2f || PIB de %s: %.2f \n\n",pais1,pib1,pais2,pib2);
     if(compararpib){
        printf("==O PIB DE %s GANHOU!==\n\n\n",pais1);
               // vitoriacidade1++;
         } else if(empatepib){
            printf("==O PIB DE %s E %s EMPATARAM!== \n\n\n",pais1,pais2);
                 }
         else{
                printf("==PIB DE %s GANHOU!==\n\n\n",pais2);
                       // vitoriacidade2++;
         }
         break;
         //COMPARAÇÃO DE PIB PER CAPTA
         case 6:
     printf("____________________________________________________________________\n");
         printf("PIB per capta de %s: %.2f || PIB per capta de %s: %.2f \n\n",pais1,pibpercapta1,pais2,pibpercapta2);
     if(compararpib){
        printf("==O PIB DE %s GANHOU!==\n\n\n",pais1);
               // vitoriacidade1++;
         } else if(empatepib){
            printf("==O PIB DE %s E %s EMPATARAM!== \n\n\n",pais1,pais2);
                 }
         else{
                printf("==PIB DE %s GANHOU!==\n\n\n",pais2);
                       // vitoriacidade2++;
         }
         break;

         default:
         printf("Opcao invalida\n");
        }
  /*  if(vitoriacidade1>vitoriacidade2){
        printf("=== CIDADE %s GANHOU COM %d PONTOS! ===\n",cidade1,vitoriacidade1);

    } else {
        printf("=== CIDADE %s GANHOU COM %d PONTOS! ===\n",cidade2,vitoriacidade2);

    }

*/

    printf("Pressione F e ENTER para finalizar.\n");
    scanf("%s",enter);

    return 0;
}