#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num = 0;
    vector<int> nums;
    cout << "Podaj liczbe: ";
    cin >> num;

    if (num == 0) nums.push_back(0);

    while (num != 0) {
        int digit = num % 10 ;     
        num -= digit;
        num /= 10;
   
        nums.push_back(digit);
    }

    for (size_t i = 0; i < nums.size(); i++)
        cout << nums[nums.size() - 1 - i];

    return 0;
}