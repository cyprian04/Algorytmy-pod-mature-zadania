#include <iostream>
using namespace std;

string hanoi(int n, char a, char b, char c) {
	if (n == 0) return "";

	string Left = hanoi(n - 1, a, c, b);
	string Right = hanoi(n - 1 , b, a, c);
	return Left + a + c + Right;
}

int main() {
	int num;
	cout << "Podaj ilosc: ";
	cin >> num;
	cout << hanoi(num, 'A', 'B', 'C');
	return 0;
}