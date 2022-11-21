//Konversi Suhu
#include <iostream>
 
using namespace std;
 
int main()
{
  cout << "##  Program C++ Konversi Suhu Fahrenheit ke Celcius  ##" << endl;
  cout << "=================================" << endl;
  cout << endl;
 
  float celc, fahr, kelv, ream ;
 
  cout << "Input suhu fahrenheit: ";
  cin >> fahr;
  cout << endl;
 

  celc = (fahr-32)*5/9;
 
  cout << fahr << " derajat fahrenheit = " << celc <<" derajat celcius";
  cout << endl;
  return 0;
}