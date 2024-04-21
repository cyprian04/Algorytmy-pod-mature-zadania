#include <iostream>
#include <fstream>

bool isPalindrom(const std::string text_in) {
	for (int i = 0; i < text_in.length(); i++)
		if (text_in[i] != text_in[text_in.length() -1-  i])
			return false;
	return true;
}

int main(){

	std::string text;
	std::fstream file;
	std::fstream saveFile;
	file.open("dane.txt");
	saveFile.open("odp1.txt");

	while (!file.eof()) {
		file >> text;
	
		if (isPalindrom(text))
			 saveFile << text << std::endl;
	}	

	file.close();
	saveFile.close();
	return 0;
}
