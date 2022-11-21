//Membuat Perbandingan 4 Variabel
#include <iostream>
using namespace std;
int main ()
{
	int A,B,C,D;
	cout<<("Masukkan Nilai pertama yaitu : ");
	cin >> A;
	cout<<("Masukkan Nilai kedua yaitu : ");
	cin>> B;
	cout<<("Masukkan Nilai ketiga yaitu : ");
	cin>> C;
	cout<<("Masukkan Nilai keempat yaitu : ");
	cin>> D;
	cout<<("Maka Nilai Terbesar adalah ");
	if (A > B)
		{
			if(A > C)
				{
					if(A > D)
						cout << A; 
					else
						cout << D;
				}
			else
				cout << C;
		}
	else 
		{
			if(B > C)
				{
					if(B > D)
						cout << B;
					else
						cout << D;
				}
			else
				if (C > D)
				{
					cout << C;
				}
				else 
				{
					cout << D; 
				}
		}
}