#include <fmt/format.h>

/**
 * int è il risultato della funzione che è chiamata main
 * un intero è un numero senza virgola
 * 
 * una funzione è un poco come una ricetta di cucina 
 * ci sono alcuni ingredienti ( variabili, constanti e parametri)
 * ed alcune operazioni da fare nel corretto ordine 
 */
int main() {
	//Definisco una costante, chiamata inizio, di tipo numero con la virgola e di valore -100..
	const float inizio = -100;
	const float fine   = 100;
	//intervallo di simulazione
	const float passo = 33.3;

	//stampa le 2 lettere 'c' ed 'f' al centro di un blocco di 7 carateri
	fmt::print("{:^7} {:^7} \n", "°C", "°F");

	//fare che la variabile celsius parta dal valore di inizio, arrivi al valore di fine, incrementandosi ad ogni iterazione del valore passo
	for (float celsius = inizio; celsius < fine; celsius += passo) {
		//L'equazione di conversione, la copia incolliamo da wikipedia, poteva esser anche la conversione da florz a bnoff
		const float fahrenheit = celsius * (9.0 / 5.0) + 32;
		//Della libreria usa la funzione print
		//La sintassi {} definisce dove mettere un valore (che verrà indicato in seguito) e si chiama segnaposto
		fmt::print("{:7.1f} {:7.1f} \n", celsius, fahrenheit);
	}
}
