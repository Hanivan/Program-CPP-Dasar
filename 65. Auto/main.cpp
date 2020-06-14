#include <iostream>
#include <string>
#include <typeinfo> // std_lib untuk typeid().name();
using namespace std;

template<typename T, typename U>
T max(T a, U b){
	return (a > b) ? a : b; // ternary tidak jalan dengan string
}

int main(){
	
	cout << "Auto itu gunanya untuk mendeteksi type data yang tidak diketahui. Sistem auto akan memilih type data yang bit-nya paling besar. Penerapan auto biasanya dipakai di fungsi template. Fungsi auto dibuat dari 2011/cpp tahun 2011. Pada cpp 2017, auto digunakan pada template parameter." << endl;

	auto a = 15;
	auto b = "string";
	double c = 15.432;
	float d = 14.5f;
	auto e = max(a,c); // memakai auto, karena kita tidak tau outputnya, nantinya akan beda" sesuai inputnya

	cout << a << " tipe = " << typeid(a).name() << endl; // fungsi untuk melihat type data pada auto
	cout << b << " type = " << typeid(b).name() << endl;
	cout << c << " type = " << typeid(c).name() << endl;
	cout << d << " type = " << typeid(d).name() << endl;
	cout << e << " type = " << typeid(e).name() << endl;

	cin.get();
	return 0;
}