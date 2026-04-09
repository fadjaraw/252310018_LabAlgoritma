#include <iostream>
using namespace std;

int main(){
	int a, b;
	
	cout << "Masukkan bayas nilai akhir daret bilangan ganjir : ";
	cin >> b;
	
	for(a = 1; a <= b; a+=2){
		cout << a;
	}
}
