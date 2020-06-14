#include <iostream>
using namespace std;

union data { // tipe data dynamic
	int a;
	char b[4];
};

int main(){
	
	data data_union;

	data_union.a = 1234562;

	cout << "Data a: " << sizeof(data_union.a) << " bit" << "\nValue: " << data_union.a << endl;
	cout << "Data b: " << data_union.b << endl;

	data_union.b[0] = 'a';
	data_union.b[1] = 'b';
	data_union.b[2] = 'c';
	data_union.b[3] = 'd';

	cout << "Data a: " << sizeof(data_union.a) << " bit" << "\nValue: " << data_union.a << endl;
	cout << "Data b: " << data_union.b << endl;

	cin.get();
	return 0;
}