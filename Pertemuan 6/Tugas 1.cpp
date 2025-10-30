#include <iostream>
using namespace std;

int main()
{
	int a, b;
	char ulang;
	
	awal:
	cout << "Masukkan Bilangan = ";
	cin >> a;
	
	b =  a % 2;
	
	cout << "Nilai " << a << " % 2 adalah " << b << endl;
	
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
