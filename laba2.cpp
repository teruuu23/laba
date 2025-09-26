#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int arr[size];

    // Ввод элементов массива
    cout << "Введите 10 целых чисел:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Вывод элементов массива
    cout << "Элементы массива: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Сумма элементов
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    cout << "Сумма элементов: " << sum << endl;

    // Минимальный элемент
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "Минимальный элемент: " << min << endl;

    // Сортировка пузырьком
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Обмен элементов
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Вывод отсортированного массива
    cout << "Отсортированный массив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

