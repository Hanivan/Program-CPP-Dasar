#include <iostream>
using namespace std;

// untuk mempermudah urutan index jadi variabel
enum warna {merah, putih, hitam, coklat = 5, kuning, biru};

int main(){
	
	warna kain;

	kain = hitam;

	if(kain == hitam){
		cout << "Warna kain hitam" << endl;
	}

	cout << kain << endl;

	cin.get();
	return 0;
}