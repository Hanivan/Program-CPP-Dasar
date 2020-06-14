#include <iostream>
using namespace std;

// void print(int data){
// 	cout << data << endl;
// }

// template function
template<typename T> // function yang berfungsi di semua type data
void print(T data){
	cout << data << endl;
}

template<typename T> // T ini bisa menjadi type data apa saja
int toInt(T data){
	return int(data); // casting to integer
}

// membuat fungsi mencari nilai maximum menggunakan template
template<typename T, typename U>
T max(T data1, U data2){
	return (data1 > data2) ? data1 : data2; // operator ternary
}

int main(){

	cout << "Template Function, biasa dipakai untuk fungsi yang generic." << endl;
	
	print(5);
	print(5.8);
	print('c');

	cout << toInt(10.10101010) << endl;
	cout << max(10,103.5) << endl;

	// eksplisit
	print<double>(10.15);
	cout << max<double,int>(11.1,12) << endl;

	cin.get();
	return 0;
}