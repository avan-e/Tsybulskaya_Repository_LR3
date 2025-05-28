#include <iostream>
#include <limits>
using namespace std;

// Задача 1 - Нахождение наибольшей цифры
void task1() {
    long long number;
    cout << "Введите натуральное число: ";
    cin >> number;

    // Проверка корректности ввода
    if (cin.fail() || number <= 0) {
        cout << "Ошибка: Введите корректное натуральное число." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return;
    }

    int max_digit = 0;
    long long temp = number; // Сохраняем исходное число

    while (temp > 0) {
        int digit = temp % 10;
        if (digit > max_digit) {
            max_digit = digit;
        }
        temp /= 10;
    }

    cout << "Наибольшая цифра в числе " << number << ": " << max_digit << endl;
}

// Задача 2 - Нахождение наименьшей цифры
void task2() {
    long long number;
    cout << "Введите натуральное число: ";
    cin >> number;

    // Проверка корректности ввода
    if (cin.fail() || number <= 0) {
        cout << "Ошибка: Введите корректное натуральное число." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return;
    }

    int min_digit = 9;
    long long temp = number; // Сохраняем исходное число

    while (temp > 0) {
        int digit = temp % 10;
        if (digit < min_digit) {
            min_digit = digit;
        }
        temp /= 10;
    }

    cout << "Наименьшая цифра в числе " << number << ": " << min_digit << endl;
}

void menu() {
    while (true) {
        cout << "\nМеню:" << endl;
        cout << "1: Найти наибольшую цифру в записи числа" << endl;
        cout << "2: Найти наименьшую цифру в записи числа" << endl;
        cout << "0: Выход" << endl;

        int choice;
        cout << "\nВведите номер задания (0-2): ";
        cin >> choice;

        // Проверка корректности ввода
        if (cin.fail()) {
            cout << "Ошибка: Введите число от 0 до 2." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (choice) {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 0:
            cout << "Выход из программы." << endl;
            return;
        default:
            cout << "Ошибка: Введите число от 0 до 2." << endl;
            break;
        }
    }
}

int main() {
    setlocale(LC_ALL, "rus");
    menu();
    return 0;
}