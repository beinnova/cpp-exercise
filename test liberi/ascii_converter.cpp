#include <iostream>

char number;
unsigned char finish = 0x1;

int main(){


	std::cout << "Inserisci un numero compreso tra 0 - 9" << std::endl;
	std::cout << (finish & 0x0);

	while(finish) {
	    std::cout << "Inserisci il numero:";
	    std::cin >> number;

	    if(number == 'q')
	    	finish = finish >> 1;
	    else
	    	std::cout << "Hai inserito :" << (number - '0') << std::endl;

	}
	std::cout << "Alla prossima!!" << std::endl;
}