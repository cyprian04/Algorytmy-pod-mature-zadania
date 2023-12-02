#include <iostream>
#include <stack>
using namespace std;

struct Move {
    int disk;
    char A, C, B;
};

string hanoi(int n) {
    stack<Move> moves;
    Move initialMove = { n, 'A', 'C', 'B' };
    moves.push(initialMove);

    string result = "";

    while (!moves.empty()) {
        Move currentMove = moves.top();
        moves.pop();

        if (currentMove.disk == 1) {
            result += currentMove.A;
            result += currentMove.C;
        }
        else {
            Move move1 = { currentMove.disk - 1, currentMove.B, currentMove.C, currentMove.A };
            moves.push(move1);

            Move move2 = { 1, currentMove.A, currentMove.C, currentMove.B };
            moves.push(move2);

            Move move3 = { currentMove.disk - 1, currentMove.A, currentMove.B, currentMove.C };
            moves.push(move3);
        }
    }
    return result;
}

int main() {
    int n;
    cout << "Podaj ilosc: ";
    cin >> n;
    cout << hanoi(n) << endl;

    return 0;
}
