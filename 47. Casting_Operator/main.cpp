#include <iostream>
using namespace std;

int main(){
	
	int a = 5;
	float b = 6.67;
	char c = 'd';

	cout << a + (int)b << endl;
	cout << (char)(c + a) << endl;

	cin.get();
	return 0;
}

// implisit = casting operator di belakang layar
// eksplisit = casting operator di dalam program