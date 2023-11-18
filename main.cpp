#include <iostream>
using namespace std;

int wyklad1() {
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
void encryption(string& text, int key) {
	for (size_t i = 0; i < text.length() - 2; i += 3) {
		swap(text[i], text[i + 2]);
		text[i] += 10;
		text[i + 2] += 10;
	}
}

void decryption(string& text, int key) {
	for (size_t i = 0; i < text.length() - 2; i += 3) {
		swap(text[i], text[i + 2]);
		text[i] -= 10;
		text[i + 2] -= 10;
	}
}

int wyklad13() {
	int key = 0;
	string text;

	cout << "Podaj napis: ";
	cin >> text;
	cout << "Podaj klucz: ";
	cin >> key;

	encryption(text,key);
	cout << "encryptet to: " << text;
	decryption(text,key);
	cout << "\ndecryptet to: " << text;

	return 0;
}
int main(){
  int num;
  cin>>num;
  swtich(num){
   
   case 1:
      wyklad1();
      break;
   case 13:
      wyklad13();
      break;
  }
  return 0;
}