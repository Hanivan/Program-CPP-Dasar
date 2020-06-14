#include <iostream>
#include <ctime>
using namespace std;
int main() {
   time_t now = time(0);
   char* dt = ctime(&now);
   
   cout<<"\n      Menampilkan Date And Time C++   \n";
   cout<<"                ANAKIT \n";
   cout <<"\n Waktu Sekarang : " << dt << endl;
} 