#include <iostream>
using namespace std;

int main(){


		//Bilangan Bulat
	int a = 2;

	std::cout << "integer: " << a << std::endl;
	std::cout << sizeof(a) << "Byte" << std::endl << std::endl;
	//sizeof= Untuk melihat berapa besar ukuran per byte
   
	long b = 4;
	std::cout << "long: " << b << std::endl;
	std::cout << sizeof(b) << "Byte" << std::endl << std::endl;

	short c = 6;
	std::cout << "short: " << c << std::endl;
	std::cout << sizeof(c) << "Byte" << std::endl << std::endl;


		//Bilangan Desimal
	float d = 8.0; //Untuk angka yang desimal/ koma
	std::cout << "float" << d << std::endl;
	std::cout << sizeof(d) << "Byte" << std::endl << std::endl;

	double e = 9.0;
	std::cout << "double" << e << std::endl;
	std::cout << sizeof(e) << "Byte" << std::endl << std::endl;


		//Character
	char f = 'z';
	std::cout << "char" << f << std::endl;
	std::cout << sizeof(f) << "Byte" << std::endl << std::endl;


		//boolean
	bool g = false; //Bisa true bisa false
	std::cout << "bool" << g << std::endl;
	std::cout << sizeof(g) << "Byte" << std::endl;

cin.get();
return 0;	
}