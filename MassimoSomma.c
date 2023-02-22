#include <stdio.h>

/* Programma che ripetutamente chiede all'utente 
 * di scrivere numeri interi positivi. Quando l'utente 
 * inserisce un numero negativo o nullo, l'applicazione 
 * termina indicando all'utente qual è il massimo
 * fra i numeri inseriti e qual è la loro somma. */
 
int main() {
	    int massimo, somma;             // i valori da calcolare
		int numero;                          // un numero da leggere
		
		/* INIZIALIZZAZIONI */
		massimo = 0;                    // valore che non può corrispondere
		
		somma = 0;                               // la somma iniziale è 0
		
		/* Con istruzione DO-WHILE */
		do {
			
			   /* INPUT */
			   printf("Inserisci un intero positivo, oppure un intero negativo o nullo per terminare.\n");
			   scanf("%d", &numero);
			   
			   /* VERIFICA SE è UN NUMERO DA CONSIDERARE */
			   if(numero>=1) {
				   somma += numero;
				   /* VERIFICA SE è IL NUOVO MASSIMO*/
				   if(numero>massimo)
					       massimo = numero;
			   }
		}
		while(numero>=1);
		
		if(massimo>0) {
			    printf("\nLa somma dei numeri da te introdotti %c %d.\n", 138, somma);
				printf("Il massimo %c %d.\n", 138, massimo);
		}
		else
			    printf("\nNon hai introdotto numeri positivi!\n");
}
