#include <iostream>
using namespace std;

struct Mahasiswa
{	
	string nama;
	string kelas;
	int npm;
	float ipk;	
};
//Helena, Anton; 

int main()
{
//	Helena.nama = "Helena Jemima";
//	Anton.npm = 242310024;
//	
//	cout << Helena.nama << endl << Anton.npm;
//  ==============================================

//	Mahasiswa Fadjar;
//	Fadjar.nama = "Fadjar AW";
//	Fadjar.kelas = "TI 25 PA";
//	Fadjar.npm = 252310018;
//	Fadjar.ipk = 3.7;
//	
//	cout << Fadjar.nama << endl << Fadjar.kelas << endl << Fadjar.npm << endl<< Fadjar.ipk;
//  ===============================================

//	Mahasiswa Fadjar{"Fadjar AW", "TI 25 PA", 252310018, 3.7};
//	cout << Fadjar.nama;
	
//  ===============================================
//	Array
	
	Mahasiswa TI[3];
	
	TI[0].nama = "Fadjar";
	TI[0].npm = 25231018;
	
	TI[1].nama = "Rasya";
	TI[1].npm = 25231012;
	
	TI[2].nama = "Louren";
	TI[2].npm = 25231051;
	
	for(int i = 0; i < 3; i++)
	{
		cout << TI[i].nama << endl << TI[i].npm << endl << endl;
	}
	
	return 0;
}
