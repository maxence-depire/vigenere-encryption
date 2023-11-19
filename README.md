# Vigenere Cipher Implementation in C

This is a simple implementation of the Vigenere cipher in C. The Vigenere cipher is a method of encrypting alphabetic text by using a simple form of polyalphabetic substitution. The program provides options to encrypt and decrypt messages using the Vigenere cipher.

## Usage

1. **Compile the Code:**
   ```bash
   gcc vigenere.c -o vigenere
   ```

2. **Run the Program:**
   ```bash
   ./vigenere
   ```

## Features

### Alphabet Module

The code includes a module for handling the alphabet:

- `code`: Given a letter, it returns its corresponding index in the alphabet.
- `letter`: Given an index, it returns the letter in the alphabet.

### Encryption Function

The `crypt` function encrypts a user-provided message using the Vigenere cipher:

1. Takes user input for the message and key.
2. Encrypts the message based on the Vigenere cipher algorithm.
3. Prints the encrypted message.

### Decryption Function

The `uncrypt` function decrypts a user-provided message using the Vigenere cipher:

1. Takes user input for the message and key.
2. Decrypts the message based on the Vigenere cipher algorithm.
3. Prints the decrypted message.

### Main Function

The `main` function acts as the entry point of the program:

1. Presents a menu for the user to choose between encryption, decryption, or quitting.
2. Calls the corresponding function based on the user's choice.
3. The program continues to run until the user chooses to quit.

## Example

```plaintext
VIGENERE CRYPT
1 - CRYPT
2 - UNCRYPT
3 - QUIT
1
Enter your message : hello
Enter your key : key
This is the crypted message : rikvs
```

## Notes

- The program assumes that the input message and key are alphanumeric and do not contain special characters or spaces.
- The key is repeated cyclically to match the length of the message.

Feel free to modify and enhance the code based on your specific requirements or use it as a starting point for more advanced cryptographic implementations.