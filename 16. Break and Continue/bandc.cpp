#include <iostream>
using namespace std;

int main(){

	cout << "Menggunakan Lib_For" << endl;
	cout << "Dengan Break :" << endl;

	for (int i = 0; i <= 10; i++ ){
			// Kalau break... Jika if = 5, Maka angka-angka setelah angka lima tidak akan dilanjutkan
		if (i == 5){
		//continue;
		break;
		}
		cout << i << endl;
	}
		cout << "Akhirnya" << endl << endl << endl;


	cout << "Dengan Continue : Lihat pada angka 5" << endl;
			// Kalau Continue... Jika if = 5, Maka angka lima akan dilewat dan dilanjutkan angka berikutnya
	for (int i = 0; i <= 10; i++ ){
		
		if (i == 5){
		continue;
		//break;
		}
		cout << i << endl;
	}
		cout << "Akhirnya" << endl << endl << endl;


	cout << "Dengan menggunakan Lib_While" << endl << endl;
	cout << "Dengan Break: " << endl;

	int a = 0;
	while(a <= 10){

		if (a == 5){
			break;
		}
		cout << a << endl;
		a++;
	}

	cout << "Akhirnya" << endl << endl;

	cout << "Kalau pake continue, akan timbul masalah infinity looping.. Atau Si a++ nya harus ditaruh sesudah while dan sebelum if" << endl;
	cout << "Dengan Continue: Lihat pada angka 5 " << endl;

	int b = 0;
	while(b <= 10){
		b++;
		if (b == 5){
			continue;
		}
		cout << b << endl;
	}

	cout << "Akhirnya" << endl;

	cin.get();
	return 0;
}