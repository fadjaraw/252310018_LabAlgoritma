#include <iostream>
using namespace std;

int main()
{
	char ulang;
	
	awal:
	cout << "Program Perulangan Menggunakan Go To" << endl;
	cout << endl;
	
	cout << "Ingin mengulang perintah? (Y/N)? ";
	cin >> ulang;
	
	cout << endl;
	
	if(ulang == 'Y' || ulang == 'y')
	{
		goto awal;
	}
	if(ulang == 'N' || ulang == 'n')
	{
		goto akhir;
	}
	akhir:
	
	return 0;
}
