#include <iostream>
#include "ese-18.1.h"


inline frazione operator+(const frazione& fraz_1, const frazione& fraz_2) {

    int som_nom, som_denom;

    //Se i denom. sono uguali
    if(fraz_1.denominatore == fraz_2.denominatore){
        som_nom = fraz_1.nominatore + fraz_2.nominatore;
        som_denom = fraz_1.denominatore;
    }
        //Se diversi
    else{

        som_denom = fraz_1.mcm(fraz_2.denominatore); //Trovo mcm

        som_nom = (((som_denom/fraz_1.denominatore) * fraz_1.nominatore) + ((som_denom/fraz_2.denominatore) * fraz_2.nominatore));
    }

    return frazione(som_nom, som_denom);
}

std::ostream& operator << (std::ostream& out_file, const frazione& fraz){

     char nomin,
          denom,
          frazi = '/';


    nomin << fraz.nominatore;
    denom << fraz.denominatore;

    out_file << fraz.nominatore << frazi << fraz.denominatore;
    //std::cout << " Nominatre: " << fraz.nominatore << '\n';
    return (out_file);
}
