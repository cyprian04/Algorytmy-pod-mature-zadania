#include <iostream>
using namespace std;

int getTheColumnIndex(char matrix[5][5], char sign) {
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			if (sign == matrix[i][j])
				return j;
}

int getTheRowIndex(char matrix[5][5], char sign) {
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			if (sign == matrix[i][j])
				return i;
}

bool isSignInMatrix(char matrix[5][5], char sign) {
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			if (sign == matrix[i][j])
				return true;
	return false;
}

char putSignIntoMatrix(char matrix[5][5]) {
	for (char sign = 'A'; sign <= 'Z'; sign++)
		if (!isSignInMatrix(matrix, sign) && sign != 'J')
			return sign;
	return '0';
}

bool isSignInText(string text, char wantedSign) {
	for (int i = 0; i < text.length(); i++)
		if (text[i] == wantedSign)
			return true;
	return false;
}

namespace enc {

	string getTheEcnryptetSignsDiff(char matrix[5][5], char signA, char signB) {
		string result = "";
		int signARow = getTheRowIndex(matrix, signA);
		int signACol = getTheColumnIndex(matrix, signA);
		int signBRow = getTheRowIndex(matrix, signB);
		int signBCol = getTheColumnIndex(matrix, signB);

		result += matrix[signBRow][signACol];
		result += matrix[signARow][signBCol];
		return result;
	}

	string getTheEcnryptetSignsCol(char matrix[5][5], char signA, char signB) {
		string result = "";
		int signARow = getTheRowIndex(matrix, signA);
		int signACol = getTheColumnIndex(matrix, signA);
		int signBRow = getTheRowIndex(matrix, signB);
		int signBCol = getTheColumnIndex(matrix, signB);

		signARow++;
		signBRow++;

		if (signARow > 4) signARow = 0;
		if (signBRow > 4) signBRow = 0;
		result += matrix[signARow][signACol];
		result += matrix[signBRow][signBCol];

		return result;
	}

	string getTheEcnryptetSignsRow(char matrix[5][5], char signA, char signB) {
		string result = "";
		int signARow = getTheRowIndex(matrix, signA);
		int signACol = getTheColumnIndex(matrix, signA);
		int signBRow = getTheRowIndex(matrix, signB);
		int signBCol = getTheColumnIndex(matrix, signB);

		signACol++;
		signBCol++;

		if (signACol > 4) signACol = 0;
		if (signBCol > 4) signBCol = 0;
		result += matrix[signARow][signACol];
		result += matrix[signBRow][signBCol];

		return result;
	}

	string getTheTextWithoutDuplicates(string text) {
		string distinctText = "";
		for (int i = 0; i < text.length(); i++)
			if (!isSignInText(distinctText, text[i]))
				distinctText += text[i];
		return distinctText;
	}

	string encrypt(string text, string key) {
		char matrix[5][5];
		string distinctKey = getTheTextWithoutDuplicates(key);
		string encryption = "";
		int counter = 0;

		for (int i = 0; i < 5; i++)
			for (int j = 0; j < 5; j++)
				matrix[i][j] = '0';

		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if (counter < distinctKey.length()) {
					matrix[i][j] = distinctKey[counter];
					counter++;
				}
				else matrix[i][j] = putSignIntoMatrix(matrix);
			}
		}

		for (int i = 0; i < text.length() - 1; i += 2) {
			if (getTheColumnIndex(matrix, text[i]) == getTheColumnIndex(matrix, text[i + 1]))
				encryption += getTheEcnryptetSignsCol(matrix, text[i], text[i + 1]);
			else if (getTheRowIndex(matrix, text[i]) == getTheRowIndex(matrix, text[i + 1]))
				encryption += getTheEcnryptetSignsRow(matrix, text[i], text[i + 1]);
			else
				encryption += getTheEcnryptetSignsDiff(matrix, text[i], text[i + 1]);
		}

		if (text.length() % 2 == 1)
			encryption += text[text.length() - 1];

		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++)
				cout << matrix[i][j] << " ";
			cout << endl;
		}
		return encryption;
	}

}

namespace dec {

	string getTheDecryptetSignsDiff(char matrix[5][5], char signA, char signB) {
		string result = "";
		int signARow = getTheRowIndex(matrix, signA);
		int signACol = getTheColumnIndex(matrix, signA);
		int signBRow = getTheRowIndex(matrix, signB);
		int signBCol = getTheColumnIndex(matrix, signB);

		result += matrix[signBRow][signACol];
		result += matrix[signARow][signBCol];
		return result;
	}

	string getTheEcnryptetSignsCol(char matrix[5][5], char signA, char signB) {
		string result = "";
		int signARow = getTheRowIndex(matrix, signA);
		int signACol = getTheColumnIndex(matrix, signA);
		int signBRow = getTheRowIndex(matrix, signB);
		int signBCol = getTheColumnIndex(matrix, signB);

		signARow--;
		signBRow--;

		if (signARow < 0) signARow = 4;
		if (signBRow < 0) signBRow = 4;
		result += matrix[signARow][signACol];
		result += matrix[signBRow][signBCol];

		return result;
	}

	string getTheEcnryptetSignsRow(char matrix[5][5], char signA, char signB) {
		string result = "";
		int signARow = getTheRowIndex(matrix, signA);
		int signACol = getTheColumnIndex(matrix, signA);
		int signBRow = getTheRowIndex(matrix, signB);
		int signBCol = getTheColumnIndex(matrix, signB);

		signACol--;
		signBCol--;

		if (signACol < 0) signACol = 4;
		if (signBCol < 0) signBCol = 4;
		result += matrix[signARow][signACol];
		result += matrix[signBRow][signBCol];

		return result;
	}

	string getTheTextWithoutDuplicates(string text) {
		string distinctText = "";
		for (int i = 0; i < text.length(); i++)
			if (!isSignInText(distinctText, text[i]))
				distinctText += text[i];
		return distinctText;
	}

	string decrypt(string text, string key) {
		char matrix[5][5];
		string distinctKey = getTheTextWithoutDuplicates(key);
		string encryption = "";
		int counter = 0;

		for (int i = 0; i < 5; i++)
			for (int j = 0; j < 5; j++)
				matrix[i][j] = '0';

		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if (counter < distinctKey.length()) {
					matrix[i][j] = distinctKey[counter];
					counter++;
				}
				else matrix[i][j] = putSignIntoMatrix(matrix);
			}
		}

		for (int i = 0; i < text.length() - 1; i += 2) {
			if (getTheColumnIndex(matrix, text[i]) == getTheColumnIndex(matrix, text[i + 1]))
				encryption += getTheEcnryptetSignsCol(matrix, text[i], text[i + 1]);
			else if (getTheRowIndex(matrix, text[i]) == getTheRowIndex(matrix, text[i + 1]))
				encryption += getTheEcnryptetSignsRow(matrix, text[i], text[i + 1]);
			else
				encryption += getTheDecryptetSignsDiff(matrix, text[i], text[i + 1]);
		}

		if (text.length() % 2 == 1)
			encryption += text[text.length() - 1];

		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++)
				cout << matrix[i][j] << " ";
			cout << endl;
		}
		return encryption;
	}
}

//KHRBYRTEMXA
int main() {
	string text, key;
	cout << "Podaj text: ";
	cin >> text;
	cout << "Podaj klucz: ";
	cin >> key;
	string encryptet = enc::encrypt(text, key);
	cout << text << " encryptet to: " << encryptet << endl;
	cout << encryptet << " decryptet to: " << dec::decrypt(encryptet, key);

	return 0;
}