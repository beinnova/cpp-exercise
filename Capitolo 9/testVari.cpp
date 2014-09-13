
#include <iostream>

inline int add(int& a, int b){
	a = a+b;
	return (a);
}

int main(){

	int a=2, b=4, c=0;
	  c = add(a, 2);
	std::cout << "C vale: " << c << "\n";

	 add(b, 3);
	std::cout << "A adesso vale: " << a << " e B vale: " << b << "\n";
	return (0);
}
