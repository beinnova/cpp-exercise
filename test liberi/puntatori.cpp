#include <iostream>

const int ARRAY_SIZE = 100;

int array[ARRAY_SIZE];
int *index;

int main(){

	for(index = array; index <= &array[ARRAY_SIZE -1]; ++index){
			*index = 0;
			
			std::cout << "Index " << index << " vale : " << *index << "\n";
	}
		
}
