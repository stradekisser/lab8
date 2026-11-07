#include <iostream>
#include <cstdlib>
#include <ctime>
#ifdef _WIN32
#include <windows.h>
#endif

int main() {
#ifdef _WIN32
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
#endif

    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    std::cout << "=== УГАДАЙ ЧИСЛО ===" << std::endl;
    std::cout << "Я загадал число от 1 до 100. Попробуй угадать!" << std::endl;
    std::cout << std::endl;

    do {
        std::cout << "Ваша догадка: ";
        std::cin >> guess;
        attempts++;

        if (guess < secret) {
            std::cout << "Мое число больше!" << std::endl;
        } else if (guess > secret) {
            std::cout << "Мое число меньше!" << std::endl;
        } else {
            std::cout << "Поздравляю! Вы угадали за " << attempts << " попытки!" << std::endl;
            break;
        }

        std::cout << std::endl;
    } while (true);

    return 0;
}