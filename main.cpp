#include <iostream>

bool checkPesel(const std::string pesel_in) {
    int weight[11] = { 1, 3, 7, 9, 1, 3, 7, 9, 1, 3, 1 };
    int sum = 0;
    int change = 0;

    for (int i = 0; i < 11; i++)
        sum += (pesel_in[i] - 48) * weight[i];
    change = sum % 10;

    return change == 0;
}

int main() {
    std::string pesel;
    pesel.resize(11);

    for (size_t i = 0; i < pesel.length(); i++) {
        std::cout << "Podaj " << i + 1 << " cyfre peselu: ";
        std::cin >> pesel[i];
    }

    if (checkPesel(pesel))
        std::cout << "Pesel jest poprawny :)";
    else
        std::cout << "Pesel nie jest poprawny :(";

    return 0;
}