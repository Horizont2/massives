#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout<< "Введіть розмір масиву: ";
    int size;
    cin>>size;
    int array[size];
    srand(time(0));
    cout << "Масив випадкових чисел:\n";
    for (int i = 0; i < size; ++i) {
        array[i] = rand() % 100;
        cout << array[i] << " ";
    }
    cout << endl;
    int minElement = array[0];
    int maxElement = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] < minElement) {
            minElement = array[i];
        }
        if (array[i] > maxElement) {
            maxElement = array[i];
        }
    }
    cout << "Мінімальний елемент: " << minElement << endl;
    cout << "Максимальний елемент: " << maxElement << endl;

    return 0;
}
