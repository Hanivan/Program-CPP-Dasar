#include <iostream>
using namespace std;

// prototype
void fungsi(int &);
void kuadrat(int &);

int main(){
	
	int a = 5;
	cout << "Address A:" << &a << endl;
	cout << "  Nilai A:" << a << endl;

	// fungsi(a);
	kuadrat(a);
	cout << "  Nilai A: " << a << endl;

	cin.get();
	return 0;
}

void fungsi(int &b){
	b = 10;
	cout << "Address B: " << &b << endl;
	cout << "  Nilai B: " << b << endl;
}

void kuadrat(int &nilaiRef){
	nilaiRef = nilaiRef * nilaiRef;
}