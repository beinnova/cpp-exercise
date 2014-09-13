
#include <iostream>

const int ERROR = (1 << 0);
const int FRAMING_ERROR = (1 << 1);
const int PARITY_ERROR = (1 << 2);
const int CARIER_LOST = (1 << 3);
const int CHANNEL_DOWN = (1 << 4);



int main(){
	

	char _error_code;
	
	std::cout << "Inserisci un codice di errore (0 - 4):";
	std::cin >> _error_code;

	if((_error_code & ERROR) != 0){
		std::cout << "Error!\n";
		std::cout<< "Error vale: n "<< bin << ERROR <<"\n";
		_error_code &= ~ERROR;
		std::cout << "Error code dessovale: " <<_error_code << "\n";
	}else
	 std::cout << _error_code;
		
	
	return (0);
	
}

