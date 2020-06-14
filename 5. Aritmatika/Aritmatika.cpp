#include <iostream>
using namespace std;

int main(){

	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	int e = 5;
	int f = 6;

	int hasil;
		/*operator di program c++ Adalah
		1. + 'Tambah'
		2. - 'Kurang'
		3. * 'Kali'
		4. / 'Bagi'
		5. % 'Modulus'
		*/

		//penjumlahan
	hasil = a + b;
	cout << a << "+" << b << "=" << hasil << endl;

		//Pengurangan
	hasil = b - c;
	cout << b << "-" << c << "=" << hasil << endl;
		
		//Perkalian
	hasil = c * d;
	cout << c << "*" << d << "=" << hasil << endl;

		// Pembagian
	hasil = d / b;
	cout << d << "/" << b << "=" << hasil << endl;

		//modulus
	hasil = f % b;
	cout << f << "%" << b << "=" << hasil << endl;

		//urutan eksekusi
	hasil = a + (b * c);
	cout << hasil << endl;

cin.get();
return 0;	
}