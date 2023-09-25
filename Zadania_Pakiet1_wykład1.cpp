#include <iostream>
using namespace std;

int main() {
	// ładniej by wyglądało na switchu :)
	int option;
	float num1, num2, num3;

	cout <<"= = = Wybierz jedna z opcji = = =" <<endl;
	cout <<"Oblicz Pole:"<< endl <<"1. Kwadratu" << endl <<"2. Prostokata" << endl <<"3. Trojkata" << endl;
	cout <<"Oblicz Objetosc:" << endl <<"4. Szescianu" << endl <<"5. Prostopadloscianu" << endl <<"6. Walca" << endl;
	cout <<"Opcja: ";
	cin >> option;
	
	if (option >=1 && option <=3 ) {
		if (option == 1) {
			cout <<"Podaj dlugosc boku a: ";
			cin >> num1;
			cout <<"Pole kwadratu wynosi " << num1 * num1 << " cm^2";
		}
		else if(option == 2) {
			cout <<"Podaj dlugosc boku a: ";
			cin >> num1;
			cout <<"Podaj dlugosc boku b: ";
			cin >> num2;
			cout <<"Pole prostokata wynosi " << num1 * num2 << " cm^2";
		}
		else {
			cout <<"Podaj dlugosc podstawy: ";
			cin >> num1;
			cout <<"Podaj dlugosc wysokosci: ";
			cin >> num2;
			cout <<"Pole kwadratu wynosi " << (num1 * num2)/2 <<" cm^2";
		}
	}
	else if (option >= 4 && option <= 6) {
		if (option == 4) {
			cout <<"Podaj dlugosc boku a: ";
			cin >> num1;
			cout <<"Objetosc szescianu wynosi "<< num1 * num1 * num1<<" cm^3";
		}
		else if (option == 5) {
			cout <<"Podaj dlugosc: ";
			cin >> num1;
			cout <<"Podaj szerokosc: ";
			cin >> num2;
			cout <<"Podaj wysokosci: ";
			cin >> num3;
			cout <<"Objetosc prostopadloscianu wynosi "<< num1 * num2 * num3 <<" cm^3";
		}
		else {
			cout <<"Podaj dlugos promienia podstawy: ";
			cin >> num1;
			cout <<"Podaj wysokosc walca: ";
			cin >> num2;
			cout <<"Objetosc walca wynosi "<< 3.14 *(num1 * num1)*num2 <<" cm^3";
		}
	}
	else {
		cout << "Podano zla opcje";
	}
	return 0;
}