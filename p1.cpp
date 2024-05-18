#include <iostream>
using namespace std;

int main() {
    const int months = 6;
    double profit[months];
    double totalProfit;
    cout << "Введіть прибуток за кожен з 6 місяців:\n";
    for (int i = 0; i < months; ++i) {
        cout << "Місяць " << i + 1 << ": ";
        cin >> profit[i];
        totalProfit += profit[i];
    }
    cout << "Загальний прибуток за 6 місяців: " << totalProfit << endl;
    return 0;
}
