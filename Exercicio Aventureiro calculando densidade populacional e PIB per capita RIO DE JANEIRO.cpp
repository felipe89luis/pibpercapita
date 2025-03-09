#include <stdio.h>

int main (){
	char codigo = 'r';
	char cidade = 'rj';
	char estado = 'rio de janeiro';
	int populacao = 6748000;
	float area = 1200.25;
	float pib = 300.50;
	int pontos = 30;
	float densidade = 5622.24;
	float percapita = 44532.91;
	float media;
	
	printf("Digite o codigo: \n", codigo);
	scanf("%s", &codigo);
	
	printf("Digite a cidade: \n", cidade);
	scanf("%s", &cidade);
	
	printf("Digite o estado: \n", estado);
	scanf("%s", &estado);
	
	printf("Digite a populacao: \n", populacao);
	scanf("%d", &populacao);
	
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
	printf("A média é %.2f", media);
	
	media = (pib / populacao) /2;
	printf("A média é %.8f", media);
	
	return 0;
}
