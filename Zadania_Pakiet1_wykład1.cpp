#include <iostream>
using namespace std;

int main() {
	int option = 0;
	int num1, num2;

	cout <<"= = = Wybierz jedna z opcji, aby obliczyc pole = = ="<< endl;
	cout <<"1. Kwadratu" << endl <<"2. Prostokata" << endl <<"3. Trojkata" << endl;
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
			cout << "Pole prostokata wynosi " << num1 * num2 << " cm^2";
		}
		else {
			cout <<"Podaj dlugosc podstawy: ";
			cin >> num1;
			cout <<"Podaj dlugosc wysokosci: ";
			cin >> num2;
			cout <<"Pole kwadratu wynosi " << (num1 * num2)/2 <<" cm^2";
		}
	}
	else {
		cout << "Podano zla opcje";
	}
	return 0;
}