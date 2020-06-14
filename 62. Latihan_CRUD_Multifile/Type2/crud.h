#include <iostream>
#include <fstream>
#include <string>
#include <limits>

namespace crud{
	struct Mahasiswa {
		int pk;
		std::string NIM;
		std::string nama;
		std::string jurusan;
	};

	void writeData(std::fstream &data, int posisi, Mahasiswa &inputMahasiswa){
		data.seekp((posisi - 1)*sizeof(Mahasiswa), std::ios::beg);
		data.write(reinterpret_cast<char*>(&inputMahasiswa),sizeof(Mahasiswa));
	}

	Mahasiswa readData(std::fstream &data, int posisi){
		Mahasiswa readMahasiswa;
		data.seekg((posisi - 1)*sizeof(Mahasiswa),std::ios::beg);
		data.read(reinterpret_cast<char*>(&readMahasiswa),sizeof(Mahasiswa));
		return readMahasiswa;
	}

	int getDataSize(std::fstream &data){
		int start, end;
		data.seekg(0,std::ios::beg);
		start = data.tellg();
		data.seekg(0,std::ios::end);
		end = data.tellg();
		return (end-start)/sizeof(Mahasiswa);
	}

	void displayDataMahasiswa(std::fstream &data){
		int size = getDataSize(data);
		Mahasiswa showMahasiswa;
		std::cout << "no.\tpk.\tNIM.\tNama.\tJurusan." << std::endl;
		for(int i = 1; i <= size; i++){
			showMahasiswa = readData(data,i);
			std::cout << i << "\t";
			std::cout << showMahasiswa.pk << "\t";
			std::cout << showMahasiswa.NIM << "\t";
			std::cout << showMahasiswa.nama << "\t";
			std::cout << showMahasiswa.jurusan << std::endl;
		}
	}

	void deleteRecord(std::fstream &data){
		int nomor, size, offset;
		Mahasiswa blankMahasiswa, tempMahasiswa;
		std::fstream dataSementara;
		size = getDataSize(data);
		
		// 1. pilih nomor
		std::cout << "Hapus nomor: ";
		std::cin >> nomor;
		// 2. di posisi ini diisi dengan data kosong
		writeData(data,nomor,blankMahasiswa);
		// 3. kita cek data yang ada dari file .bin, kalau ada data kita pindahkan ke file sementara
			// bikin file sementara
		dataSementara.open("temp.dat", std::ios::trunc | std::ios:: out | std::ios::in | std::ios::binary);

		offset = 0;
		for( int i = 1; i <= size; i++){
			tempMahasiswa = readData(data,i);

			if(!tempMahasiswa.nama.empty()){
				writeData(dataSementara,i - offset,tempMahasiswa);
			} else {
				offset++;
				std::cout << "deleted item" << std::endl;
			}
		}
		// 4. kita pindahkan data dari file sementara ke data.bin
			// bikin size si tempMahasiswa
		size = getDataSize(dataSementara);
		data.close();
		data.open("data.bin",std::ios::trunc | std::ios::out | std::ios::binary);
		data.close();
		data.open("data.bin",std::ios::out | std::ios::in | std::ios::binary);
			// pindahin data
		for(int i = 1; i <= size; i++){
			tempMahasiswa = readData(dataSementara,i);
			writeData(data,i,tempMahasiswa);
		}
		// kalau kita mau write data, maka kita harus close datanya dulu dan open lagi datanya
	}

	void updateRecord(std::fstream &data){
		// memilih data by id
		int nomor;
		Mahasiswa updateMahasiswa;
		std::cout << "pilih no: ";
		std::cin >> nomor;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

		updateMahasiswa = readData(data,nomor);

		std::cout << "\n\nPilihan data; " << std::endl;
		std::cout << "NIM: " << updateMahasiswa.NIM << std::endl;
		std::cout << "NIM: " << updateMahasiswa.nama << std::endl;
		std::cout << "NIM: " << updateMahasiswa.jurusan << std::endl;

		std::cout << "\nMerubah data: " << std::endl;
		std::cout << "NIM: ";
		std::getline(std::cin,updateMahasiswa.NIM);
		std::cout << "Nama: ";
		std::getline(std::cin,updateMahasiswa.nama);
		std::cout << "Jurusan: ";
		std::getline(std::cin,updateMahasiswa.jurusan);

		writeData(data,nomor,updateMahasiswa);
	}

	void checkDatabase(std::fstream &data){
		data.open("data.bin", std::ios::out | std::ios::in | std::ios::binary);

		// check file ada atau tidak
		if (data.is_open()){
			std::cout << "database ditemukan" << std::endl;
			// system("sleep 2"); // linux
			system("cls"); // windows
		} else {
			std::cout << "database tidak ditemukan, buat database baru" << std::endl;
			// system("sleep 2"); //linux
			system("cls"); // windows
			data.close();
			data.open("data.bin", std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary);
		}
	}

	int getOption(){
		int input;
		// fungsi untuk memasukkan perintah terminal/cmd
		// system("clear"); // linux
		system("cls"); // windows

		// menampilkan waktu sekarang
		time_t now = time(0);
		char* dt = ctime(&now);

		std::cout << "Hari ini:" << dt;

		// menunya
		std::cout << "\nProgram CRUD data mahasiswa" << std::endl;
		std::cout << "=============================" << std::endl;
		std::cout << "1. Tambah data mahasiswa" << std::endl;
		std::cout << "2. Tampilkan data mahasiswa" << std::endl;
		std::cout << "3. Ubah data mahasiswa" << std::endl;
		std::cout << "4. Hapus data mahasiswa" << std::endl;
		std::cout << "5. Selesai" << std::endl;
		std::cout << "=============================" << std::endl;
		std::cout << "pilih [1-5]? : ";
		std::cin >> input;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		return input;
	}

	void addDataMahasiswa(std::fstream &data){
		
		Mahasiswa inputMahasiswa, lastMahasiswa;

		int size = getDataSize(data);
		
		std::cout << "ukuran data : " << size << std::endl;

		if(size == 0){
			inputMahasiswa.pk = 1;
		} else {
			lastMahasiswa = readData(data,size);
			std::cout << "pk = " << lastMahasiswa.pk << std::endl;
			inputMahasiswa.pk = lastMahasiswa.pk + 1;
		}

		std::cout << "Nama: ";
		std::getline(std::cin, inputMahasiswa.nama);
		std::cout << "Jurusan: ";
		std::getline(std::cin, inputMahasiswa.jurusan);
		std::cout << "NIM: ";
		std::getline(std::cin, inputMahasiswa.NIM);

		writeData(data,size+1,inputMahasiswa);
	}
}