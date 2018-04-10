#include <stdio.h>

int main (){
  int intero;
  
  puts("Inserisci un numero intero");
  scanf("%d", &intero);
  
  if (intero < 2){
    puts("Numero non valido");
    return -1;
  }
  
  int i=2; //contatore
  int primo=1; 
  
  while (i<primo){
    if (primo%i == 0){
      puts("Il numero non è primo");
      break;
    } else
      i++;
    } //fine ciclo
  if (primo == 1){
    puts("Il numero è primo");
  }else{
    puts("Il numero non è primo");
  }
}

/*main:
  
  primo = vero
  finche condizione
    se numero%i == 0
      primo = falso
      esci
    altrimenti
      i = i+1
*/
