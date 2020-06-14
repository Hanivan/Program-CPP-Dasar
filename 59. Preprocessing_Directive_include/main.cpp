#include <iostream> // <> = Mengambil File yang ada di compiler
#include "library.h" // "" = Mengambil File yang satu folder yang sama
#include <string>
using namespace std;

int main(){
	
	// #include "library.h" // ini hanya disalin
	cout << "Berhasil" << endl;

	cout << "PI = " << PI << endl;
	cout << "KUADRAT = " << KUADRAT(5) << endl;
	cout << "MAX = " << MAX(10,2) << endl;
	cout << "Data string = " << data << endl;

	cin.get();
	return 0;
}