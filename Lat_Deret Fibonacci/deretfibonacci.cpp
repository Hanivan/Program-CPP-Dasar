#include <iostream>
using namespace std;

int main(){
	// rumusnya >> f_n = f_n1 + f_n2

	int n,f_n,f_n1,f_n2;
		cout << "Program Deret Fibonacci\n";
		cout << "Masukkan Nilai Ke-n: ";
		cin >> n;


	f_n1 = 1;
	f_n2 = 0;
	cout << f_n2 << " ";
	cout << f_n1 << " ";
	for (int i = 1; i < n; i++){
		f_n = f_n1 + f_n2;
			f_n2 = f_n1;
				f_n1 = f_n;
		cout << f_n << " ";	
	}
	cout << "\n";

	cin.get();
	return 0;
}

/* Fibonacci adalah sebuah deret, satu angka yang ditambahkan dua angka sebelumnya 
	contoh:
			1+1=2 2+1=3 3+2=5 5+3=8 8+5=13 13+8=21 21+13=34 ...
				
		1 1 2 3 5 8 13, itu adalah ke-n

		fibo (n) > fibo (6) = 1 1 2 3 5 8 => dari angka 1 sampai 8 itu berisi 6 digit angka

	loop {
		f(n) = f(n-1) + f(n+2)			f(5) = f(4) + f(3)
		jika							  5  =  3   +  2
		f(3) = f(3-1) + f(3-2)
		 2	 =    1   +    1	atau	; Jadi si f(n) itu bisa di n++ bakal nambah terus/increment 
		 								  agar nilai bisa update terus.
	}

 Deret Fibonacci bisa diterapkan memakai sintax looping
*/