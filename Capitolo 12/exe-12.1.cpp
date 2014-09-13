//---------------> Esercizio 12.1 - Progettare uns truttura dati per gestire i dati di un elenco di indirizzi <----------------//


#include <iostream>
#include <string.h>


struct indirizzi {
	char name[20];
	char lname[20];
	char address[50];
	char email[30];
	char tel_number[10];

};


struct indirizzi agenda[50];


int main(){

	strcpy(agenda[0].name,"Giorgio");
	strcpy(agenda[0].lname , "Cerruti");
	strcpy(agenda[0].address , "C.soPotenza 141");
	strcpy(agenda[0].email , "giorgo.cerruti@beinnova.it");
	strcpy(agenda[0].tel_number ,"0117397738");

	for (int i = 0; i <= 0; i++){
		std::cout << "Name:" << agenda[i].name <<'\n';
		std::cout << "Surname:" << agenda[i].lname <<'\n';
		std::cout << "Address:" << agenda[i].address <<'\n';
		std::cout << "E-mail:" << agenda[i].email <<'\n';
		std::cout << "Tel:" << agenda[i].tel_number <<'\n';
	}
}
