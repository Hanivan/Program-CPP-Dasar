#include <iostream>
using namespace std;

// prototype
void fungsi(int *);
void kuadrat(int *);

int main(){
	
	int a = 5;
	cout << "Address A: " << &a << endl;
	cout << "  Nilai A: " << a << endl;

	// fungsi(&a); // fungsi dengan input pointer
	kuadrat(&a);

	cout << "  Nilai A: " << a << endl;

	cin.get();
	return 0;
}

void fungsi(int *b){
	cout << "Address B: " << b << endl;
	cout << "  Nilai B: " << *b << endl; // dereferencing
}

void kuadrat(int *valPtr){
	*valPtr = (*valPtr) * (*valPtr);
}