#include <iostream>
using namespace std;

int main() {
	int dayNum;
	//dla odmiany użycie '\n' ,czyli znak nowej lini aby nie opróżniać bufforu//
	cout << "Podaj numer dnia tygodnia:\n";
	cout <<"1. Poniedzialek\n2. Wtorek\n3. Sroda\n4. Czwartek\n5. Piatek\n6. Sobota\n7. Niedziela\n";
	cout <<"Opcja: ";
	cin >> dayNum;

	if (dayNum >= 1 && dayNum <=5) {
		cout <<"DO PRACY";
	}
	else if(dayNum == 6 || dayNum == 7) {
		cout <<"MAM WOLNE";
	}
	else {
		cout <<"Podano dzien z poza zakresu :(";
	}
	return 0;
}