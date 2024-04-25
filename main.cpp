#include <iostream>
#include <cmath>
using namespace std;

int horner(int nums[], int degree, int x) {
    int result = 0;
    for (int i = 0; i < degree + 1; i++)
        result += nums[i] * int(pow(x, degree - i));
    return result;
}

int main() { 
    int tab[4] = { 2,1,3,9 };
    cout << horner(tab, 3, 10);
    return 0;
 }