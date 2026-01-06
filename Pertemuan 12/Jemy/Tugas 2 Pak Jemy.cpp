#include <iostream>
#include <string>
using namespace std;

int main()
{
	string text;
	int i, jml_hrf = 0;
	
    cout << "Masukkan sebuah kalimat : ";
    getline(cin, text);


    for (i = 0; text[i] != '\0'; i++)
	{
        if (text[i] == ' ')
		{
            jml_hrf++;
        }
    }
    
    jml_hrf++; 

    cout << "Jumlah kalimatnya adalah  " << jml_hrf << endl;

    return 0;
}
