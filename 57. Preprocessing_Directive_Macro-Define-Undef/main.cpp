// ini adalah preprocessing derective
#include <iostream>
	// macro merubah nilai dengan nama
#define PI 3.14159265359 // mengganti setiap PI dengan nilai tersebut
#define BAHASA "indonesia"
	// macro untuk fungsi/function inline
#define KUADRAT(X) (X*X)
#define MAX(A,B) ((A > B) ? A : B)

// akhir dari preprocessing derective
using namespace std;

int main(){
	
	system("clear");
	cout << "Membuat Macro" << endl;

	cout << "Nilai PI: " << PI << endl;
	cout << "Bahasa: " << BAHASA << endl;
	cout << "Kuadrat: " << KUADRAT(14) << endl;
	cout << "max: " << MAX(5,10) << endl;
	
	// jika ingin di undefine
	#undef BAHASA
	#define BAHASA "Inggris"
	cout << "Bahasa setelah di undef: " << BAHASA << endl;

	cin.get();
	return 0;
}

// macro = mengganti definisi/menambahkan segala sesuatu yang sudah dijabarkan di awal