#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

int main() {

    const char *inputFile = "file.txt";
    const char *forThre = "divisibilePer3.txt";
    const char *otherNumbers = "altriNumeri.txt";

    std::string line;


    std::ifstream data_file(inputFile);
    std::ofstream threFile(forThre,std::ios::out|std::ios::app|std::ios::ate);
    std::ofstream noThre(otherNumbers,std::ios::out|std::ios::app|std::ios::ate);

    if(data_file.bad() || threFile.bad() || noThre.bad()){

        std::cerr << "Errore nell'apertura del file" << inputFile << '\n';
        return (8);

    }



    while(data_file.good()){

        std::getline(data_file, line);

        int readNumber = std::atoi(line.c_str());

        if((readNumber%3) == 0){
            std::cout << readNumber << " divisibile per 3" << std::endl;
            threFile << line << std::endl;

        }else{
            std::cout <<  readNumber << " Non è divisibile per 3" << std::endl;
            noThre << line << std::endl;
        }




    }

    threFile.close();
    noThre.close();
    data_file.close();
}