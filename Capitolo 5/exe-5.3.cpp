//---------> Esercizio 5-3 : Calcolo del perimetro di un rettangolo data la sua altezza e la larghezze <---------//

#include <iostream>

int altezza;		//Altezza del rettangolo
int larghezza;		//Larghezza del rettangolo
int perimetro;		//Perimetro del rettangolo


int main(){
	
	std::cout << "Inserisci l'altezza del rettangolo:";
	std::cin >> altezza;
	std::cout << "Inserisci la larghezzadel rettangolo:";
	std::cin >> larghezza;
	
	perimetro = 2*(larghezza+altezza);		//Calcoloil perimetro (L+H)*2
	std::cout << "Il perimetro del rettangolo è:" << perimetro << "\n";
	return (0);
}
