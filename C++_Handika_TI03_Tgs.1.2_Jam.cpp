//Konversi dari Jam ke Detik
#include <iostream>
using namespace std;
int main()
{
	//Ini teh Judul Program YGY;)
	cout << "##  Program C++ Konversi Jam ke Detik  ##" << endl;
  	cout << "======================================" << endl;
  	cout << endl;
  	
    int jam, menit, detik, hasil;
    cout<<"Masukan jam = ";
	cin>>jam;
	cout<<"Masukan menit = ";
    cin>>menit;
	cout<<"Masukan detik = ";
	cin>>detik;
	hasil= (jam*3600)+(menit*60)+detik;
	cout<<"hasilnya menjadi : "<<hasil<<" Detik"<<endl;
}