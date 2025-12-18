#include <iostream>
using namespace std;

int pangkat(int *a)
{
    *a = *a * *a * *a;
}

int main()
{
    int x;
    cout << "Masukkan nilai x: ";
    cin >> x;
    
    pangkat(&x);
    
    cout << "Hasilnya = " << x;
	
	return 0;
}
