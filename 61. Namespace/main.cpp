#include <iostream>
#include "otong.h"

using namespace otong; // kita bisa menggunakan namespace kita sendiri

// prototype
void fungsi2();

int main(){
	
	fungsi();
	std::cout << otong::b << std::endl;
	fungsi2();
	cout(100);

	std::cin.get();
	return 0;
}

void fungsi2(){
	std::cout << "Ini adalah fungsi biasa" << std::endl << std::endl;
	std::cout << "Namespace fungsinya untuk memberikan scope" << std::endl;
	std::cout << "Kegunaan Namespace: Agar program kita lebih rapih atau membuat sebuah fungsi yang variabelnya sudah deklarasikan didalam int main()" << std::endl << std::endl;
}