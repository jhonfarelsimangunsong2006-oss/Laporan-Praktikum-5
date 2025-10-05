#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int A[3][3];
    cout << "Masukkan matriks 3x3 :\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "A[" << i + 1 << "][" << j + 1 << "] = ";
            cin >> A[i][j];
        }
    }
    int det =
        A[0][0] * (A[1][1]*A[2][2] - A[1][2]*A[2][1]) -
        A[0][1] * (A[1][0]*A[2][2] - A[1][2]*A[2][0]) +
        A[0][2] * (A[1][0]*A[2][1] - A[1][1]*A[2][0]);

    if (det == 0) {
        cout << "\nMatriks tidak memiliki invers karena determinannya 0.\n";
        return 0;
    }
    int k[3][3];
    k[0][0] =  (A[1][1]*A[2][2] - A[1][2]*A[2][1]);
    k[0][1] = -(A[1][0]*A[2][2] - A[1][2]*A[2][0]);
    k[0][2] =  (A[1][0]*A[2][1] - A[1][1]*A[2][0]);
    k[1][0] = -(A[0][1]*A[2][2] - A[0][2]*A[2][1]);
    k[1][1] =  (A[0][0]*A[2][2] - A[0][2]*A[2][0]);
    k[1][2] = -(A[0][0]*A[2][1] - A[0][1]*A[2][0]);
    k[2][0] =  (A[0][1]*A[1][2] - A[0][2]*A[1][1]);
    k[2][1] = -(A[0][0]*A[1][2] - A[0][2]*A[1][0]);
    k[2][2] =  (A[0][0]*A[1][1] - A[0][1]*A[1][0]);

    int adj[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            adj[i][j] = k[j][i];
    cout << "\nMatriks Invers :\n\n";
    for (int i = 0; i < 3; i++) {
        cout << "  ";
        for (int j = 0; j < 3; j++) {
            int pembilang = adj[i][j];
            int penyebut = det;
            if (pembilang == 0)
                cout << setw(7) << "0";
            else
                cout << setw(7) << pembilang << "/" << penyebut;
        }
        cout << "\n";
    }
    cout << "\n";

    return 0;
}


