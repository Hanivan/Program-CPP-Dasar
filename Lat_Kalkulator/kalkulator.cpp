#include <iostream>
using namespace std;
int main(){
	float a,b,hasil;
	char aritmatika;

	cout << "Selamat Datang Di Kalkulator C++!!\n\n";

//Memasukkan Nilai Dari Pengguna
	cout << "Masukkan Nilai Pertama: ";
		cin >> a;
	cout << "Masukkan Operator +,-,/,*: ";
		cin >> aritmatika;
	cout << "Masukkan Nilai Kedua: ";
		cin >> b;

	cout << "\nHasil Perhitungan: ";
	cout << a << aritmatika << b;

//program kalkulatornya
if(aritmatika == '+'){
	hasil = a + b;
}else if(aritmatika == '-'){
	hasil = a - b;
}else if(aritmatika == '*'){
	hasil = a * b;
}else if(aritmatika == '/'){
	hasil = a / b;
} else{
	cout << "Operator Anda Salah x_X" << endl;
}

	cout << " = " << hasil << endl;

	cin.get();
	return 0;
}