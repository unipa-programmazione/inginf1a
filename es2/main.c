#include <stdio.h>

int main() {
    int intero;
    int i=2; //contatore
    int primo=1; 
  
    puts("Inserisci un numero intero");
    scanf("%d", &intero);
  
    if (intero < 2){
        puts("Numero non valido");
        primo = 0;
        return -1;
    }
  
    while (i < intero){
        if (intero%i == 0){
            primo = 0;
            break;
        }
        else {
            i++;
        } //fine ciclo
    }

    if (primo == 1){
        puts("Il numero è primo");
    }

    else {
        puts("Il numero non è primo");
    }
//non ci dovrebbe essere il return 0? vabbe sticazzi io ce lo metto 
 return 0;
}
