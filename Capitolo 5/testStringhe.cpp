//Tes sulle stringhe ed array

#include<cstring>
#include <iostream>

char first_name[] = "Giorgio";
char last_name[] = "Cerruti";
//char cf[] = "CRRGRG82T16L219J";
std::string cf;
char full_name[100];


int main(){
	
        std::cout << "First Name vale:" << sizeof(first_name) << "\n";
	std::cout << "Inserisci il codice fiscale:";
	std::getline(std::cin, cf);
	std::strcpy(full_name, first_name);
	std::strcpy(full_name, " ");
	std::strcpy(full_name, last_name);
	std::cout << "Full Name vale:" << strlen(full_name) <<"\n";
	std::cout << "Nome Completo:" << full_name;
	return (0);
}

