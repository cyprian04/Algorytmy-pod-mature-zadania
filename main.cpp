#include <iostream>

bool IsPrime(const int num) {
    bool isPrime = true;
    for (int i = 2; i < num; i++)
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    return isPrime && num != 1;
}

int main() {
    int num = 0;
    std::cout << "Podaj liczbe: ";
    std::cin >> num;

    if (IsPrime(num))
        std::cout << "Jest pierwsza";
    else
        std::cout << "NIE jest pierwsza";
    return 0;
}