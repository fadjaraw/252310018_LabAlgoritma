#include <iostream>
using namespace std;

int main(){
	int nilai[5];
	int total = 0;
	int terbesar, terkecil;
	
	cout << "Masukkan 5 nilai mahasiswa : ";
	cout << endl;
	for(int i = 0; i < 5; i++)
	{
		cin >> nilai[i];
		total += nilai[i];
	}
	
	cout << "\nDaftar nilai mahasiswa" << endl;
	for(int i = 0; i < 5; i++)
	{
		cout << "Mahasiswa ke-" << i + 1 << " = " << nilai[i] << endl;
	}
	
	float rataRata = (float)total / 5;
	cout << "\nRata-rata nilai = " << rataRata << endl;
	cout << "Hasilnya = ";
	if(rataRata >= 80){
		cout << "Baik sekali";
	}else if(rataRata >= 70){
		cout << "Baik";
	}else if(rataRata >= 60){
		cout << "Cukup";
	}else{
		cout << "Kurang";
	}
	
	cout << endl;
	cout << endl;
	
	terbesar = nilai[0];
    terkecil = nilai[0];
    
    for (int i = 1; i < 5; i++)
	{
        if(nilai[i] > terbesar)
            terbesar = nilai[i];
        if(nilai[i] < terkecil)
            terkecil = nilai[i];
    }

    cout << "Nilai ujian terbesar = " << terbesar <<endl;
    cout << "Nilai ujian terkecil = " << terkecil <<endl;
	
}
