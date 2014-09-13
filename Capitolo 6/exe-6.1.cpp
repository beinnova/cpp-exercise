//---------> Esercizio 6.1 - Accettato un voto numerico visualizzare i voto corrispndente in lettere <-----------//

/*******************************
*	 * Valore Voti *       *
*                              * 
*	0 - 60		F      *
*	61 - 70		D      *
*	71 - 80		C      *
*	81 - 90		B      *
*	91 - 100	A      *
********************************/


#include <iostream>

int voto;	//Voto numerico
char voto_lettere [] = {'A', 'B', 'C', 'D', 'F'};
char voto_finale;	//Voto convertito da numero a letter


int main(){

	std::cout << "Inserisci un voto numerico:";
	std::cin >> voto;
	
	if(voto <= 60){
		voto_finale = voto_lettere[4];	
	}

	if(voto >= 61 && voto <= 70){
		voto_finale = voto_lettere[3];
	}
	
	if(voto >= 71 && voto <= 80){
		voto_finale = voto_lettere[2];
	}
	
	if(voto >= 81 && voto <= 90){
		voto_finale = voto_lettere[1];
	}

	if(voto >= 91){
	   voto_finale = voto_lettere[0];
	}

	std::cout << "Il voto corrispondente è: " << voto_finale << '\n';
	return (0);
}
