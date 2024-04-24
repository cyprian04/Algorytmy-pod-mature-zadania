#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int num) {
    for (int i = 2; i < num; i++)
        if (num % i == 0)
            return false;
    return true && num != 1;
}

void swapPrimeValues(vector<int> &vec1, vector<int> &vec2) {
    for (int i = 0; i < vec1.size(); i++)
        if (isPrime(vec1[i]))
            swap(vec1[i], vec2[i]);
}

int main() { 
    int num = 0;
    int digit = 0;
    vector<int>nums1 = { 1,2,17,4 };
    vector<int>nums2 = { 5,6,7,8 };

    swapPrimeValues(nums1, nums2);

    for (const auto& n : nums1)
        cout << n << " ";
    cout << "\n\n";
    for (const auto& n : nums2)
        cout << n << " ";
    
    return 0;
 }