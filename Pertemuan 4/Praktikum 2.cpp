#include <iostream>
using namespace std;

int main(){
	int a, b;
	
	cout << "Masukkan Bilangan A ; ";
	cin >> a;
	cout << "Masukkan Bilangan B ; ";
	cin >> b;
	
	if(a > b)
		cout << "Hasilnya " << a - b << endl;
	else if(a < b )
		cout << "Hasilnya " << b - a << endl;
	else if(a == b )
		cout << "Hasilnya " << a + b << endl;
	
	return 0;
	
}
