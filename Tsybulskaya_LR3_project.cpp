#include <iostream>
#include <climits> // Для использования INT_MAX и INT_MIN

using namespace std;

// Прототип функции для задачи о цифрах числа
void FindMinMaxDigits();

int main() {
    int choice;
    
    do {
        cout << "Task 1. Найти наибольшую и наименьшую цифру в числе" << endl;
        cout << "Task 2. Другая функция (пример)" << endl;
        cout << "Please enter the number of the desired function or 0 if you want to close the app: ";
        
        cin >> choice;
        
        switch(choice) {
            case 0:
                cout << "Exiting the application..." << endl;
                break;
            case 1:
                FindMinMaxDigits();
                break;
            case 2:
                // Другая функция
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
        
    } while(choice != 0);
    
    return 0;
}

// Реализация функции для задачи о цифрах числа
void FindMinMaxDigits() {
    int X;
    cout << "Введите натуральное число X: ";
    cin >> X;
    
    if (X <= 0) {
        cout << "Ошибка: число должно быть натуральным (положительным)." << endl;
        return;
    }
    
    int minDigit = 9;  // Начальное значение для поиска минимума
    int maxDigit = 0;   // Начальное значение для поиска максимума
    int temp = X;       // Рабочая копия числа
    
    while (temp > 0) {
        int digit = temp % 10;  // Получаем последнюю цифру
        minDigit = (digit < minDigit) ? digit : minDigit;
        maxDigit = (digit > maxDigit) ? digit : maxDigit;
        temp /= 10;             // Убираем последнюю цифру
    }
    
    cout << "В числе " << X << ":" << endl;
    cout << "Наименьшая цифра: " << minDigit << endl;
    cout << "Наибольшая цифра: " << maxDigit << endl;
}

// Пример других функций (как в оригинале)
double EnterNumber() {
    //разрабатывается Иванович И. - ветка branch_fun_1
    return 0;
}

double CalcArea(int num_a) {
    //разрабатывается Петрович П. - ветка branch_fun_2
    return 0;
}

double CalcPerim(int num_a) {
    //разрабатывается Васильевич В. - ветка branch_fun_3
    return 0;
}