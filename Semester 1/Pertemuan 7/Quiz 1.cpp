#include <iostream>
using namespace std;

int main(){
	int a, i, total = 0;
	
	for(i = 2; i <= 22; i+=2){
		if(i < 22){
			cout << i << " ";
			total += i;	
		}
	}
	
	cout << " = " << total << endl;
	
	return 0;
}
