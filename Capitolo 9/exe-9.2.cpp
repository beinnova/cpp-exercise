//------------> Esercizio 9.2 - Procedura per contare numero di parole in una frase <------------//


#include <iostream>
#include <string>

using namespace std;


int count(string frase){
	int _size = (frase.length());		//Parole nella stringa
	int _count = 0, 					//Counter per iterazione
	    count_parole = 0;					//Numero di parole


	while(true){
		
		if(frase[_count] == '\0' || _count >= _size){
			count_parole++;
			break;
		}else if(frase[_count] == ' '){
			if(frase[_count -1] != ' ') //Controllo se sono stati inseriti 2 spazi uno dietro l'altro
				count_parole++;
		} 
		_count++;
		
	}
	return count_parole;
}

int main(){

	string frase_inserita;
	
	cout << "Inserisci una frase:";
	getline(std::cin, frase_inserita);
	cout << "Il numero di parole nella frase è:";
	cout << count(frase_inserita) << '\n';
	return(0);
}




