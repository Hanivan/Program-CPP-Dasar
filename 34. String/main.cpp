#include <iostream>
#include <string>
using namespace std;

int main(){
	
	// char kata[5] = {'h','a','n','i','v'};
	// array char tidak bisa kita tambah, fiks karena array

	string kata("Kucing");
	
	string data;
	cout << "NOTE: Ganti spasi dengan underscore (_)" << endl;
	cout << "Masukkan kata atau data" << endl;
	cin >> data;
	cout << "Data yang dimasukkan adalah: " << endl;
	cout << data << endl;

	// cout << kata << endl;
	cin.get();
	return 0;
}