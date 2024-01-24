#include <iostream>
#include <cmath>

//сложение двух чисел.
int add(int a, int b) {
    return a + b;
}
//вычитание одного числа из другого.
int subtract(int a, int b) {
    return a - b;
}
// умножение двух чисел
int multiply(int a, int b) {
    return a * b;
}
//деление одного числа на другое.
double divide(int a, int b) {
    return static_cast<double>(a) / b;
}
//возведение числа в степень.
double power(int base, int exponent) {
    return pow(base, exponent);
}
//вычисление квадратного корня числа.
double squareRoot(int a) {
    return sqrt(a);
}
//нахождение 1 процента от числа.
double calculatePercent(int number, int percent) {
    return number * percent / 100.0;
}
// вычисление факториала числа.
int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
// ну эт крч менюшка
int main() {
    int choice;
    
    do {
        std::cout << "1. Сложение" << std::endl;
        std::cout << "2. Вычитание" << std::endl;
        std::cout << "3. Умножение" << std::endl;
        std::cout << "4. Деление" << std::endl;
        std::cout << "5. Возведение в степень" << std::endl;
        std::cout << "6. Нахождение квадратного корня" << std::endl;
        std::cout << "7. Нахождение 1 процента от числа" << std::endl;
        std::cout << "8. Найти факториал числа" << std::endl;
        std::cout << "9. Выйти из программы" << std::endl;
        std::cout << "Выберите операцию: ";
        std::cin >> choice;
        // свичкейс - штука чтобы простой способ распределить выполнение по различным частям кода на основе значения выражения
        switch (choice) {
            case 1: {
                int a, b;
                std::cout << "Введите 1 число: ";
                std::cin >> a;
                std::cout << "Введите 2 число: ";
                std::cin >> b;
                std::cout << "Результат: " << add(a, b) << std::endl;
                break;
            }
            case 2: {
                int a, b;
                std::cout << "Введите первое число: ";
                std::cin >> a;
                std::cout << "Введите второе число: ";
                std::cin >> b;
                std::cout << "Разность: " << subtract(a, b) << std::endl;
                break;
            }
            case 3: {
                int a, b;
                std::cout << "Введите первое число: ";
                std::cin >> a;
                std::cout << "Введите второе число: ";
                std::cin >> b;
                std::cout << "Произведение: " << multiply(a, b) << std::endl;
                break;
            }
            case 4: {
                int a, b;
                std::cout << "Введите делимое: ";
                std::cin >> a;
                std::cout << "Введите делитель: ";
                std::cin >> b;
                if (b == 0) {
                    std::cout << "Ошибка: деление на ноль" << std::endl;
                } else {
                    std::cout << "Частное: " << divide(a, b) << std::endl;
                }
                break;
            }
            case 5: {
                int base, exponent;
                std::cout << "Введите основание: ";
                std::cin >> base;
                std::cout << "Введите показатель степени: ";
                std::cin >> exponent;
                std::cout << "Результат: " << power(base, exponent) << std::endl;
                break;
            }
            case 6: {
                int a;
                std::cout << "Введите число: ";
                std::cin >> a;
                std::cout << "Квадратный корень: " << squareRoot(a) << std::endl;
                break;
            }
            case 7: {
                int number, percent;
                std::cout << "Введите число: ";
                std::cin >> number;
                std::cout << "1 процент числа: " << calculatePercent(number, 1) << std::endl;
                break;
            }
            case 8: {
                int n;
                std::cout << "Введите число: ";
                std::cin >> n;
                std::cout << "Факториал числа: " << factorial(n) << std::endl;
                break;
            }
            case 9: {
                std::cout << "Программа завершена." << std::endl;
                break;
            }
        }
    }
}