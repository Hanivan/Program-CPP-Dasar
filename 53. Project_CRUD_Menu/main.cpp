#include <iostream>
#include <string>
#include <ctime> // std_lib untuk menampilkan waktu
using namespace std;

int getOption();

int main(){

	// menangkap pilihan
	int pilihan = getOption();
	char isContinue;

	enum option{CREATE = 1, READ, UPDATE, DELETE, FINISH};

	while(pilihan != FINISH){

		switch(pilihan){
			case CREATE:
				cout << "Menambah data mahasiswa" << endl;
				break;
			case READ:
				cout << "Tampilkan data mahasiswa" << endl;
				break;
			case UPDATE:
				cout << "Ubah data mahasiswa" << endl;
				break;
			case DELETE:
				cout << "Hapus data mahasiswa" << endl;
				break;
			default:
				cout << "pilihan tidak ditemukan" << endl;
				break;
		}

		label_continue:

		cout << "Lanjutkan?(y/n): ";
		cin >> isContinue;
		if((isContinue == 'y') | (isContinue == 'Y')){
			pilihan = getOption();
		} else if((isContinue == 'n') | (isContinue == 'N')){
			break;
		} else {
			goto label_continue;
		}

	}

	cout << "Akhir dari program" << endl;
	system("sleep 2"); // command pause untuk linux
	// system("pause 2"); // command pause untuk windows 
	system("clear");

	cin.get();
	return 0;
}

int getOption(){
	int input;

	// fungsi untuk memasukkan perintah terminal/cmd
	system("clear"); // linux
	// system("cls"); // windows

	// menampilkan waktu sekarang
	time_t now = time(0);
	char* dt = ctime(&now);

	cout << "Hari ini: " << dt << endl;

	// menunya
	cout << "Program CRUD Data Mahasiswa" << endl;
	cout << "=============================" << endl;
	cout << "1. Tambah data mahasiswa" << endl;
	cout << "2. Tampilkan data mahasiswa" << endl;
	cout << "3. Ubah data mahasiswa" << endl;
	cout << "4. Hapus data mahasiswa" << endl;
	cout << "5. Selesai" << endl;
	cout << "=============================" << endl;
	cout << "Pilih [1-5]? : ";
	cin >> input;
	return input;
}