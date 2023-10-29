#include <iostream>
#include <cmath>
using namespace std;

int polynomial(int nums[],  int size, int degree, int x) {
    int result = 0;
    for (int i = 0; i < size; i++)
       result += nums[i] * pow(x, degree-i);
    
    return result;
}

int main() {
    const int size = 4;
    int nums[size] = { 2,1,3,9 };
    int degree = 3;
    int x = 10;

    cout << "Wartosc wielomianu: " << polynomial(nums, size, degree, x);
    return 0;
}