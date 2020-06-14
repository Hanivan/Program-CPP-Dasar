#include <iostream>
using namespace std;

// rekursif = recursion / pengulangan
// fungsi rekursif = fungsi yang mengulang dirinya sendiri / fungsi didalam fungsi
// harus ada finite recursion / rekursif terbatas

// fungsi rekursif terbatas
int pangkatLiterasi(int a, int b){
	int hasil = a;
	for(int i = 1; i < b; i++){
		hasil = hasil * a;
	}
	return hasil;
}

// fungsi pangkat rekursif
int pangkatRekursif(int a, int b){
	if(b <= 1){
		cout << "Akhir dari rekursif\n";
		return a;
	} else{
		cout << "Rekursif\n";
		return a * pangkatRekursif(a,(b - 1));
	}
}

int main(){
	
	int a, b;

	cout << "Masukkan angka: ";
	cin >> a;
	cout << "masukkan pangkat: ";
	cin >> b;
	cout << "Hasil literasi: " << pangkatLiterasi(a,b) << endl;
	cout << "Hasil Rekursif: " << pangkatRekursif(a,b) << endl;

	cin.get();
	return 0;
}