#include <stdio.h>

int code(char c) {
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	while (c != alphabet[i]) {
		i++;
	}
	return i;
}

char letter(int c) {
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	return alphabet[c];
}

int main () {
	// Message input.
	char message[100];
	printf("Enter your message : ");
	scanf("%s", message);
	// Key input.
	char key[100];
	int keySize = 0;
	printf("\nEntrez votre clé : ");
	scanf("%s", key);
		// Count character in Key
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
	printf("Voici le message codé : %s", result);
}
