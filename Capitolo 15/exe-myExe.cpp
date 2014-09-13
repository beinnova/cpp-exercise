//Esercizio personale : Fornire come input ergv la grandezza di un array, il suo contenuto//



#include <iostream>
#include <cstdlib>
#include <string.h>


int d_size = 12;
char *d_text;


int main(int argc,char *argv[]){
	char *text_ptr;
	int size;

	while((argc > 1) && (argv[1][0] == '-')){


		switch(argv[1][1]){

			case 's':
				 size = atoi(&argv[1][2]);
				 //d_text[size];				
				 break;
			case 't':
				d_text = &argv[1][2];
				//std::cout << text_ptr << '\n';
						
				
				break;
			default:
				std::cerr << "Lo switch inserito non è corretto";
				break;	
		}


		--argc;	//Decremento di 1 il totale dgli argomenti impostati
		++argv; //Sposto avanti di 1 l'indirizzo del puntatore
	}
	

	std::cout << d_text << '\n';
}
