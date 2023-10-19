#include <iostream>
#include <vector>
using namespace std;

int silnia(int num) {
    int sum = 1;
    for (int i = 1; i <= num; i++)
        sum *= i;
    return sum;
}

vector<int> silniaN(int n) {
    vector<int> result;
    for (int i = 1; i <=n; i++) {
        int temp = silnia(i);
        result.push_back(temp);
    }
    return result;
}

int main() {
    int n = 0;
    cout << "Podaj silnie: ";
    cin >> n;

    if (n == 0) {
        cout << "1";
        return 0;
    }

    vector<int> silnia = silniaN(n);

    for (auto v : silnia)
        cout << v << " ";
    return 0;
}