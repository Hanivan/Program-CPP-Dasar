#include <iostream>
using namespace std;

// double volumeKubus(double p, double l, double t);
double volumeKubus(double p = 1, double l = 1, double t = 1);

int main(){
	
	cout << "Volume Kubus: " << volumeKubus(3,4,5) << endl;
	cout << "Volume Kubus: " << volumeKubus(3,4) << endl;
	cout << "Volume Kubus: " << volumeKubus(3) << endl;
	cout << "Volume Kubus: " << volumeKubus() << endl;

	cin.get();
	return 0;
}

// default argument / nilai standarnya

// double volumeKubus(double p, double l, double t){
// 	return p * l * t;
// }

double volumeKubus(double p, double l, double t){
	return p * l * t;
}