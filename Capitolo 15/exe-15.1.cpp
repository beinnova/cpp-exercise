// Esecizio 15-1 : Utilizzare i puntatori per inizializzare tutti gli elementi di un array a 0. //




#include <iostream>


const int MAX_SIZE = 10;
int array[MAX_SIZE];

void init(int *to_inizialize){

	for(int i = 0; i <= MAX_SIZE; ++i){

		*(to_inizialize+i) = 0;
	}
	

}


int main(){


	init(array);
	
	for(int i = 0 ; i <= MAX_SIZE; ++i)
		std::cout << "Posizione " << i << " vale " << array[i] << '\n';

	return (0);	

}
