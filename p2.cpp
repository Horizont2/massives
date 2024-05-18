#include <iostream>
using namespace std;

int main() {
    cout<< "Введіть розмір масиву: ";
    int size;
    cin>>size;
    int array[size];

    cout << "Введіть " << size << " елементів масиву:\n";
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }
    cout << "Масив у зворотному порядку:\n";
    for (int i = size - 1; i >= 0; --i) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
