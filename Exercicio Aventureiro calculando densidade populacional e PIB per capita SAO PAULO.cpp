#include <stdio.h>

int main (){
	char estado = 'sao paulo';
	char codigo = 'sp';
	char cidade = 'sao paulo';
	int populacao = 12325000;
	float area = 1521.11;
	float pib = 699.28;
	int pontos = 50;
	float densidade = 8102.47;
	float percapita = 56724.32;
	float media;
	
	printf("Digite o estado: \n", estado);
	scanf("%s", &estado);
	
	printf("Digite o codigo: \n", codigo);
	scanf("%s", &codigo);
	
	printf("Digite a cidade: \n", cidade);
	scanf("%s", &cidade);
	
	printf("Digite a area: \n", area);
	scanf("%f", &area);
	
	printf("Digite o pib: \n", pib);
	scanf("%f", &pib);
	
	printf("Digite os pontos: \n", pontos);
	scanf("%d", &pontos);
	
	printf("Digite a densidade: \n", densidade);
	scanf("%f", &densidade);
	
	printf("Digite a percapita: \n", percapita);
	scanf("%f", &percapita);
	
	media = (populacao / densidade) /2;
	printf("A média é: %.2f", media);
	
	media = (pib / populacao) /2;
	printf("A média é: %.6f", media);
	
	
}
