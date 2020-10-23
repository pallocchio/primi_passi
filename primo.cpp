
#include <fmt/format.h>

/**
 * int è il risultato della funzione che è chiamata main
 * un intero è un numero senza virgola
 */
int main() {
	//Definisco una costante, chiamata inizio, di tipo numero con la virgola e di valore -100..
	const float inizio = -100;
	const float fine   = 100;
	//intervallo di simulazione
	const float passo = 33.3;

	//stampa le lettere 'c' ed 'f' al centro di un bloco di 7 carateri 
	fmt::print("{:^7} {:^7} \n","°C","°F");
	
	//Per un valore che parte da inizio, fino ad arrivare a fine... a passi di passo eseguire quello che è fra parentesi
	for (float celsius = inizio; celsius < fine; celsius += passo) {
		//L'equazione di conversione, la copia incolliamo da wikipedia, poteva esser anche la conversione da florz a bnoff
		float fahrenheit = celsius * (9.0 / 5.0) + 32;
		//Della libreria usa la funzione print
		//La sintassi {} definisce dove mettere un valore (che verrà indicato in seguito) e si chiama segnaposto 
		fmt::print("{:7.1f} {:7.1f} \n",celsius,fahrenheit);
	}
}
