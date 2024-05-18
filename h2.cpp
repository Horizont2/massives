#include <iostream>
using namespace std;

int main() {
    const int months = 12;
    double profit[months];
    int startRange, endRange;
    cout << "Введіть прибуток фірми за кожен з 12 місяців: "<< endl;
    for (int i = 0; i < months; ++i) {
        cout << "Місяць " << i + 1 << ": ";
        cin >> profit[i];
    }
    cout << "Введіть початок діапазону (від 1 до 12): ";
    cin >> startRange;
    cout << "Введіть кінець діапазону (від 1 до 12): ";
    cin >> endRange;
    
    startRange--;
    endRange--;

    int maxMonth = startRange, minMonth = startRange;
    double maxProfit = profit[startRange], minProfit = profit[startRange];
    for (int i = startRange + 1; i <= endRange; ++i) {
        if (profit[i] > maxProfit) {
            maxProfit = profit[i];
            maxMonth = i;
        }
        if (profit[i] < minProfit) {
            minProfit = profit[i];
            minMonth = i;
        }
    }
    cout << "Максимальний прибуток у діапазоні був у місяці " << maxMonth + 1 << ": " << maxProfit << endl;
    cout << "Мінімальний прибуток у діапазоні був у місяці " << minMonth + 1 << ": " << minProfit << endl;

    return 0;
}
