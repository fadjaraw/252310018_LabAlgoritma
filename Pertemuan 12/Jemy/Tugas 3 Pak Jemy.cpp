#include <iostream>
#include <string>
using namespace std;

void baliktext(string text, string &hasil);

int main()
{
	string text, hasil;
	int i, jml_hrf = 0;
	
    cout << "Masukkan sebuah kalimat : ";
    getline(cin, text);


    for(i = 0; text[i] != '\0'; i++)
	{
        if(text[i] == ' ')
		{
            jml_hrf++;
        }
    }
    
    jml_hrf++; 

    cout << "Jumlah kalimatnya adalah  " << jml_hrf << endl << endl;

    baliktext(text, hasil);

    cout << "kalimat  setelah dibalik adalah " << hasil << endl;

    if(text == hasil)
	{
        cout << "kalimat tersebut adalah palindrom." << endl;
    }
	else
	{
        cout << "kalimat tersebut bukan palindrom." << endl;
    }

    return 0;
}

void baliktext(string text, string &hasil)
{
    hasil = "";
    int panjang = 0;
    
    while(text[panjang] != '\0')
	{
        panjang++;
    }

    for(int i = panjang - 1; i >= 0; i--)
	{
        hasil += text[i];
    }
}
