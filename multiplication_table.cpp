#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif
int main() {


    int n;
#ifdef _WIN32
SetConsoleCP(65001);
SetConsoleOutputCP(65001);
#endif

    // Ввод числа с проверкой корректности (цикл do-while)
    do {
        std::cout << "Введите число (1-10): ";
        std::cin >> n;
    } while (n < 1 || n > 10);

    // Вывод таблицы умножения (цикл for)
    std::cout << "Таблица умножения для числа " << n << ":" << std::endl;
    for (int i = 1; i <= 10; i++) {
        std::cout << n << " x " << i << " = " << n * i << std::endl;
    }

    return 0;
}