#include <iostream>
#include <array>
#include <exception>
using namespace std;

/*
1. Syntax Error: Error yang terjadi karena salah memasukkan syntax/typo
2. Linking error(kadang di notif, kadang tidak), contohnya dalam fungsi prototype
3. non-error
4. runtime error: Error yang terjadi saat programnya berjalan, bisa diambil dengan metode try and catch
*/

int kuadrat(int &value); // untuk syntax error
void print(char b); // untuk linking error
int luas (int &panjang, int &lebar); // untuk non-error
int pembagian(int &num, int &denum);

int main(){
	
	// error syntax
	int a = 10;
	cout << a << endl; // tidak ada titik koma

	// linking error
	int c = kuadrat(a);
	cout << c << endl;

	// print('b');

	// non-error
	// int b = -5; // ini contoh program non-error juga
	int b = 5;
	int d = luas(a,b);
	cout << d << endl;

	// runtime error
	int e;
	int f;
	int g;
	char isLanjut;

	while(true){
		cout << "num = ";
		cin >> e;
		cout << "denum = ";
		cin >> f;

		// memakai std_lib
	// 	try{
	// 		g = pembagian(e,f);
	// 		cout << e << " x " << f << " = " << g << endl;
	// 	}catch(exception &h){
	// 		cout << h.what() << endl;
	// 	}
	// }

		// manual
	try{
		g = pembagian(e,f);
		cout << e << " x " << f << " = " << g << endl;
	}catch(const &h){
		cout << h << endl;
	}
}



	// int i;

	// array<int,5> h = {0,1,2,3,4};

	// try{
	// 	cout << h.at(5) << endl; // melebihi kapasitas dari array/out of frame
	// }catch(exception &i){ // memakai std_lib exception
	// 	cout << i.what() << endl;
	// }

	// int j, k, l;

	// try{
	// 	l = pembagian(j,k);
	// }catch(const char *e){
	// 	cout << e << endl;
	// }

	// throw gunanya untuk melemparkan exception secara manual

	cout << "Akhir dari Program" << endl;

	cin.get();
	return 0;
}

int kuadrat(int &value){ // for syntax error
	return value*value;
}

int luas(int &panjang, int &lebar){ // for non-error
	return panjang*lebar;
}

int pembagian(int &num, int &denum){
	if(denum == 0){
		throw overflow_error("Error: Pembagi nol");
		throw "Error: Pembagi nol";
	}
	return num/denum;
}