#include <iostream>
using namespace std;

int main(){
	int a = 5;
	
	//Increment dan decrement
	cout << "Nilai awal a = " << a << endl;
	
	//Pre-incremenet : a ditambah dulu, jadi 6, lalu ditampilkan
	cout << "Pre-increment -> ++a =" << ++a << endl;
	
	//Post-increment : nilai lama a=6 ditampilkan dulu, lalu a jadi 7
	cout << "Post-increment -> a++ =" << a++ << ", Sekarang a = " << a << endl;
	
	//a=7
	
	//Pre-decrement : a dikurangi dulu, jadi 6, lalu ditampilkan
	cout << "Pre-decrement -> --a =" << --a << endl;
	
	//a = 6
	
	//Pre-decrement : nilai lama a=6 ditampilkan dulu, lalu a jadi 6
	cout << "Post-decrement -> a-- =" << a-- << endl;
	
	return 0;
	
}
