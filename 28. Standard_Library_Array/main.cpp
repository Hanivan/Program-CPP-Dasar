#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main(){
	
	// membuat array dengan menggunakan standard library
	// array<int, jumlah array> nama array
	// array berteman dengan looping for()

	array< int, 5 > nilai;

	for(int i = 0; i <= 4; i++){
		nilai[i] = i;
		cout << "Nilai [" << i << "]= " << nilai[i] << " Address: " << &nilai[i] << endl;
	}

	cout << endl;
	// ukuran array
	cout << "Ukuran: " << nilai.size() << endl;
	// address awal dari array
	cout << "Address Awal: " << nilai.begin() << endl;
	// address akhir dari array
	cout << "Address Akhir: " << nilai.end() << endl;
	// nilai dengan index
	cout << "Nilai Ke 2: " << nilai.at(2) << endl;

	cin.get();
	return 0;
}