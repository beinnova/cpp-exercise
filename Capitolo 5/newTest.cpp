/* Domanda 5.3 - Perchè il programachesegue non stampa correttamente lo zipcode*/

#include <iostream>

long int zip;

int main(){
	zip = 123456L;
	std::cout << "ZipCode:" << zip << "\n";
	return (0);
}
