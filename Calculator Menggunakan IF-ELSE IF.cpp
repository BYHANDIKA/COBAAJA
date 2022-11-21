//Header
#include <iostream>
//Penulisan standar
using namespace std;
int main ()
{
	//Jenis Variabel Data
	float a,b,hasil;
	char aritmatika;
	//Hiasan Biar Keren
	cout << "------------------------------------------------------------" <<endl;
    cout << "+               Bahasa Pemrograman C++                	   +" <<endl;
    cout << "+  Program Kalkulator Sederhana Menggunakan IF & ELSE IF   +" <<endl;
    cout << "------------------------------------------------------------\n" <<endl;
    cout << "+                     Created BY                           +" <<endl;
    cout << "+             Muhammad Handika Jatikusuma                  +\n" <<endl;
    cout << "------------------------------------------------------------\n" <<endl;
    cout << "============================================================" <<endl;
	//proses input
	cout <<"Bilangan Pertama\t: ";
	cin >>a;
	cout <<"Bilangan Kedua\t \t: ";
	cin >>b;
	cout <<"Operator +,-,*,/\t: ";
	cin >>aritmatika;
	
	cout <<"\nHasil Perhitungan\t: " <<a <<" " <<aritmatika <<" " <<b;
	
	if (aritmatika == '+')
	{
		hasil = a+b;
	} else if (aritmatika == '-')
	{
		hasil = a-b;
	} else if (aritmatika == '*')
	{
		hasil = a*b;
	} else if (aritmatika == '/')
	{
		hasil = a/b;
	}
	
	cout <<" = " <<hasil <<endl;
	return 0;
}
