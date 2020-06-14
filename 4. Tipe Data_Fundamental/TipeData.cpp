#include <iostream>
#include <limits>
using namespace std;

int main(){

//Bilangan bulat
int a = 1; // 32-bit
long b = 2; // 64-bit
short c = 3;

// Bilangan desimal
float d = 2.0;
double e = 3.5;

// Character
char f = 'a'; // Chracter = 1-byte

//Boolean
bool g = true; // bisa true/false

	cout << f << endl;
	cout << sizeof(f) << " byte" << endl;
	cout << "Nilai Max: " << numeric_limits<short>::max() << endl;
	cout << "Nilai Min: " << numeric_limits<short>::min() << endl;
	cin.get();
	return 0;
}

// #include <limits> = library untuk menampilkan numeric_limits