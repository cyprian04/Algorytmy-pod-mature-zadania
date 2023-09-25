#include <iostream>
using namespace std;

int main() {
	int option = 0;

	cout <<"= = = Wybierz jedna z opcji, aby obliczyc pole = = ="<< endl;
	cout <<"1. Kwadratu" << endl <<"2. Prostokata" << endl <<"3. Trojkata" << endl;
	cout <<"Opcja: ";
	cin >> option;

	if (option >= 1 && option <= 3) {	
		cout << "Wybrano obliczanie pola ";
		if (option == 1){
			cout <<"kwadratu";
		}
		else if (option == 2) {
			cout << "prostokata";
		}
		else{
			cout << "trojkata";
		}
	}
	else {
		cout << "Podano zla opcje";
	}
}