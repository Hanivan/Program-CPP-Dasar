#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string kalimat_input;

	// getline(cin, variabel) -> Mengambil dari standard library 
	cout << "Masukkan kalimat: ";
	getline(cin, kalimat_input);

	cout << "Input anda: " << kalimat_input << endl;

	// jumlah kata dari input
	int posisi = 0;
	int jumlah = 0;

	while(true){
		posisi = kalimat_input.find(" ",posisi + 1);
		jumlah++;
		cout << "Posisi: " << posisi << " jumlah: " << jumlah << endl;
		if(posisi < 0){
			break;
		}
	}

	cout << "Jumlah kata: " << jumlah << endl;

	cin.get();
	return 0;
}