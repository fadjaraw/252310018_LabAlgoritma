#include<iostream>
using namespace std;

int konversi(int pilihan)
{
    float suhu, hasil;
    switch(pilihan)
	{
		case 1:
            cout << "Masukkan suhu dalam Celcius: ";
            cin >> suhu;
            hasil = (suhu * 9 / 5) + 32;
            break;
        case 2:
            cout << "Masukkan suhu dalam Celcius: ";
            cin >> suhu;
            hasil = suhu * 4 / 5;
            break;
        case 3:
            cout << "Masukkan suhu dalam Celcius: ";
            cin >> suhu;
            hasil = suhu + 273;
            break;
        case 4:
            cout << "Masukkan suhu dalam Farenheit: ";
            cin >> suhu;
            hasil = (suhu - 32) * 4 / 9;
            break;
        case 5:
            cout << "Masukkan suhu dalam Farenheit: ";
            cin >> suhu;
            hasil = (suhu - 32) * 5 / 9;
            break;
        case 6:
            cout << "Masukkan suhu dalam Farenheit: ";
            cin >> suhu;
            hasil = (suhu - 32) * 5 / 9 + 273;
            break;
        case 7:
            cout << "Masukkan suhu dalam Kelvin: ";
            cin >> suhu;
            hasil = suhu - 273;
            break;
        case 8:
            cout << "Masukkan suhu dalam Kelvin: ";
            cin >> suhu;
            hasil = (suhu - 273) * 9 / 5 + 32;
            break;
        case 9:
            cout << "Masukkan suhu dalam Kelvin: K";
            cin >> suhu;
            hasil = (suhu - 273) * 4 / 5;
            break;
        case 10:
            cout << "Masukkan suhu dalam Reamur: ";
            cin >> suhu;
            hasil = suhu * 5 / 4;
            break;
        case 11:
            cout << "Masukkan suhu dalam Reamur: ";
            cin >> suhu;
            hasil = (suhu * 9 / 4) + 32;
            break;
        case 12:
            cout << "Masukkan suhu dalam Reamur: ";
            cin >> suhu;
            hasil = (suhu * 5 / 4) + 273;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
            hasil = 0;
            break;
    }
    return hasil;
}

int main(){
    int pilihan, hasil;
    cout << "Pilih konversi suhu : " << endl;
    cout << "1. Celcius ke Farenheit" << endl;
    cout << "2. Celcius ke Reamur" << endl;
    cout << "3. Celcius ke Kelvin" << endl;
    cout << "4. Farenheit ke Reamur" << endl;
    cout << "5. Farenheit ke Celcius" << endl;
    cout << "6. Farenheit ke Kelvin\n";
    cout << "7. Kelvin ke Celcius" << endl;
    cout << "8. Kelvin ke Farenheit" << endl;
    cout << "9. Kelvin ke Reamur" << endl;
    cout << "10. Reamur ke Celcius" << endl;
    cout << "11. Reamur ke Farenheit" << endl;
    cout << "12. Reamur ke Kelvin" << endl << endl;
    cout << "Masukkan pilihan (1-12) : ";
    cin >> pilihan;

    int hasilKonversi = konversi(pilihan);
    
    cout << "\nHasil Konversi : " << hasilKonversi << endl;
    return 0;
}
