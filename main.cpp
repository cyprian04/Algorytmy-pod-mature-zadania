#include <iostream>

int main(){
	for (char c = 65; c < 91; c++)
		std::cout << c << " " <<char(c + 32)<<"\n";
	return 0;
}
