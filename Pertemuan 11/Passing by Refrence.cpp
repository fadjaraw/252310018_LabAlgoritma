#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;

void tambah(int *c, int *d);

int main()
{
	int a, b;
	a = 4;
	b = 6;
	
	cout << "Nilai Sebelum Pemanggilan Funsgi" << endl;
	cout << "a = " << a << " b = " << b;
	
	tambah(&a, &b);
	cout << endl << endl;
	
	cout << "NIlai Setelah Pemanggilan Fungsi";
	cout << "a = " << a << " b = " << b;
	getch();
}

void tambah(int *c, int *d)
{
	*c += 7;
	*d += 5;
	cout << endl << endl;
	cout << "Nilai diAkhir Fungsi Tambah()" << endl;
	cout << "c = " << *c << " d = " << *d;
}
