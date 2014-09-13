#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	
	string line="";
	ifstream infile;
	unsigned int lineCount = 0;
	
	infile.open("test.dat");
	
	while(!infile.eof()){
		getline(infile, line);
		if(line != " ")			
			++lineCount;
		cout << line << endl;
	}
	
	infile.close();
	cout << "Total readed lines:" << lineCount << endl;
	cout << "Read compleat!" << endl;
	
	return (0);
	
}
