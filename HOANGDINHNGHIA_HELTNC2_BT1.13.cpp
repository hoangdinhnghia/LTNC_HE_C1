#include <iostream>

using namespace std;

int main() {
    int n;
    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    cout << "Nhap day so (ket thuc bang so 0):" << endl;
    cin >> n;

    while (n != 0) {
        if (n > maxVal) maxVal = n;
        if (n < minVal) minVal = n;
        cin >> n;
    }

    cout << "So lon nhat: " << maxVal << endl;
    cout << "So nho nhat: " << minVal << endl;

    return 0;
}

