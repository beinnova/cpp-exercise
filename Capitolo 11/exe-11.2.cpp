//----------> Esercizio 11.2 - Disegnare un quadrato bitmap 10x10 <---------//


#include <iostream>
#include <assert.h>

const int X_SIZE = 16;	//Altezza
const int Y_SIZE = 10;	//Lunghezza
char quadrato[(X_SIZE / 8)][Y_SIZE];

void draw();

void set_quadrato();


int main(){

	
	std::cout << ((sizeof(quadrato))/(sizeof(quadrato[0]))) << '\n';

		
	set_quadrato();


	draw();
	
	return (0);
}


void set_quadrato(){
	
	for (int y = 0; y < Y_SIZE; y++){
		for(int x = 0; x < X_SIZE/8; x++){
			//Loop per impostare i bit shiftando verso DX di 1
			for(int bit = 0x80; bit > 0 ; bit = (bit >> 1)){
				// Se il primo byte allora lo slzo tutto a 1		
				if((x%2) == 0)
					quadrato[x][y] |= static_cast<char>(bit);
				//Se èil secondo byte alzo solo i primi 2 bit
				else if(bit & 0xc0)
					quadrato[x][y] |= static_cast<char>(bit);

			}
		}
	}
}


void draw(){

	int x,
	    y,
	   bit;

	for (y =  0; y < Y_SIZE; y++){
		for (x = 0; x < (X_SIZE/8); x++){
			//Alzo il bit più a DX e shifto verso SX controllando quelli alzati 
			//nel byte
			for (bit = 0x80; bit > 0; bit = (bit >> 1)){
				#ifdef DEBUG
					std::cout << std::hex << static_cast<int>(quadrato[x][y]);
				#endif
				if((bit & quadrato[x][y]) != 0){
					std::cout << '*';
				}	
			}
		}
		std::cout << '\n';
	}
}

