#include <stdio.h>

int main(){
	int intero;

	puts("Inserisci un numero intero");
	scanf("%d", &intero);

	if(intero<2){
	puts("Numero non valido");
	return -1;
	}

	int i=2;
	int primo=1;

	while(i<intero){
	if(intero%i==0){
	puts("Il numero non è primo");
	primo=0;
	break;
	} else
	i++;
	}
	if(primo==1){
	puts("Il numero è primo");
	}
	}