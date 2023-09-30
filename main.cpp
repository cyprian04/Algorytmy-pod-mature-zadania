#include <iostream>
int main() {
	int a1, r, n, an;

	std::cout << "Podaj wartosc pierwszego wyrazu ciagu arytmetycznego: ";
	std::cin >> a1;
	std::cout << "Podaj r ciagu arytmetycznego: ";
	std::cin >> r;
	std::cout << "Podaj n-ty wyraz do obliczenia: ";
	std::cin >> n;

	an = a1 + (n - 1) * r;
	std::cout <<"wartosc wyrazu a"<< n <<" = "<< an;
	std::cout << "\nwartosc sumy pierwszych " << n << " wyrazow = " << ((a1 + an) / 2) * n;
	return 0;
}