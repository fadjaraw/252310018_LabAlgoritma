#include <iostream>
using namespace std;

int main(){
	int i = 1, j, a = 0, b = 0, c = 0;
	
	cout << "Masukkan jumlah suku = ";
	cin >> j;
	
	while(i<=j){
		cout << c << " ";
		i++;
		if(c!=0){
			c = a + b;
		}else{
			c = 1;
		}
		a = b;
		b = c;
	}
}
