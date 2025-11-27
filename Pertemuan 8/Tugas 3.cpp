#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char a1[20] = "Teknik";
	char a2[20] = "Informatika";
	
	cout << "Kalimat Pertama adalah = " << a1 << endl;
	cout << "Kalimat Kedua adalah = " << a2 << endl;
	
	cout << "Digabungkan menjadi = " << strcat(a1, a2);
}
