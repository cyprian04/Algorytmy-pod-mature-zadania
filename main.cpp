#include <iostream>

int main() {
    std::string pesel;
    pesel.resize(11);
    int weight[11] = { 1, 3, 7, 9, 1, 3, 7, 9, 1, 3, 1};
    int Sum = 0;
    int change = 0;

    for (int i = 0; i < 11; i++) {
        std::cout << "Podaj " << i + 1 << " cyfre peselu: ";
        std::cin >> pesel[i];
        Sum += pesel[i] * weight[i];
    }
    change = Sum % 10;

    if (change == 0) 
        std::cout << "Pesel jest poprawny :)";
    else
        std::cout << "Pesel nie jest poprawny :(";
}