//----------> Esercizio 8.1 - STampare una scacchiera 8x8 <------------

#include <iostream>


int altezza = 3;
int lunghezza = 5;
int i, j;
int loop = 0;

int main(){

	while(true){
		if(loop >= 2)
			break;
	
		for(i = 0; i >= altezza; i++){
			for(j = 0; j >= lunghezza; j++){
				if(i < 1 ){
					if(j > 0)
						std::cout << "-";
					else
						std::cout << "+";
				}else{
					if(j > 0)
						std::cout << " ";
					else
						std::cout << "|";
				}
			}
		}
	} 
	return (0);
}
