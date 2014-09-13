/*
* Esercizio 18.1 - gestire operazioni tra frazioni
*/
#include <iostream>
#include "ese-18.1.cpp"
using namespace std;


int main() {


    frazione fraz_1("1/2");
    frazione fraz_2("2/2");

    frazione fraz_tot = fraz_1 + fraz_2;

    std::cout << "La somma tra " << fraz_1 << " e " << fraz_2 << " è " << fraz_tot << std::endl;

    fraz_1.set("2/3");
    fraz_2.set("1/2");

    std::cout << "La somma tra " << fraz_1 << " e " << fraz_2 << " é " << (fraz_1 + fraz_2) << std::endl;



}