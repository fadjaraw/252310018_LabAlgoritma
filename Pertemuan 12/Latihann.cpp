#include <iostream>
using namespace std;

struct databuku
{
    string nama;
    string penulis;
    string tahunterbit;
};

int main()
{
	int n;
	
	cout << "Masukkan Jumlah Data Buku : ";
	cin >> n;
    databuku jmlbuku[n];
    for(int i = 0; i < n; i++)
    {
        cout << "Masukan Data Buku Ke- "<<i+1<<":" << endl;
        cout << "Judul Buku : ";
        cin >> jmlbuku[i].nama;
        cout << "Nama Penulis : ";
        cin >> jmlbuku[i].penulis;
        cout << "Tahun Terbit : ";
        cin >> jmlbuku[i].tahunterbit;
        cout << endl;
    }
    cout << "\n\n=== DATA BUKU ===" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << "Data Buku Ke- "<< i+1 <<":" << endl;
        cout << "Nama Buku : " << jmlbuku [i].nama << endl;
        cout << "Nama Penulis : " << jmlbuku[i].penulis << endl;
        cout << "Tahun Terbit : " << jmlbuku[i].tahunterbit << endl;
        cout << endl;
    }
    
    return 0;
}
