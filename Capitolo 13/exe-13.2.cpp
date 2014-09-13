// Esercizio 13-2 : Scrivere una classe libretto con 2 func membro. 1 Inserisce un elenco di numeri e l'altra restituisce il totale <------------//



#include <iostream>
#include <assert.h>

/**
*	Check:
		classe per inserire dellecifre e ricvere un totale
**/

class check{

	private:
		int amount_item;	//Cifra inserita dall'utente
		int total_amount;	//Totale delle cifre
	public:
		//Constructor
		check();

		//Aggiunge una cifra
		void add_item(const int amount);

		//Restituisce il totale
		int total();

		//Destuctor
		~check();
		

};


/*
	Costructor

*/
inline check::check(){

	amount_item = 0;
	total_amount = 0;
}
/*
	add_item:
		Prende un intero da sommare ad un totale
	parmatri:
		amount - numero intero
*/
inline void check::add_item(const int amount){


	amount_item = amount;
	total_amount += amount;

}

/*
	total:
		Restituisce la somma di tutti gli interi inseriti
	return:
		int - Sommatotale interi
*/

inline int check::total(){

	return(total_amount);
}

/*
	Destructor
*/
inline check::~check(){
	std::cout << "Distruttore avviato!";
	total_amount = 0;
	amount_item = 0;
}



//MAIN
int main(){

	int value;
	check _check;

	do{

		std::cout << "Inserisci una cifra :";
		std::cin >> value;
		_check.add_item(value);
		std::cout << "Il totale adesso è:" << _check.total() << '\n';

		if(value != 'q'){
			
		}

	}while(true);

}
