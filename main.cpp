#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  mulai : 
  int x, hasil, angka1, angka2;
  float hasil2, angka3, angka4;
  cout << "==kalkulator sederhana==";
  cout << "\nsilakan pilih menu :"<<endl;
  cout << "1. penjumlahan"<<endl;
  cout << "2. pengurangan"<<endl;
  cout << "3. perkalian"<<endl;
  cout << "4. pembagian"<<endl;
  cout << "5. keluar"<<endl;
  cout << "Masukan input : ";
  cin >> x;

  switch (x){
    case 1:
      cout << "Masukan angka : "<<endl;
      cin >> angka1;
      cout << "Masukan angka : "<<endl;
      cin >> angka2;
      hasil = angka1 + angka2;
      cout << "Hasil penjumlahan : "<< hasil<<endl;
      goto mulai;
      break;
    
    case 2:
      cout << "Masukan angka : "<<endl;
      cin >> angka1;
      cout << "Masukan angka : "<<endl;
      cin >> angka2;
      hasil = angka1 - angka2;
      cout << "Hasil pengurangan : "<<hasil<<endl;
      goto mulai;
      break;

    case 3:
      cout << "Masukan angka : "<<endl;
      cin >> angka1;
      cout << "Masukan angka : "<<endl;
      cin >> angka2;
      hasil = angka1 * angka2;
      cout << "Hasil perkalian : "<<hasil<<endl;
      goto mulai;
      break;
    
    case 4:
      cout << "Masukan angka : "<<endl;
      cin >> angka3;
      cout << "Masukan angka : "<<endl;
      cin >> angka4;
      hasil2 = angka3/angka4;
      cout << "Hasil pembagian : "<< setprecision(3) <<hasil2<<endl;
      goto mulai;
      break;

    case 5: 
      cout << "Keluar dari program";
      return 0;
      break;
    
    default :
      cout << "silakan inputkan dengan benar";
    }

  return 0;
}