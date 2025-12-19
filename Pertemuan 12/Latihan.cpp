#include <iostream>
using namespace std;

struct databuku
{	
	string nama;
	string penulis;
	string tahunterbit;	
}Buku1, Buku2;

int main()
{
	cout << "Masukkan Data Buku Pertama" << endl;
	cout << "Masukkan Nama Buku :";
	getline(cin, Buku1.nama);
	
	cout << "Masukkan Nama Penulis :";
	getline(cin, Buku1.penulis); 
	
	cout << "Masukkan Tahun Terbit : " << endl;
	getline(cin, Buku1.tahunterbit);
	
	cout << "Masukkan Data Buku Kedua" << endl;
	cout << "Masukkan Nama Buku : ";
	getline(cin, Buku2.nama);
	
	cout << "Masukkan Nama Penulis : ";
	getline(cin, Buku2.penulis); 
	
	cout << "Masukkan Tahun Terbit : ";
	getline(cin, Buku2.tahunterbit);
	
	cout << Buku1.nama << endl;
	cout << Buku1.penulis << endl;
	cout << Buku1.tahunterbit << endl << endl;
	
	cout << Buku2.nama << endl;
	cout << Buku2.penulis << endl;
	cout << Buku2.tahunterbit << endl;
	
	return 0;
}
