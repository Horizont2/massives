#include <iostream>
using namespace std;

int main() {
    const int sides = 5;
    double lengths[sides];
    double perimeter;

    cout << "Введіть довжину кожної з 5 сторін п'ятикутника:\n";
    for (int i = 0; i < sides; ++i) {
        cout << "Сторона " << i + 1 << ": ";
        cin >> lengths[i];
        perimeter += lengths[i];
    }

    cout << "Периметр п'ятикутника: " << perimeter << endl;

    return 0;
}
