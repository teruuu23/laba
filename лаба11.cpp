#include <iostream>
using namespace std;
int main () {

    float speed; 
    cout << "введите число скорости в км/ч";
    cin >> speed;

    if (speed < 60) {
        cout << "скорость в пределах нормы" << endl;
    }
    else if (speed >= 60 && speed <= 80) {
        cout << "вы приближаетесь к превышению скорости" << endl;
    }
    else { 
        cout << "вы превысили скорость" << endl;
    }
    return 0;
}