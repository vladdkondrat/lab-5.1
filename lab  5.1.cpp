#include <iostream>
#include <cmath>
using namespace std;

// Прототип функції h
double h(const double a, const double b);

int main() {
    double s, t;
    cout << "s = "; cin >> s;
    cout << "t = "; cin >> t;

    // Обчислюємо вираз
    double result = (h(1, s * t) + pow(h((t + s) / (1 + pow(h(s, t), 3)), 1), 2)) / (1 + pow(h(s, t), 3));

    // Виводимо результат
    cout << "result " << result << endl;

    return 0;
}

// Визначення функції h
double h(const double a, const double b) {
    return pow(a, 2) - sin(b) * cos(a) + pow(b, 2);
}
