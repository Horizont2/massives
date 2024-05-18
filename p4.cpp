#include <iostream>
using namespace std;

int main() {
    const int months = 12;
    double profit[months];
    int maxMonth, minMonth;
    double maxProfit, minProfit;
    cout << "Введіть прибуток фірми за кожен з 12 місяців:\n";
    for (int i = 0; i < months; ++i) {
        cout << "Місяць " << i + 1 << ": ";
        cin >> profit[i];
    }
    maxProfit = minProfit = profit[0];
    for (int i = 1; i < months; ++i) {
        if (profit[i] > maxProfit) {
            maxProfit = profit[i];
            maxMonth = i;
        }
        if (profit[i] < minProfit) {
            minProfit = profit[i];
            minMonth = i;
        }
    }
    cout << "Максимальний прибуток був у місяці " << maxMonth + 1 << ": " << maxProfit << endl;
    cout << "Мінімальний прибуток був у місяці " << minMonth + 1 << ": " << minProfit << endl;

    return 0;
}
