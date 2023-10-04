#include <iostream>

std::string writeLine(std::string sign_in, int n) {
    if (n > 1)
        return writeLine(sign_in, n - 1)+sign_in;
    return sign_in;
}

int main() {
    std::string sign;
    int num = 0;

    std::cout << "Podaj znak: ";
    std::cin >> sign;
    std::cout << "Podaj ilosc razy do wypisania tego znaku: ";
    std::cin >> num;
    std::cout << writeLine(sign, num);

    return 0;
}