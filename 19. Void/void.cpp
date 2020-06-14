#include <iostream>
using namespace std;

// reporter
int kuadrat(int x){ // fungsi kembalian
	int y;
	y = x * x;
	return y;
}

// void tidak mengambalikan apapun / worker
void tampilkan(int input){
	cout << "Menampilkan dengan void\n";
	cout << input << endl;
}

int main(){
	
	int input, hasil;
	cout << "Masukkan nilai kuadrat dari: ";
	cin >> input;

	hasil = kuadrat(input);
	tampilkan(hasil);


	cin.get();
	return 0;
}