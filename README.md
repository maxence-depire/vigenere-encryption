# Vigenere Encryption
Repo create the 📆 14/11/2023 at ⌚️ 4:34pm in 🗺 Rodez, France.
<br>By maxence-depire 👨‍💻.

## Overview

This C program implements a basic encryption technique known as a Vigenere encryption. The program takes a user-entered message and key, encrypts the message using the key, and outputs the encrypted result.

## Usage

### Compilation

To compile the program, use a C compiler such as `gcc`:

```bash
gcc vigenere.c -o vigenere
```

### Execution

Run the compiled executable:

```bash
./vigenere
```

## Code Structure

### ALPHABET PART

- `alphabet`: An array containing the English alphabet, used for mapping characters to their corresponding indices.
- `code(char c)`: Function to get the index of a letter in the alphabet.
- `letter(int c)`: Function to get the letter corresponding to a given index.

### MAIN FUNCTION

- Takes user input for the message and key.
- Encrypts the message using a substitution cipher based on the provided key.
- Outputs the encrypted message.

## Input

- The user is prompted to enter a message.
- The user is prompted to enter a key for encryption.

## Output

- The program outputs the encrypted message based on the provided key.

## Example

```
Enter your message: hello
Enter your key: secret
This is the encrypted message: vrooa
```

## Note

- The program assumes a fixed alphabet size of 26.
- The encryption process uses a simple substitution cipher, and modifications may be needed for more complex scenarios.