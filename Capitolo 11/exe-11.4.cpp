// Esercizio 11.4 - Calcolare il nuero di bit impostati in un intero



#include <iostream>
#include <assert.h>


int user_number;		//Numero inserito dall'utente

int bit_calculator(unsigned int number);

int main(){

	std::cout << "Inserisci un nemero:";
	std::cin >> user_number;

	std::cout << "I bit impostati per il numero " << user_number << " sono : " << bit_calculator(user_number) << '\n';
}

int bit_calculator(unsigned int number){

	assert(number > 0);
	unsigned int total_bit;		//Variabile per contare i bit impostati

	//Loop fino a quando number non è 0
	while(number){

		total_bit += number&1;	//& su ultimo bit e sommo il risultato se 1 allora +1 altrimenti +0
		number >>= 1;		//Shifto number vesro SX di 1 e assegno il nuovo valore a number
					//così facendo elimino vesro SX l'ultimo bit portando tutto a 0
	}

	return total_bit;
	
}
