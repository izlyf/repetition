//questão 26
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int cont;
	for (cont=0; cont<=40; cont = cont + 5){
		printf("%d ", cont);
	}
	printf("Acabou!");
return(0);
}