#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilaiakhir;
};

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return (0.3*uts)+(0.4*uas)+(0.3*tugas);
}

int main()
{
    int jumlah;
    cout << "Jumlah mahasiswa:";
    cin >> jumlah;

    Mahasiswa mhs[jumlah];

    for(int i = 0; i<jumlah; i++){
        cout << "\nData mahasiswa ke-" << i+1 <<endl;
        cout << "Nama :";
        cin >> ws;
        getline(cin, mhs[i].nama);
        cout << "Nim :";
        cin >> mhs[i].nim;
        cout << "UTS :";
        cin >> mhs[i].uts;
        cout << "UAS :";
        cin >> mhs[i].uas;
        cout << "Tugas :";
        cin >> mhs[i].tugas;

        mhs[i].nilaiakhir = hitungNilaiAkhir(mhs[i].uts, mhs[i].uas, mhs[i].tugas);
    }

    cout << "\n==============================================" << endl;
    cout << "              DAFTAR NILAI MAHASISWA          " << endl;
    cout << "==============================================" << endl;

    for (int i = 0; i < jumlah; i++) {
        cout << "Data mahasiswa ke-" << i + 1 << endl;
        cout << "Nama        : " << mhs[i].nama << endl;
        cout << "NIM         : " << mhs[i].nim << endl;
        cout << "UTS         : " << mhs[i].uts << endl;
        cout << "UAS         : " << mhs[i].uas << endl;
        cout << "Tugas       : " << mhs[i].tugas << endl;
        cout << "Nilai Akhir : " << fixed << setprecision(2) << mhs[i].nilaiakhir << endl;
        cout << "----------------------------------------------" << endl;
    }

    return 0;
}
