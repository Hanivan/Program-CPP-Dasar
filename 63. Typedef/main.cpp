#include <iostream>
using namespace std;

int main(){
	
	// typedef
	typedef int I; // ini tidak ada gunanya
	typedef int iVector2D[2];
	typedef unsigned long ulong; // unsigned long dirubah jadi ulong
	typedef double vector[2];

	using numbers = double;

	I a = 10;
	iVector2D b = {1,2};
	ulong c = 21361872368712123;
	vector d = {10.123123,15.10239};
	numbers e = 10.123123;

	cout << "Nilai a = " << a << endl;
	cout << "Nilai b = " << b[0] << " dan " << b[1] << endl;
	cout << "Nilai c = " << c << endl;
	cout << "Nilai d = " << d[0] << " dan " << d[1] << endl; 
	cout << "Nilai e = " << e << endl;

	cin.get();
	return 0;
}

// typef: alias untuk type data