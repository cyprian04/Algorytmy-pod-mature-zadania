#include <iostream>

void CheckPesel(const std::string pesel_in) {
    int weight[11] = { 1, 3, 7, 9, 1, 3, 7, 9, 1, 3, 1 };
    int Sum = 0;
    int change = 0;

    for (int i = 0; i < 11; i++)
        Sum += pesel_in[i] * weight[i];
    change = Sum % 10;

    if (change == 0)
        std::cout << "Pesel jest poprawny :)";
    else
        std::cout << "Pesel nie jest poprawny :(";
}

int main() {
    std::string pesel;
    pesel.resize(11);

    for (size_t i = 0; i < pesel.length(); i++) {
        std::cout << "Podaj " << i + 1 << " cyfre peselu: ";
        std::cin >> pesel[i];
    }
    CheckPesel(pesel);

    return 0;
}