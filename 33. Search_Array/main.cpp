#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

const size_t arraySize = 10;

void printArray(std::array <int, arraySize> &angka){
	std::cout << "Array: ";
	for(int &a : angka){
		std::cout << a << " ";
	}
	std::cout << std::endl;
}

int main(){
	
	array <int, arraySize> angka = {9,4,6,7,8,1,3,2,5,0};

	printArray(angka);

	// deklarasikan dulu nilai yang akan dicari
	int angkaCari;
	bool ketemu;

	cout << "Cari angka array diatas: ";
	cin >> angkaCari;

	// sort dulu
	sort(angka.begin(), angka.end());
	
	// search -> binary_search -> nilainya harus tangkap dulu
	ketemu = binary_search(angka.begin(), angka.end(), angkaCari);

	// logika angkaCari
	if(ketemu){
		cout << "Ketemu" << endl;
	} else {
		cout << "Tidak ketemu" << endl;
	}

	// print nilainya
	// cout << ketemu << endl;

	cin.get();
	return 0;
}