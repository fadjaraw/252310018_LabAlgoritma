#include <iostream>
using namespace std;

int faktorial(int a)
{
    int hasil = 1;
    for (int i = 1; i <= a; i++) 
	{
        hasil *= i;
    }
    return hasil;

}

int main()
{
	int x;
	cout << "Masukkan Angka : ";
    cin >> x;
	cout << x << "! adalah : " << faktorial(x) << endl;
	
	return 0;
}
