#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введіть кількість елементів масиву: ";
    cin >> n;
    double array[n];
    cout << "Введіть елементи масиву:\n";
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }
    // Сума від'ємних елементів
    double sumNegative = 0;
    for (int i = 0; i < n; ++i) {
        if (array[i] < 0) {
            sumNegative += array[i];
        }
    }
    // Добуток елементів між min і max
    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < n; ++i) {
        if (array[i] < array[minIndex]) {
            minIndex = i;
        }
        if (array[i] > array[maxIndex]) {
            maxIndex = i;
        }
    }
    if (minIndex > maxIndex) {
        int temp = minIndex;
        minIndex = maxIndex;
        maxIndex = temp;
    }
    double productBetweenMinMax = 1;
    for (int i = minIndex + 1; i < maxIndex; ++i) {
        productBetweenMinMax *= array[i];
    }
    // Добуток елементів з парними номерами
    double productEvenIndex = 1;
    for (int i = 0; i < n; i += 2) {
        productEvenIndex *= array[i];
    }
    // Сума елементів між першим і останнім від'ємними елементами
    int firstNegative = -1, lastNegative = -1;
    for (int i = 0; i < n; ++i) {
        if (array[i] < 0) {
            if (firstNegative == -1) {
                firstNegative = i;
            }
            lastNegative = i;
        }
    }
    double sumBetween = 0;
    if (firstNegative != -1 && lastNegative != -1 && firstNegative != lastNegative) {
        for (int i = firstNegative + 1; i < lastNegative; ++i) {
            sumBetween += array[i];
        }
    }
    cout << "Сума від'ємних елементів: " << sumNegative << endl;
    cout << "Добуток елементів між min і max: " << productBetweenMinMax << endl;
    cout << "Добуток елементів з парними номерами: " << productEvenIndex << endl;
    cout << "Сума елементів між першим і останнім від'ємними елементами: " << sumBetween << endl;

    return 0;
}