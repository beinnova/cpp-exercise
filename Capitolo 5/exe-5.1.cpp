//------> Esercizio 5.1 - Conversione Celsius in Fahrenheit <--------//

#include <iostream>

float celsius_degrees; 	//Gradi Celsius
float fahrenheit_degrees;	//Gradi fahrenheit

int main(){
	
	std::cout << "Digita i gradi C° da convertire:";
	std::cin >> celsius_degrees;	//Leggo da Input
	fahrenheit_degrees = (celsius_degrees*9/5)+32;	//Algoritmo per la conversione
	std::cout << celsius_degrees << " C° equivalgono a " << fahrenheit_degrees << " F°\n";
	return (0);
	
	
}
