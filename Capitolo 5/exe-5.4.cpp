//-----------> Esercizio 5.4  - Coversione Km/h in mph <----------

#include <iostream>

const double CONV_NUMBER = 0.6213712;		//Coefficente per la conversine inmiglia
float kilometri;				//Kilometri da convertire
float miglia;					//Kilometri convertiti in miglia

int main(){

	std::cout << "Inserire i Km:";
	std::cin >> kilometri;
	miglia = kilometri*CONV_NUMBER;
	std::cout << kilometri << " Km in Miglia :" << miglia << "\n";
	return (0);
}

