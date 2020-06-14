#include <iostream>

#define ID 1

// logika if Preprocessing
#if ID == 1
	#define LANG "Indonesia"
#else
	#define LANG "English"
#endif

using namespace std;

int main(){
	
	cout << "Menaruh Preprocessing if else" << endl;

	cout << "Bahasa: " << LANG << endl;

	cin.get();
	return 0;
}