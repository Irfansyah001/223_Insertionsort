#include <iostream>
using namespace std;
int arr[20];

void input() {
    while (true) {
        cout << "masukan banyaknya elemen pada array =";
        cin >> n;
        if (n <= 20)
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
int main()
{
    std::cout << "Hello World!\n";
}

void insertionSort() {
    int i, j, n, temp;
    int arr[40];

    for (i = 1; i <= n - 1; i++) { //step 1