#include <iostream>
// ini adalah macro
#define PI 3.14159265359 // ini tidak memiliki address

using namespace std;

double pi = 3.14159265359; // ini memiliki address

int main(){
	
	cout << "Nilai pi double = " << pi << endl;
	cout << &pi << endl; // terdaftar pada address memori
	cout << "Nilai PI = " << PI << endl;
	// cout << &PI << endl; // statement ini akan error, karena PI tidak terdaftar pada adrres memori, atau sama dengan...
	// cout << &3.14159265359 << endl;

	cin.get();
	return 0;
}