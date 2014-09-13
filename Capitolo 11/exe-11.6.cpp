// Esercizio 11.6 : Prendere tutti i bit di un numero e spostarli all'estrema SX. es. 01010110 = 11110000


#include <iostream>
#include <assert.h>


int number; //Numero utente

int shift_left(int number);
void draw_binary(int number);

int main(){

	std::cout << "Inserisci un numero:";
	std::cin >> number;
	std::cout << "Numero base 2 :";  draw_binary(number);
	std::cout << "Dopo lo shift il numero è: " <<  shift_left(number) << '\n';
	return (0);
	
}

int shift_left(int number){


	char new_number = 0xf;
	

	while(number){
		
		if(number&1){
	    		new_number += 1;			
			new_number <<= 1;
		}
	
		number >>= 1;
		
	}
		
	draw_binary(new_number);
			
		/*for(int bit = 0xf; bit > 0; bit=(bit>>1)){
			if((new_number&bit) != 1){
				new_number = (new_number <<  1);		
			}
		}	*/

		
	
	draw_binary(new_number);
	return(new_number);
}

void draw_binary(int number){

	while(number){
		if(number&1)
			std::cout << '1';
		else
			std::cout << '0';

		number >>= 1 ;
	}

	std::cout << '\n';	
}
