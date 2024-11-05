#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> nama, nomorhp, alamat, tanggal;
    vector<float> beratLaundry;
    string n, hp, al, tgl=__DATE__;
    float kg;
    int pil, h;
    const float hargaPerKg = 5000;
    char t;
    bool tes = true;

    do {
        cout << endl;
        cout << "   Projek Alpro-Laundry" << endl;
        cout << "   Kelompok 1 : Ananda Fahrizal Assidiq, Nugraha Adani, M Zamy Alfiansyah" << endl;
        cout << endl;
        cout << "=============================" << endl;
        cout << "    ==Laundry Berkah==\n";
        cout << "=============================" << endl;
        cout << " 1. Input Data Pelanggan\n";
        cout << " 2. Lihat Data Pelanggan\n";
        cout << " 3. Hapus Data Pelanggan\n";
        cout << " 4. Exit\n";
        cout << "=============================" << endl;
        cout << " Masukkan Nomor Pilihan (1-4): "; cin >> pil;
        cout << "=============================" << endl;
        cin.ignore();
        system("cls");

        switch (pil) {
        case 1:
            cout << "=============================" << endl;
            cout << "Nama Pelanggan     : "; getline(cin, n);
            nama.push_back(n);

            cout << "Nomor Hp           : "; cin >> hp; cin.ignore();
            nomorhp.push_back(hp);

            cout << "Alamat             : "; getline(cin, al);
            alamat.push_back(al);


            tanggal.push_back(tgl);

            cout << endl;
            cout << "Berat" << endl;
            cout << "(contoh: [5 kg, ketik 5], [5.5 kg, ketik 5.5]: "; cin >> kg;
            beratLaundry.push_back(kg);

            cout << "\nData Telah Ditambahkan\n";
            cout << "Kembali ke menu utama? (y/n): "; cin >> t;

            tes = (t == 'y' || t == 'Y');
            system("cls");
            break;

        case 2:
            for (int i = 0; i < nama.size(); i++)
            {
                cout << "=======================================" << endl;
                cout << endl;
                cout << " Data Pelanggan ke     : " << i + 1 << endl;
                cout << " Nama                  : " << nama[i] << endl;
                cout << " Tgl Masuk             : " << tanggal[i] << endl;
                cout << " Diskon                : 0" << endl;
                cout << " No Hp                 : " << nomorhp[i] << endl;
                cout << " Alamat                : " << alamat[i] << endl;
                cout << " Subtotal " << beratLaundry[i] << " x 5000/kg  : " << beratLaundry[i] * hargaPerKg << endl;

                cout << endl;
            }
            cout << "\nKembali ke menu utama? (y/n): "; cin >> t;

            tes = (t == 'y' || t == 'Y');
            system("cls");
            break;

        case 3:
            for (int i = 0; i < nama.size(); i++)
            {
                cout << "=======================================" << endl;
                cout << endl;
                cout << " Data Pelanggan ke     : " << i + 1 << endl;
                cout << " Nama                  : " << nama[i] << endl;
                cout << " Tgl Masuk             : " << tanggal[i] << endl;
                cout << " Diskon                : 0" << endl;
                cout << " No Hp                 : " << nomorhp[i] << endl;
                cout << " Alamat                : " << alamat[i] << endl;
                cout << " Subtotal " << beratLaundry[i] << " x 5000/kg  : " << beratLaundry[i] * hargaPerKg << endl;

                cout << endl;
            }
            cout << "\nData Pelanggan Ke Berapa Yang Ingin Dihapus? (Masukkan Angka): ";
            cin >> h;

            if (h > 0 && h <= nama.size())
            {

                nama.erase(nama.begin() + h - 1);

                nomorhp.erase(nomorhp.begin() + h - 1);

                alamat.erase(alamat.begin() + h - 1);

                cout << "\nData Pelanggan ke-" << h << " Telah Dihapus" << endl;

            } else {

                cout << "\nIndeks tidak valid!" << endl;
            }
            cout << "\nKembali ke menu utama? (y/n): "; cin >> t;
            tes = (t == 'y' || t == 'Y');
            system("cls");
            break;

        case 4:
            tes = false;
            break;

        default:
            cout << "\nPilihan yang Anda pilih tidak tersedia, Kembali ke menu utama? (y/n): "; cin >> t;

            tes = (t == 'y' || t == 'Y');
            system("cls");
            break;
        }
    } while (tes);

    cout << "Program selesai" << endl;
    return 0;
}
