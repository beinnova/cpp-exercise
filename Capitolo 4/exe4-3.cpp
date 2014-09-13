//Esercizio 4.3 : Calcolo area rettangolo

#include <iostream>

int base; 	//Base rettangolo
int heigth;	//Altezza rettangolo
int ara; 	//Area del rettangolo

int main(){
	
	base = 7;
	heigth = 12;

	std::cout << "Area del rettangolo con B: " << base << " e H:" << heigth << "\n";
	std::cout << "A:" << (base * heigth) << "\n";
	return (0);

	
}
