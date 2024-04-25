#include <iostream>
using namespace std;

int horner(int nums[], int degree, int x) {
    if (degree > 0)
        return x * horner(nums, degree-1, x) + nums[degree] ;
              // x *( x * (x * (x * nums[0]) + nums[1]) + nums[2]) + nums[3]
    return nums[0];
}

int main() { 
    int tab[4] = { 2,1,3,9 };
    cout << horner(tab, 3, 10);
    return 0;
 }