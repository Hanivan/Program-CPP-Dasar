#include <iostream>
	using namespace std;

int main(){

int a = 3;
int b = 2;

bool hasil;

	/*operator logika: and, or, not
		and &&
		or ||
		not !!*/

//and = Kedua Nilai Harus Benar Biar True

cout << "Untuk and \n";
hasil = (a == 3) && (b == 2);
cout << hasil << endl;
hasil = (a == 4) && (b == 2);
cout << hasil << endl;
hasil = (a == 3) && (b == 3);
cout << hasil << endl;
hasil = (a == 4) && (b == 3);
cout << hasil << endl;

//not
cout << "Untuk not \n";
hasil = !(a == 3);
cout << hasil << endl;
hasil = !(a == 4);
cout << hasil << endl;
hasil = !(a == 3);
cout << hasil << endl;
hasil = !(a == 4);
cout << hasil << endl;

//or: salah satu nilai true, maka hasil true
cout << "Untuk or \n";
hasil = (a == 3) or (b == 2);
cout << hasil << endl;
hasil = (a == 4) or (b == 2);
cout << hasil << endl;
hasil = (a == 3) || (b == 3);
cout << hasil << endl;
hasil = (a == 4) || (b == 3);
cout << hasil << endl;

cin.get();
return 0;
}