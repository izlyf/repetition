//questão 3
#include<stdio.h>

int main(){
	int cont;
	for (cont = 0; cont<=18; cont = cont + 3){
		printf("%d ", cont);
	}
	printf("Acabou!");
return(0);
}

ou

//questão 3
#include<stdio.h>

int main(){
	int cont = 0;
	while (cont<=18){
		printf("%d ", cont);
		cont = cont + 3;
	}
	printf("Acabou!");
return(0);
}