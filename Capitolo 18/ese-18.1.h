#include <iostream>
#include <sstream>
#include <iosfwd>

class frazione{


private:
    int nominatore
    , denominatore;
    char dash;

    void char_to_int (const char* fraz){

        std::stringstream ss(fraz);
        ss >> nominatore >> dash >> denominatore;


    }

    /**
    * Massimo comun divisore
    */
    int mcd (int other_denom) const {

        int denom = denominatore;


        do{
            if(denom > other_denom){
                denom = (denom - other_denom);

            }else if( denom < other_denom){

                other_denom = (other_denom - denom);
            }
        }while (denom != other_denom);

        return denom;
    }

    /**
    * Minimo comune multiplo
    */
    int mcm(int other_denom) const {

        return ((denominatore * other_denom) / mcd(other_denom));
    }
public:
    frazione(): nominatore(0), denominatore(0){}

    frazione(const frazione& other_fraz): nominatore(other_fraz.nominatore), denominatore(other_fraz.denominatore){}

    frazione(const char *fraz){
        char_to_int(fraz);
    }

    frazione(const int nominatore, const int denominatore){
        this->nominatore = nominatore;
        this->denominatore = denominatore;

    }

    void set(const char* value){
        char_to_int(value);
    }

    char* get() const {
        char *value;

        *value = (char) nominatore;
        *value += '/';
        *value += (char) denominatore;

        return (value);
    }

private:
    friend frazione operator + (const frazione& fraz_1, const frazione& fraz_2);
    friend frazione operator - (const frazione& fraz_1, const frazione& fraz_2);
    friend frazione operator * (const frazione& fraz_1, const frazione& fraz_2);
    friend frazione operator / (const frazione& fraz_1, const frazione& fraz_2);

    friend std::ostream& operator << (std::ostream& file, const frazione& fraz);
    friend std::istream& operator >> (std::istream& out_file, const frazione& fraz);
};