#include <iostream>
using namespace std;

int main(){
	string nama;
	float nilai1, nilai2, nilai3, ratarata;
	int angka;
	
	cout << "PROGRAM NILAI SISWA" << endl;
	cout << "====================" << endl;
	cout << "Nama Siswa : ";
	getline(cin, nama);
	cout << "Nilai Pertandingan 1 : ";
	cin >> nilai1;
	cout << "Nilai Pertandingan 2 : ";
	cin >> nilai2;
	cout << "Nilai Pertandingan 3 : ";
	cin >> nilai3;
	
	ratarata = (nilai1 + nilai2 + nilai3) / 3;
	cout << "\nSiswa yang bernama " << nama << " memperoleh nilai rata-rata " << ratarata << " dari hasil perlombaan yang diikutinya\nhadiah yang didapat adalah ";
	
	if(ratarata >= 85){ 
		angka = 1;
	}else if(ratarata >=70){
		angka = 2;
	}else{
		angka = 3;
	}
	
	switch(angka){
		case 1:
			cout << "Komputer Core i5";
			break;
		case 2:
			cout << "Uang sebesar Rp. 2.500.000";
			break;
		case 3:
			cout << "Liburan";
			break;
	}
	
}
