//-------> Esercizio 5.2 : Scrivere il programma per calcolare il voulme di una sfera <----------//

#include <iostream>
#include <math.h>

const float PI = 3.1415926;	//pgreco
float volume;			//Volume della sfera
int raggio;			//Raggio della sfera

int main(){
	
	std::cout << "Inserisci il raggio della sfera:";
	std::cin >> raggio;
	volume = ((pow(raggio, 3.0))*(4/3))*PI;
	std::cout << "Il volume della sfera con raggio " << raggio << " è: " << volume << "\n";
	return (0);


}

