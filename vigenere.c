#include <stdio.h>

// ALPHABET PART
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
// Get letter and return id.
int code(char c) {
	int i = 0;
	while (c != alphabet[i]) {
		i++;
	}
	return i;
}
// Get letter's id and return letter.
char letter(int c) {
	return alphabet[c];
}
// ALPHABET PART

// CRYPT FUNCTION
int crypt() {
	// Message input.
	char message[100];
	printf("\nEnter your message : ");
	scanf("%s", message);
	// Key input.
	char key[100];
	int keySize = 0;
	printf("Enter your key : ");
	scanf(" %s", key);
	for (int i = 0; key[i] != 0; i++) {
		keySize++;
	}
	// Message encryption
	int delta = 0;
	int deltaIndex = 0;
	char result[100];
	int i = 0;
	while (message[i] != 0) {
		if (deltaIndex+1 > keySize) {
			deltaIndex = 0;
		}
		delta = code(message[i]) + code(key[deltaIndex]);
		result[i] = letter(delta % 25);
		i++;
		deltaIndex++;
	}
	result[i] = 0;
	printf("This is the crypted message : %s\n\n", result);

	return 0;
}
// CRYPT FUNCTION

// UNCRYPT FUNCTION
int uncrypt() {
	// Message Input
	char message[100];
	printf("\nEnter your message : ");
	scanf("%s", message);
	// Key input.
	char key[100];
	int keySize = 0;
	printf("Enter your key : ");
	scanf(" %s", key);
	for (int i = 0; key[i] != 0; i++) {
		keySize++;
	}
	// Message encryption
	int delta = 0;
	int deltaIndex = 0;
	char result[100];
	int i = 0;
	while (message[i] != 0) {
		if (deltaIndex+1 > keySize) {
			deltaIndex = 0;
		}
		delta = code(message[i]) - code(key[deltaIndex]);
		result[i] = letter(delta % 25);
		i++;
		deltaIndex++;
	}
	result[i] = 0;
	printf("This is the crypted message : %s\n\n", result);

	return 0;
}
// UNCRYPT FUNCTION

// MAIN FUNCTION
int main () {
	int STOP = 0;

	while (STOP == 0) {
		printf("VIGENERE CRYPT");
		printf("\n1 - CRYPT");
		printf("\n2 - UNCRYPT");
		printf("\n3 - QUIT\n");

		int choice = 0;
		scanf(" %d", &choice);

		if ( choice == 1 ) {
			crypt();
		}
		else if ( choice == 2 ) {
			uncrypt();
		}
		else if ( choice == 3 ) {
			STOP = 1;
		}
		else {
			STOP = 1;
		}
	}

	return 0;

}
// MAIN FUNCTION