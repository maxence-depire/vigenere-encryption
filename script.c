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

// MAIN FUNCTION
int main () {
	// Message input.
	char message[100];
	printf("Enter your message : ");
	scanf("%s", message);
	// Key input.
	char key[100];
	int keySize = 0;
	printf("\nEnter your key : ");
	scanf("%s", key);
	for (int i; key[i] != 0; i++) {
		keySize++;
	}
	// Message encryption
	int delta = 0;
	int deltaIndex = 0;
	char result[100];
	for (int i; message[i] != 0; i++) {
		if (deltaIndex > keySize) {
			deltaIndex = 0;
		}
		delta = code(message[i]) + code(key[deltaIndex]);
		result[i] = letter(delta % 25);
		deltaIndex++;
	}
	printf("This is the crypted message : %s", result);
}
// MAIN FUNCTION
