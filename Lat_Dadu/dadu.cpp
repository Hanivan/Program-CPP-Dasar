#include <iostream>
#include <cstdlib> // mengandung fungsi random

using namespace std;
int main(){

	char lanjut;
	while(true){
		cout << "Lempar dadu? (y/n)";
		cin >> lanjut;

		if(lanjut == 'y'){
			cout << 1 + rand() % 6 << endl;
		} else if(lanjut == 'n'){
			break;
		} else {
			cout << "WARNING!!! ketik y atau n dong\n";
		}
	}

	cin.get();
	return 0;
}