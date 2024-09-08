//questão 30
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int sexo, cont, mc = 0, h100 = 0;
	float peso = 0, mp = 0, s = 0, maior = 0;
	for (cont=1; cont<=8; cont++){
		printf("Digite o sexo (1H/2M) ");
		scanf("%d", &sexo);
		printf("Digite o peso: ");
		scanf("%f", &peso);
		printf("--------------------------------\n");
		
		if (sexo==2){
			mc++;
			s = s + peso;
			mp = s/mc;
		}
		else if (sexo==1){
			if (peso>100){
			h100++;	
		}
			if(peso>maior){
				maior = peso;
			}	
		}
	}
	printf("%d mulheres cadastradas\n", mc);
	printf("%d homens pesam mais de 100kg\n", h100);
	printf("Média de peso entre mulheres = %.2f\n", mp);
	printf("Maior peso entre os homens = %.2f", maior);
return(0);
}