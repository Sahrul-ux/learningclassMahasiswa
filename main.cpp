#include <iostream>

using namespace std;

class Mahasiswa{
public:
    string nama;
    string NIM;
    string jurusan;
    float IPK;
};



int main()
{
    Mahasiswa data1;
    data1.nama = "ucup";
    data1.NIM = "1855201092";
    data1.jurusan = "teknik mesin";
    data1.IPK = 2.75;
    Mahasiswa data2;
    data2.nama = "galih";
    data2.NIM = "1855201093";
    data2.jurusan = "teknik industri";
    data2.IPK = 2.80;

    cout << "nama dari data1 : " << data1.nama << endl;
    cout << "NIM dari data1 : " << data1.NIM << endl;
    cout << "Jurusan dari data1 : " << data1.jurusan << endl;
    cout << "IPK dari data1 : " << data1.IPK << endl;
    cout << "\n" << endl;
    cout << "nama dari data2 : " << data2.nama << endl;
    cout << "NIM dari data2 : " << data2.NIM << endl;
    cout << "Jurusan dari data2 : " << data2.jurusan << endl;
    cout << "IPK dari data2 : " << data2.IPK << endl;

    cin.get();
    return 0;
}

