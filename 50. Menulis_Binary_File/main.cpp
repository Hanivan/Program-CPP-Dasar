#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	
	fstream myFile;
	int number = 12354;
	myFile.open("data.bin", ios::out | ios::binary);

	// ubah character pointer,     ambil address, ukuran variabel
	// write(reinterpret_cast<char*>(&number),sizeof(number))
	myFile.write(reinterpret_cast<char*>(&number),sizeof(number));

	myFile.close();

	cin.get();
	return 0;
}