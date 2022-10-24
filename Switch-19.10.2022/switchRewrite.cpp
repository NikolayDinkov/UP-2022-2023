#include <iostream>

using namespace std;

int main() {
    char _;
    int grade, grade2;
    cin >> grade >> _ >> grade2;
    if (grade < 2 && grade > 6) {
        cout << "Nevalidna ocenka";
        return 0;
    }
    if (grade == 6 && grade2 != 0) {
        cout << "Nevalidna ocenka";
        return 0;
    }

    grade == 2 ? NULL : grade2 >= 50 ? grade++ : NULL;

    switch (grade) {
        case 2: cout << "Slab"; break;
        case 3: cout << "Sreden"; break;
        case 4: cout << "Dobur"; break;
        case 5: cout << "Mn. dobur"; break;
        case 6: cout << "Otliochen"; break;
        default: cout << "Nevalidna ocenka";
    }

    return 0;
}