﻿#include <iostream>
// zrozumiałem żeby tak wyświetlać sumę
int main() {
	int sum = 0;

	for (int i = 1; i <= 1000; i++)
		if ((i % 5 == 0) && (i % 3 == 0)) {
			sum += i;
			std::cout << i <<" Suma: "<< sum <<std::endl;
		}
	return 0;
}