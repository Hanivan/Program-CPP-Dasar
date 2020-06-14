#include <iostream>
using namespace std;

int main(){

	int a = 1;
	int b = 2;

	bool hasil1, hasil2, hasil3, hasil4;

	//Sistem komparasi

		//Sebanding ==
	hasil1 = (a == b);
		//Tidak sebanding !=
	hasil2 = (a != b);
		//Kurang dari
	hasil3 = (a < b);
		//Lebih dari
	hasil4 = (a > b);

	cout << hasil1 << endl;
	cout << hasil2 << endl;
	cout << hasil3 << endl;
	cout << hasil4 << endl;

	cin.get();
	return 0;
}