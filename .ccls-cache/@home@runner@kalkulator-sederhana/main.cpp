#include <iostream>
using namespace std;

int main() {
  int x;
  cout << "kalkulator sederhana";
  cout << "\nsilakan pilih menu :"<<endl;
  cout << "1. penjumlahan"<<endl;
  cout << "2. pengurangan"<<endl;
  cout << "3. perkalian"<<endl;
  cout << "4. pembagian"<<endl;
  cout << "Masukan input : ";
  cin >> x;

  switch (x){
    case 1:
      int hasil, angka1, angka2;
      cout << "Masukan angka : "<<endl;
      cin >> angka1;
      cout << "Masukan angka : "<<endl;
      cin >> angka2;
      hasil = angka1 + angka2;
      cout << "Hasil penjumlahan : "<< x;
      break;
    case 2:
      int hasil,angka1,angka2;
      cout << "Masukan angka : "<<endl;
      cin >> angka1;
      cout << "Masukan angka : "<<endl;
      cin >> angka2;
      
      
    default :
      cout << "silakan inputkan dengan benar";
    }

  return 0;
}