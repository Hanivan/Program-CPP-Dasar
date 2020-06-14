#include <iostream>
using namespace std;

// global scope
int x = 10; // variabel global

int ambilGLobal(){
	return x; // mengambil variabel global
}

int xLocal(){
	int x = 5; // variabel local scope xLocal
	return x;
}

int main(){
	
	cout << "1. Variabel Global: " << x << endl;

	// local
	int x = 8; // varibel local untuk main

	cout << "2. Variabel Local Main: " << x << endl;

	cout << "3. Variabel Ambil Global: " << ambilGLobal() << endl;

	cout << "4. Variabel Local Main: " << x << endl;

	cout << "5. Variabel xLocal: " << xLocal() << endl;

	cout << "6. Variabel Local Main: " << x << endl;

	cout << "7. Variabel Local Main: " << x << endl;
	{
		cout << "8. Variabel Local Main: " << x << endl;
		// blok scope
		int x = 1;

		cout << "9. Variabel Global: " << ambilGLobal() << endl;

		cout << "10. Variabel Local Blok: " << ::x << endl;
	}
	// ::x adalah cara untuk mengambil variabel global

	cout << "11. Variabel Local Main: " << x << endl;

	cin.get();
	return 0;
}