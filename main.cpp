#include <iostream>

void IsPrime(const int num) {
    bool isPrime = true;
    for (int i = 2; i < num; i++)
        if (num % i == 0) {
            isPrime = false;
            break;
        }

    if (isPrime && num != 1)
        std::cout << "Jest pierwsza";
    else
        std::cout << "NIE jest pierwsza";
}

int main() {
    int num = 0;
    std::cout << "Podaj liczbe: ";
    std::cin >> num;
    IsPrime(num);

    return 0;
}