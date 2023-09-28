#include <iostream>

int main() {
	for (int i = 1; i <= 100; i++) {
		if (i == 23) break;
		std::cout << i << std::endl;
	}	
	return 0;
}