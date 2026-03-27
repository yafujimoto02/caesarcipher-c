# Caesar Cipher implementation in C

A simple C program that encrypts and decrypts messages using the Caesar Cipher. 
Users can choose the shift key and enter a message to encrypt. 
Uppercase and lowercase letters are handled. Non-letters remain unchanged.

## Features
- Encrypts messages with a user-specified shift key
- Handles both uppercase and lowercase letters
- Preserves spaces, punctuation, and numbers
- Supports negative and large shift keys

## How to Compile
Use `gcc` to compile the program:

gcc cipher.c -o cipher
./cipher
