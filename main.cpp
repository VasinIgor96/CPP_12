#include <iostream>

using namespace std;

int sumRange(int a, int b) {
    // Базовий випадок: коли a дорівнює b, повертаємо a
    if (a == b) {
        return a;
    }

    // Рекурсивний виклик для a+1 та суми чисел від a+1 до b
    return a + sumRange(a + 1, b);
}

int main() {
    int a, b;

    cout << "Enter the starting number (a): ";
    cin >> a;

    cout << "Enter the ending number (b): ";
    cin >> b;

    int result = sumRange(a, b);
    cout << "The sum of numbers from " << a << " to " << b << " is: " << result << endl;

    return 0;
}
