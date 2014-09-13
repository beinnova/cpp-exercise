#include <iostream>


int main(){
	int val = 10;
	char letter[12] = "Hello World";

	char *letter_ptr = &letter[5];	
	int *val_ptr = &val;

	std::cout << "Integer pinter: " << val_ptr << '\n';
	std::cout << "Pointer of letter: " << letter_ptr << '\n';

	

	
}
