#include <iostream>
using namespace  std;

int main(){

//increment dan decrement
// ada dua type increment dan decrement:
// 1. preincrement > sebelum
// 2. postincrement > sesudah
// penambahan dan pengurangan

	int a = 5;
	int b = 5;
	int c = 5;

	// postincrement
	cout << "Nilai awal: " << a << endl;
	cout << "Dalam proses: " << a++ << endl; //Ini di print dulu, baru ditambahkan
	cout << "postincrement: " << a << endl << endl;

	//preincrement
	cout << "Nilai awal dari b: " << b << endl;
	cout << "Dalam proses dari b: " << ++b << endl; //Ini ditambahkan dulu, baru di print
	cout << "Nilai preincrement b: " << b << endl << endl;

	//decrement
	cout << "Nilai awal dari c: " << c << endl;
	cout << "Dalam proses dari c: " << c-- << endl; //Ini di print dulu, baru ditambahkan
	cout << "Nilai decrement c: " << c << endl << endl;


	cin.get();
	return 0;
}