#include <iostream>
#include "bersama.h"
#include "foo.h"
#include "bar.h"

// // ifdef(if define): salah satu preprocessing untuk mengecek define sudah di include atau belum
// #ifdef FOO
// 	#define TEST_FOO "foo ada"
// #else
// 	#define TEST_FOO "foo tidak ada"
// #endif

// // ifndef(if not define): Jika tidak terdefinisi/guarding, jika pakai else, maka akan error
// #ifndef FOO
// 	#define FOO "foo baru"
// #endif

// pragma once


using namespace std;

int main(){

	Mahasiswa mahasiswa;
	mahasiswa.NIM = 10;
	
	cout << "Ini fungsi struct mahasiswa pada header bersama.h, nilainya: " << mahasiswa.NIM << endl << endl;
	cout << "Header file berguna untuk menaruh deklarasi, agar bisa dipakai di semua file/mendefinisikan suatu fungsi di file terpisah" << endl;

	cin.get();
	return 0;
}