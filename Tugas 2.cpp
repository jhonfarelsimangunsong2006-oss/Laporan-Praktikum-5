#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
vector<pair<string, int>> daftarBarang = {
    {"apel", 2000},
    {"jeruk", 1500},
    {"apel", -100},
    {"mangga", 3000},
    {"jeruk", 1500},
    {"pisang", 0},
    {"apel", 2500},
    {"mangga", 3000},
};

for (int i = 0; i < daftarBarang.size(); i++) {
    if (daftarBarang[i].second <= 0) {
        daftarBarang.erase(daftarBarang.begin() + i);
        i--;
    }
    for (int j = i + 1; j < daftarBarang.size(); j++) {
        if (daftarBarang[i].first == daftarBarang[j].first) {
            if (daftarBarang[i].second >= daftarBarang[j].second) {
                daftarBarang.erase(daftarBarang.begin() + j);
                j--;
            } else {
                daftarBarang.erase(daftarBarang.begin() + i);
                i--;
                break;
            }
        }
    }
}

cout << endl << "Daftar Barang dan Harga:" << endl;
int totalHarga = 0;
int indeksTertinggi = 0;
int indeksTerendah = 0;

for (int i = 0; i < daftarBarang.size(); i++) {
    cout << daftarBarang[i].first << "  " << daftarBarang[i].second << endl;
    totalHarga += daftarBarang[i].second;

    if (daftarBarang[i].second > daftarBarang[indeksTertinggi].second) {
        indeksTertinggi = i;
    } else if (daftarBarang[i].second < daftarBarang[indeksTerendah].second) {
        indeksTerendah = i;
    }
}

cout << endl << "Harga Rata-rata: " << totalHarga / daftarBarang.size() << endl;
cout << "Harga Tertinggi: " << daftarBarang[indeksTertinggi].second << " ("
     << daftarBarang[indeksTertinggi].first << ")" << endl;
cout << "Harga Terendah: " << daftarBarang[indeksTerendah].second << " ("
     << daftarBarang[indeksTerendah].first << ")" << endl;

return 0;
}

