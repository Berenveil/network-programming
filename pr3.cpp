
#include <iostream>
#include <conio.h>
#include <random>
#include <clocale>

int main() {
    setlocale(LC_ALL, "RU");

    std::random_device rd;
    std::mt19937 rnd(rd());
    std::uniform_int_distribution<int> uid(1, 6);

    int sum = 0;
    int count = 0;
    char choice;

    while (sum < 20) {
        std::cout << "Бросить кубик? (Y/N): ";
        choice = _getch();

        if (choice == 'Y' || choice == 'y') {
            int num = uid(rnd);

            sum += num;
            count++;

            std::cout << "\nВыпало: " << num;
            std::cout << "\nСумма: " << sum << "\n\n";
        }
        else if (choice == 'N' || choice == 'n') {
            std::cout << "\nИгра остановлена!\n";
            break;
        }
        else {
            std::cout << "\nНеверный символ!\n";
        }
    }

    if (sum >= 20) {
        std::cout << "Игра окончена!\n";
        std::cout << "Количество бросков: " << count;
    }

    return 0;
}
