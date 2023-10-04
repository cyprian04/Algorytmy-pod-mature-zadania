#include <iostream>

int HowManyDigits(int num) {
    int sum = 0;
    int digit = 0;

    if (num == 0) return ++sum;

    while (num != 0) {
        digit = num % 10;
        num -= digit;
        num /= 10;
        sum++;
    }
    return sum;
}

int main() {
    int num = 0;
    std::cout << "Podaj liczbe: ";
    std::cin >> num;
    std::cout << "ilosc cyfr tej liczby to: " << HowManyDigits(num);

    return 0;
}