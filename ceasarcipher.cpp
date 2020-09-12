#include <iostream>
#include <string>
#include <limits>
#include <cctype>

using namespace std;

int main() {

	// PRACTICE ASSIGNMENT 2: QUESTION 2: CEASAR CIPHER ENCRYPT/DECRYPT
	// Declare variables, initialize values

	string input, encrypt, decrypt;
	char letter;	// use this for calculations on each letter of the string
	int option(0),key(5);		// preset key for ceasar cipher, given in problem key=5;

	cout << "Ceasar Cipher Cryptography Program" << endl;

	while (true) {								// Selection choice loop
		cout << "1. Encrypt" << endl;
		cout << "2. Decrypt" << endl;
		cout << "3. **EXIT**" << endl;
		cout << "ENTER SELECTION: ";
		cin >> option;

		if (option == 1) {						// ENCRYPTION PART
			cout << "*ENCRYPT OPTION SELECTED*" << endl;
			cout << "ENTER MESSAGE TO ENCRYPT: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');	// clear buffer
			getline(cin, input);

			encrypt = "";						// initialize empty encrypt string

			for (int i = 0;i < input.length();i++) {		// Cipher conversion, only do letters,  make upper case, leave symbols
				input[i] = toupper(input[i]);				// make char in string upper case... returns input char if n/a
				if (input[i] >= 65 && input[i] <= 90) {
					letter = (input[i] - 65 + key) % 26 + 65;
					encrypt = encrypt + letter;			// add encrypted letter to string 
				}
				else encrypt = encrypt + input[i];
			}

			cout << endl;
			cout << "THE ENCRYPTED MESSAGE IS: " << encrypt << endl;		// output the encrypted message
		}
		else if (option == 2) {					// DECRYPTION PART
			cout << "*DECRYPT OPTION SELECTED*" << endl;
			cout << "ENTER MESSAGE TO DECRYPT: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');	// clear buffer
			getline(cin, input);

			decrypt = "";						// initialize empty encrypt string

			for (int i = 0;i < input.length();i++) {	// Cipher conversion, only do letters,  make upper case, leave symbols
				input[i] = toupper(input[i]);				// make char in string upper case... returns input char if n/a
				if (input[i] >= 65 && input[i] <= 90) {
					letter = (90 + input[i] - key + 1) % 26 + 65;
					decrypt = decrypt + letter;				// add encrypted letter to string 
				}
				else decrypt = decrypt + input[i];
			}

			cout << endl;
			cout << "THE DECRYPTED MESSAGE IS: " << decrypt << endl;		// output the encrypted message
		}
		else if (option == 3) break;
		else cout << "\n*INVALID SELECTION - SELECT AGAIN*" << endl;
		cout << endl;
	}

	cout << "\n***THANK YOU FOR USING THIS CIPHER PROGRAM!***" << endl;

	return 0;
} 