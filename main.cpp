#include <iostream>
#include <cmath>
using namespace std;

int polynomial(int nums[], int degree, int x) {
    if (degree == 0)
        return nums[0];
    return x * polynomial(nums, degree - 1, x) + nums[degree];
}

int main() {
    int nums[4] = { 2,1,3,9 };
    int degree = 3;
    int x = 10;

    cout << "Wartosc wielomianu: " << polynomial(nums, degree, x);
    return 0;
}