#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double x, y, result;
    int choice;

    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap y: ";
    cin >> y;
    cout << "Chon phep tinh (1, 2, 3): ";
    cin >> choice;

    if (choice == 1) {
        result = (x + y) / (x * x + y * y + 1);
        cout << "Ket qua: " << result << endl;
    }
    else if (choice == 2) {
        result = exp(x) + 5 * y;
        cout << "Ket qua: " << result << endl;
    }
    else if (choice == 3) {
        result = (1 + x * x) * y;
        cout << "Ket qua: " << result << endl;
    }
    else {
        cout << "Lua chon khong hop le!" << endl;
    }

    return 0;
}

