#include <iostream>
using namespace std;

int main(){

	int x = 50; // variabel x yang bertipe integer bernilai 50
	int a, b, c, d, e; // deklarasi variable a, b, c, d, dan e yang bertipe integer
	
	//Proses
    a = x > 5 + 5;               // untuk mengecek apakah x lebih besar dari 5 + 5. Jika iya hasilnya akan true atau false
    b = x > 100;                 // untuk mengcek apakah x lebih besar dari 100. Jika iya hasilnya akan true atau false
    c = a && b;                  // AND = Jika hasil dari a dan b sama sama true maka hasilnya akan true
    d = a || b;                  // OR = Jika hasil dari salah satu a atau b true, maka hasilnya akan true
    e = !(c);                    // NOT = Membalikkan nilai c (jika c = true maka hasilnya false dan jika c = false maka hasilnya true

	
	//output
	cout << "\nNilai a = x > 5 + 5 = " << a << endl; // menampilkan output a
	cout << "\nNilai b = x > 100 = " << b << endl; // menampilkan output b
	cout << "\nNilai c = a && b = " << c << endl; // menampilkan output c
	cout << "\nNilai d = a || b = " << d << endl; // menampilkan output d
	cout << "\nNilai e = !(c) = " << e << endl; // menampilkan output e
	
	getchar(); // mencegah program langsung tertutup jika program ini sudah dijalankan
}
