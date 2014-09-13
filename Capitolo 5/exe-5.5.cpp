//--------------> Esercizio 5.5 - Presi ore e minuti restituisce i minuti totali <----------//


#include <iostream>

int ore; 		//Ore da convertire inminuti
int minuti;
int tot_minuti;		//Minuti totali

int main(){
	
	std::cout << "Inserisci le ore:";
	std::cin >> ore;
	std::cout << "Inserisci i minuti:";
	std::cin >> minuti;

	tot_minuti = (ore*60)+minuti;
	std::cout << "I minuti totali sono:" << tot_minuti << "\n";
	
}
