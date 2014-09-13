//Leggo un file dat di numeri e li sommo


#include <iostream>
#include <fstream>
#include <cstdlib>



int main(){
	
	const int DATA_SIZE = 15;
	const char *file = "test.dat";
	const char *out_f = "total.txt";
	
	int data_array[DATA_SIZE];
	std::ifstream data_file(file);

	


	if(data_file.bad()){

		std::cerr << "Errore nella lettura del file "<<file<<'\n';
		return(8);
	}

	for(int i = 0; i < DATA_SIZE; ++i){

		data_file >> data_array[i];
	}


	int total = 0;

	for(unsigned int i = 0; i <= (sizeof(data_array)/sizeof(data_array[0]));++i){
		std::cout << "Riga:" << i << " vale " << data_array[i] << '\n';
				
		total += data_array[i];
	}
	
	std::ofstream out_file(out_f, std::ios::out|std::ios::app|std::ios::ate);
	if(out_file.bad()){
		std::cerr << "Impossibile scrivere sul file " << out_file << '\n';
		return (8);
	}
	
	out_file << "Il totale è " << total << '\n';

	std::cout << "Totale:" << total << '\n';
	return (0);

}

