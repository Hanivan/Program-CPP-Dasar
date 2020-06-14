#include <iostream>
#include <string>
using namespace std;

int main(){
	
	// perbandingan string
	// membuat program sederhana tebak nama
	string input;
	string nama_rahasia("tania");

	cout << "===== Selamat Datang Di Program Tebak Nama =====" << endl;

	while(true){
		cout << "Tebak nama: ";
		cin >> input;

		if(input == nama_rahasia){
			cout << "Tebakan anda benar!!!" << endl;
			break;
		}
		cout << "Maaf, tebakan anda salah" << endl;
	}
	cout << "===== Program Shutdown =====" << endl;

	cin.get();
	return 0;
}