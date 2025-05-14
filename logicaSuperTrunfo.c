#include <stdio.h>
//versao super trunfo desenvolvendo a logica nivel novato
int main(){
	//                  DECLARACAO VARIAVEIS
	
	//declaracao variaveis carta1
		int populacao1, pontosTuristicos1;
		float area1, pib1; 
		char codigoCarta1[4];
		char nomeCidade1[20];
		char estado1;
		float pibPerCapita1; 
		float densidadePopulacional1; 
		
			
	//declaracao variaveis carta2
		int populacao2, pontosTuristicos2;
		float area2, pib2; 
		char codigoCarta2[4];
		char nomeCidade2[20];
		char estado2;
		float pibPerCapita2; //nova variavel do nivel aventureio
		float densidadePopulacional2; // nova variavel nivel aventureiro
	
	//leitura de dados carta 1
		printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
		scanf(" %c", &estado1);
		printf("Digite a letra do estado seguida de um numero de 01 a 04 (ex: A01, B03): ");
		scanf(" %s", codigoCarta1);
		printf("Digite o nome da cidade: ");
		scanf(" %s", nomeCidade1);
		printf("Digite o numero de habitantes da cidade: ");
		scanf(" %d", &populacao1);
		printf("Digite a area da cidade em quilometros quadrados: ");
		scanf(" %f", &area1);
		printf("Digite o PIB da cidade em milhoes de reais: ");
		scanf(" %f", &pib1);
		printf("Digite a quantidade de pontos turisticos: ");
		scanf(" %d", &pontosTuristicos1);
	
	//carta 2	
	//leitura de dados carta 2
		printf("\nDigite uma letra de 'A' a 'H' (representando um dos oito estados): ");
		scanf(" %c", &estado2);
		printf("Digite a letra do estado seguida de um numero de 01 a 04 (ex: A01, B03): ");
		scanf(" %s", codigoCarta2);
		printf("Digite o nome da cidade: ");
		scanf(" %s", nomeCidade2);
		printf("Digite o numero de habitantes da cidade: ");
		scanf(" %d", &populacao2);
		printf("Digite a area da cidade em quilometros quadrados: ");
		scanf(" %f", &area2);
		printf("Digite o PIB da cidade em milhoes de reais: ");
		scanf(" %f", &pib2);
		printf("Digite a quantidade de pontos turisticos: ");
		scanf(" %d", &pontosTuristicos2);

	// Cálculo de Densidade Populacional e PIB per capita
	// densidade populacional = populacao /  area
	// pib per capita = pib / populacao
		
		pibPerCapita1 = pib1 / (float)populacao1; // atribuindo o valor do pib per capita	
		densidadePopulacional1 = (float)populacao1 / area1; // atribuindo o valor da densidade populacional
		pibPerCapita2 = pib2 / (float)populacao2; // atribuindo o valor do pib per capita
		densidadePopulacional2 = (float)populacao2 / area2; // atribuindo o valor da densidade populacional
		
		
		
		

	printf("\n\n------------------------------\nCarta Vencedora:\n");
	
	// CASO 1 CARTA 1 VENCE
	
	if(densidadePopulacional1<densidadePopulacional2) {  
	
		printf("Comparacao de cartas (Atributo: densidade populacional):\n");
		printf("Carta 1: %f\n",densidadePopulacional1);
		printf("Carta 2: %f\n",densidadePopulacional2);
		printf("Resultado: Carta 1 (%s) foi a vencedora!\n\n\n",nomeCidade1);		
	} 
	else {
		printf("Compara��o de cartas (Atributo: densidade populacional):\n");
		printf("Carta 1: %f\n",densidadePopulacional1);
		printf("Carta 2: %f\n",densidadePopulacional2);
		printf("Resultado: Carta 2 (%s) foi a vencedora!\n\n\n",nomeCidade2);		
		}
	return 0;
}