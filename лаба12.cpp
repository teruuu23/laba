#include <iostream>
using namespace std;

int main() {
    int stops;
    int stoimost = 5; 
    int totalsum = 0;

    cout << "Введите количество остановок: ";
    cin >> stops;

    for (int i = 1; i <= stops; i++) {
        totalsum += stoimost;
    }

    cout << "Общая стоимость поездки: " << totalsum << " рублей" << endl;

    return 0;
}