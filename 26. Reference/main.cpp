#include <iostream>
using namespace std;

int main(){
	
	// variabel
	int a = 5;

	cout << "Address dari a: " << &a << endl;
	cout << "  Nilai dari a: " << a << endl << endl;

	int &b = a;

	cout << "  Nilai dari b: " << b << endl;
	cout << "Address dari b: " << &b << endl << endl;

	b = 10;

	cout << "  Nilai dari a: " << a << endl;
	cout << "  Nilai dari b: " << b << endl << endl;

	a = 20;

	cout << "  Nilai dari a: " << a << endl;
	cout << "  Nilai dari b: " << b << endl;

	cin.get();
	return 0;
}