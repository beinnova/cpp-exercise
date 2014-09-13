#include <iostream>
#include <assert.h>


const int X_SIZE = 24;	//Dimensione array nella dirzione x >
const int Y_SIZE = 40;	//Dimensione array nella direzione Y ^

/*
* Si utilizza X_SIZE/8 per simulare gli 8 bit per Byte
*/

char graphics[X_SIZE/8][Y_SIZE];	//Dati grafica Bitmap

/*
*set_bit -- impostazione di un bit nell'array di grafica bitmap
*Parametri
*	x, y -- posizione del bit	
*/

inline void set_bit(const int x, const int y){

//	assert((x >= 0) && (x < X_SIZE);
//	assert((y >= 0) && (y < Y_SIZE));
	std::cout << "X: " << x <<" Modulo 8: " << ((x)%8) << '\n';
	graphics[(x)/8][y] |= static_cast<char>(0x80 >> ((x)%8));
	
//	#ifdef DEBUG
//		std::cout << "Graph posizione "<< ((x)/8) << " Vale : " << std::hex << static_cast<int>(graphics[(x)/8][y]) << "\n";
//	#endif
}

void print_graphics();

int main(){

	int loc;

	for (loc = 0; loc < X_SIZE; loc++){
		set_bit(loc, loc);
	}

	print_graphics();
	return (0);
}


/*
* print_graphics -- stampa array di bit di grafica bitmap
*			comeuna serie di X e .
*/

void print_graphics(){

	int x;
	int y;
	int bit;

	for (y = 0; y < Y_SIZE; y++){
		//Loop per ogni byte nell'array
		for (x = 0; x < (X_SIZE / 8); x++){
			
			//Tratta ogni Bit
			for (bit = 0x80; bit > 0; bit = (bit >>  1)){
				assert((x >= 0) && (x < (X_SIZE/8)));
				assert((y >= 0)&&(y < Y_SIZE));
				

			if((graphics[x][y] & bit) != 0){
			std::cout << "Bit: " << std::hex << static_cast<int>(bit) << " &: " << (graphics[x][y] & bit) << "\n";				
					std::cout << 'X';
				}else
					std::cout << '.';
			}
		}
		std::cout << '\n';
	}
}
