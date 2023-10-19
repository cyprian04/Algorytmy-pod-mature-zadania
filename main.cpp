#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int num) {
    for (int i = 2; i < num; i++)
        if (num % i == 0)
            return false;
    return (true && num != 1);
}

void swapThePrimeValues(vector<int> &vec1, vector<int> &vec2) {
    for (size_t i = 0; i < vec1.size(); i++)
        if (isPrime(vec1[i]))
            swap(vec1[i], vec2[i]);
}

int main() {
    vector<int> nums1 = { 1,2,17,4 };
    vector<int> nums2 = { 5,6,7,8 };
    cout << "mamy 2 wektory";

    cout << "\nwektor 1\n";
    for (const auto n : nums1)
        cout << n << ", ";

    cout << "\nwektor 2\n";
    for (const auto n : nums2)
        cout << n << ", ";

    cout << " \n\nPo zamienieniu w nich elementow miejscami, ktorych wartosci sa liczbami pierwszymi z wektora podanego jako pierwszy argument\n";
    swapThePrimeValues(nums1, nums2);

    cout << "\nwektor 1\n";
    for (const auto n : nums1)
        cout << n << ", ";

    cout << "\nwektor 2\n";
    for (const auto n : nums2)
        cout << n << ", ";
    return 0;
}