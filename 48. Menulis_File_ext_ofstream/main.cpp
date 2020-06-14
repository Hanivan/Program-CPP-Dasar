#include <iostream>
#include <fstream> //campuran dari auto-output file stream(ofstream), auto-input file stream(ifstream) 
using namespace std;

int main(){
	
	// ofstream
	ofstream myFile;

	// 3 mode penulisannya
	// ios::out = default, operasi output
	// ios::app = menuliskan pada akhir baris
	// ios::trunc = default, membuat file jika tidak ada, dan kalau ada akan dihapus dan dibuat baru

	myFile.open("data3.txt", ios::app); //append
	myFile << "\nmenuliskan baris baru pada data3";
	myFile.close();

	myFile.open("data1.txt", ios::out);
	myFile << "\nmenuliskan baris baru pada data1";
	myFile.close();

	myFile.open("data2.txt", ios::trunc);
	myFile << "\nmenuliskan baris baru pada data2";
	myFile.close();

	cin.get();
	return 0;
}