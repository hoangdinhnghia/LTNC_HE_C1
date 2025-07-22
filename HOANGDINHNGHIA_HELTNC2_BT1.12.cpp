#include <iostream>
using namespace std;

int main() {
    char c;
    int count = 0;
    cout << "Nhap day ky tu (ket thuc bang *): ";

    while (c != '*') {
    	cin >> c ;
        if (c == 'a') {
            count++;
        }
    }

    cout << "So luong ky tu 'a' thuong la: " << count << endl;
    return 0;
}

