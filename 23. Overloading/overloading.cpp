#include <iostream>
using namespace std;

// basic function
int luasKotak(int panjang, int lebar){
	int luas = panjang * lebar;
	return luas;
}

// overload function
int luasKotak(int sisi){
	int luas = sisi * sisi;
	return luas;
}

double luasKotak(double sisi){
	return sisi * sisi;
}

int main(){
	
	cout << "Luas kotak 2x3: " << luasKotak(2,3) << endl;
	cout << "Luas kotak 2x2: " << luasKotak(2) << endl;
	cout << "Luas kotak 2.5x2.5: " << luasKotak(2.5) << endl;

	cin.get();
	return 0;
}