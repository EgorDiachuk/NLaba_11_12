
#include <iostream>
#include <list>
#include <locale>
#include <windows.h>
using namespace std;

int main() {
    locale::global(std::locale("ukr"));
    SetConsoleCP(65001); // Кодування UTF-8 для вводу
    SetConsoleOutputCP(65001); // Кодування UTF-8 для виводу

    // Створення списку з дійсними числами
    list<double> numbers = { -3.2, 4.5, -1.0, 2.3, -7.8 };

    // Виведення початкового списку
    cout << "Початковий список: ";
    for (double num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Робота з ітератором
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        if (*it < 0) { // Якщо елемент від'ємний
            it = numbers.insert(next(it), 1.5); // Додаємо 1.5 після нього
        }
    }

    // Виведення списку після змін
    cout << "Список після змін: ";
    for (double num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
