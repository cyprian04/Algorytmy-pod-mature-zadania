#include <iostream>
using namespace std;

void printIndent(int level) {
    for (int i = 0; i < level; i++) {
        cout << "  "; // Dwa spacje na każdy poziom
    }
}

void hanoi(int n, char source, char auxiliary, char target, int level) {


    if (n == 0) return; 
    if (n == 5) cout << "level 6 HEAD\n";


    printIndent(level);
    cout << "Level " << n << ": Move disc " << n << " from " << source << " to " << target << endl;

    hanoi(n - 1, source, target, auxiliary, level + 1);


    printIndent(level);
    cout << "Level " << n << ": Move disc " << n << " from " << auxiliary << " to " << target << endl;

    hanoi(n - 1, auxiliary, source, target, level + 1);
}

int main() {
    int num;
    cout << "Podaj ilosc: ";
    cin >> num;

    hanoi(num, 'A', 'B', 'C', 1);

    return 0;
}
