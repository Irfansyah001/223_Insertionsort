#include <iostream>
using namespace std;
int n;
int arr[40];

void input() {
    while (true) {
        cout << "masukan banyaknya elemen pada array =";
        cin >> n;
        if (n <= 40)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";

        }

    }
    cout << endl;
    cout << "====================" << endl;
    cout << "masukan elemen array" << endl;
    cout << "====================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}

void insertionSort() {
    int i, j, temp;

    for (i = 1; i <= n - 1; i++) { //step 1
        temp = arr[i]; //step 2
        j = i - 1; //step 3

        while (j >= 0 && arr[j] > temp) //step 4
        {
            arr[j + 1] = arr[j]; //step 4a
            j = j - 1; //step 4b
        }
        arr[j + 1] = temp; //step 5
    }
}

void display() {
    cout << endl;
    cout << "=================================" << endl;
    cout << "element array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j] << endl; // output setiap element array pada garis baru
    }
    cout << "jumlah pass =" << n - 1 << endl; // menampilkan total angka dari elemen yang benar
    cout << endl;
}

int main()
{
    input(); //memanggil prosedur untuk menginput data
    insertionSort(); //memanggil prosedur bubbblesort untuk proses mengurutkan data
    display(); //memanggil prosedur untuk menampilkan data yang telah urut
    system("pause");

    return 0;
}

