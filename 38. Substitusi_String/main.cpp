#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string kalimat_1("Aku suka kamu suka, siapa? Dia!");
	string kalimat_2("Wakanda vorefah!!!");

	cout << "1: " << kalimat_1 << endl;
	cout << "2: " << kalimat_2 << endl;

	// swap string: untuk menukar dua buah kalimat
	kalimat_1.swap(kalimat_2);
	cout << "Swap String" << endl;
	cout << "1: " << kalimat_1 << endl;
	cout << "2: " << kalimat_2 << endl;

	// replace, mengganti string
	// replace(index,panjang,kalimatPengganti)
	kalimat_2.replace(27,3,"otong");
	kalimat_1.replace(kalimat_1.find("ah"),
		2,
		"er"
		);
	cout << "Replace String" << endl;
	cout << "1: " << kalimat_1 << endl;
	cout << "2: " << kalimat_2 << endl;

	// insert string, memasukkan string
	// insert(index,)
	kalimat_1.insert(8,"dan hatiku ");
	cout << "Insert String" << endl;
	cout << "1: " << kalimat_1 << endl;
	cout << "2: " << kalimat_2 << endl;

	cin.get();
	return 0;
}