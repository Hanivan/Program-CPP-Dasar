#include <iostream>
#include <bitset>
#include <string>
using namespace std;

void printBinary(unsigned short val, string nama){
	cout << nama << " = " << val << ", binary: " << bitset<8>(val) << endl;
}

int main(){
	
	unsigned short a = 6;
	unsigned short b = 10;
	unsigned short c;

	cout << "\n>> - Bitwise SHR" << endl;
	c = a >> 1;
	printBinary(a,"a");
	printBinary(c,"c");

	cout << "\n<< - Bitwise SHL" << endl;
	c = a << 2;
	printBinary(a,"a");
	printBinary(c,"c");

	cout << "\n~ - Bitwise NOT" << endl;
	c = ~a;
	printBinary(a,"a");
	printBinary(c,"c");

	cout << "\n^ - Bitwise XOR" << endl;
	c = a ^ b;
	printBinary(a,"a");
	printBinary(b,"b");
	printBinary(c,"c");

	cout << "\n| - Bitwise OR" << endl;
	c = a | b;
	printBinary(a,"a");
	printBinary(b,"b");
	printBinary(c,"c");

	cout << "\n& - Bitwise AND" << endl;
	c = a & b;
	printBinary(a,"a");
	printBinary(b,"b");
	printBinary(c,"c");

	cin.get();
	return 0;
}
/*
Bitwise Operator
& AND Bitwise AND
| OR Bitwise Exclusive OR
^ XOR Bitwise Exclusive XOR
~ NOT
>> SHL Shift Bits Right
<< SHL Shift Bits Left
*/
