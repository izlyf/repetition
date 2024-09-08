//questão 23
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int cont = 0;
	do{
		printf("%d ", cont);
		cont = cont + 3;
	}while(cont<30);
	printf("Acabou!");
return(0);
}