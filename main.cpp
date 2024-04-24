#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int silnia(int num) {
    int result = 1;
    for (int i = 1; i < num + 1; i++)
        result *= i;
    return result;
}

vector<int> silniaN(const int n){
    vector<int> result;
    for (int i = 1; i < n + 1; i++)
        result.emplace_back(silnia(i));
    return result;
}


int main() { 
    int n = 0;
    cout << "Podaj silnie: ";
    cin >> n;
    vector<int>nums =silniaN(n);

    for (const auto& n : nums)
        cout << n << " ";

    return 0;
 }