//-----------> Dato un importoo sotto l'euro calcolare il nuero di monete <------//


#include <iostream>

float money[] = {50.0,20.0,10.0,5.0,2.0,1.0};
int monete_usate [] = {0,0,0,0,0,0};

float importo;
int monete_usate_length;		//Numero di elementi nell'array
int counter = 0;

int main(){
	
	std::cout << "Inserisci importo:";
	std::cin >> importo;

	if(importo >= 100){
		std::cout << "L'importo deve essere minore di 1 euro!\n";
		return (0);
	}

	//Ciclo per ilcontrollo del valore
	//Ad ogni giri sottrago dalla cifra totale
	//Un valore se il tot è maggio re o uguale
       
	while(true){
		//std::cout << "Importo vale:" << importo << "\n";	
		//Se 0 esco dal loop
		if(importo == 0)
			break;
	
		if(importo >= money[0]){
			
			importo = importo - money[0];
			monete_usate[0]++;
			continue;
		}

		if(importo >= money[1] && importo <= money[0]){
			importo = importo - money[1];
			monete_usate[1]++;
			continue;
		}

		if(importo >= money[2] && importo <= money[1]){
			importo = importo - money[2];
			monete_usate[2]++;
			continue;
		}

		if(importo >= money[3] && importo <= money[2]){
			importo = importo - money[3];
			monete_usate[3]++;
			continue;
		}
		
		 if(importo >= money[4] && importo <= money[3]){
                        importo = importo - money[4];
                        monete_usate[4]++;
                        continue;
                }

		 if(importo >= money[5] && importo <= money[4]){
                        importo = importo - money[5];
                        monete_usate[5]++;
                        continue;
                }
	
	}  
        monete_usate_length = sizeof(monete_usate)/ sizeof(monete_usate[0]);
	//std::cout << "Lunghezza Monete:" << monete_usate_length << "\n";

		std::cout << "Sono state usate:\n";
		//Loop per stampare quantemonete sono state usate
		while(true){
		
			if(counter <=  monete_usate_length -1){
			
				if(monete_usate[counter] > 0){
				std::cout << monete_usate[counter] << " da " << money[counter] << "\n";
				
			}
			counter++;
		}else{
			break;
		}
	}
	
}

