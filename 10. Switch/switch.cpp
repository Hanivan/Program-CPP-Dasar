#include <iostream>
	using namespace std;
int main(){

	int a;

	cout << "Masukkan Nilai: ";
	cin >> a;

	switch(a){
		case 1:
			cout << "a = 1" << endl;
			break;
		case 2:
			cout << "a = 2" << endl;
			break;
		case 3:
			cout << "a = 3" << endl;
			break;
		case 4:
			cout << "a = 4" << endl;
			break;
		case 5:
			cout << "a = 5" << endl;
			break;
		default:
			cout << "default" << endl;
	}

	cout << "Akhir dari program" << endl;


cin.get();
return 0;
}

/*break; gunanya untuk menstop statement yang dikeluarkan
hanya berfungsi di switch case*/