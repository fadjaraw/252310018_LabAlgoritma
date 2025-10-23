#include <iostream>
using namespace std;

int main() {
	int a, i;

	cout << "Masukkan Bilangan : ";
	cin >> a;
	
	if (a < 2) {
		cout << "Bukan Termasuk bilangan prima";
	}

	for (i = 2; i < a; i++) {
		if(a % i == 0){
			cout << "Bukan bilangan prima";
		}
	}
	cout << "Merupakan bilangan prima" << endl;
	
	return 0;
}
