//questão 29
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int n, cont;
	printf("Digite um número inteiro positivo: ");
	scanf("%d", &n);
	if (n>=0){
		for (cont=0; cont<=n; cont++){
			printf("%d, ", cont);
		}
		printf("FIM!");
	}
	else{
		printf("Valor inválido.\n");
	}
return(0);
}