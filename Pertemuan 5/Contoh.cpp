#include<iostream>
using namespace std;

int main(){
    int a,i,j;

    cout << "Input lebar belah ketupat = ";
    cin >> a;
    cout << endl;
    
    for(i = 0; i <=a ; i++)
    {
    	for(j = -a; j <= a; j++ )
    	{
    		if(-i < j && j < i )
    			cout << " ";
    		else
    			cout << " *";
		}
		cout << endl;
	}
	
	return 0;
}
