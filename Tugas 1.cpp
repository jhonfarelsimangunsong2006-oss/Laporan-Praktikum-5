#include<iostream>
using namespace std;

int sum(const int a[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += a[i];
    }
    return total;
}

int minVal(const int a[], int n) {
    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}

int maxVal(const int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

double mean(const int a[], int n) {
    return (double)sum(a, n) / n;
}

int main() {
    int n;
    cout << "Masukkan jumlah array: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan " << n << " bilangan: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "nilai penjumlahan: " << sum(arr, n) << endl;
    cout << "nilai minimum: " << minVal(arr, n) << endl;
    cout << "nilai maksimum: " << maxVal(arr, n) << endl;
    cout << "nilai rata-rata: " << mean(arr, n) << endl;

    return 0;
}
