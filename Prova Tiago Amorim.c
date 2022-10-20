#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	printf("\n Algoritmo e programacao \n Joyce Siqueira \n Tiago Amorim Esteves");
	printf("\n Analise e desenvolvimento de Sistemas \n https://github.com/Tiago-Esteves/Prova-1 \n DevC++ \n");

	int m;
	float prev,a,b,s,h;
	int ano, d;
	char nome[30];
	printf("\nA (1) \nB (2) \n");
	scanf("%d", &m);
	
			
	switch(m){
		case 1:
		
		printf("Digite o valor do cateto 1: ");
		scanf("%f",&a);
		printf("Digite o valor do cateto 2: ");
		scanf("%f",&b);
		prev=(a*a)+(b*b);
		h = sqrt(prev);
		s = a/h;
		printf("Hipotenusa: %.3f",sqrt(prev));
		printf("\nSeno: %.3f", s);
		
	
			
			
		
		}
	
}
