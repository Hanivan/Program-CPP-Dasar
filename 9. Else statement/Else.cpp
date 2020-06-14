#include <iostream>
	using namespace std;
int main(){

	int a;

	cout << "Masukkan Nilai: ";
	cin >> a;

		//If Statement
		//Kondisi harus bentuk boolean
if(a == 2)
{
	cout << "Ini 2" << endl;
} else if (a == 3){
	cout << "Ini 3" << endl;
} else if (a == 4){
	cout << "Ini 4" << endl;
} else {
	cout << "Ini bukan 2,3 atau 4" << endl;
}

	cout << "***Program Shutdown***" << endl;
cin.get();
return 0;	
}