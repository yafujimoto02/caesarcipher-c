#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void caesarCipher(char* plainText, int key); // pointer gives access to one caracter at at time and key is my shift value 

int main(void){
    int key=1;
    char plainText[300];

    printf("Enter shift key: ");
    scanf("%d", &key); 

    getchar(); //removes leftover newline

    printf("Enter message: ");
    fgets(plainText, sizeof(plainText), stdin); //fgets reads text from stdin and store into plainText

    plainText[strcspn(plainText, "\n")] = '\0';

    printf("Ciphered Text: ");
    caesarCipher(plainText, key);

    return 0;

}

void caesarCipher(char* plainText, int key){

    key = key % 26; //This handles if input is negative key 
    if (key < 0) {
        key += 26;
    }

    int i=0;
    char cipher;
    int cipherValue;

    while(plainText[i] != '\0'){ //loop until end of string
        if(plainText[i] >= 'a' && plainText[i] <= 'z'){ //Lowercase
            cipherValue = ((int)plainText[i] - 'a' + key) % 26 + 'a'; //shifts the letter and wrap around from z to a (if needed)
            cipher = (char)cipherValue; //converts numeric ASCII value back to a character.
            printf("%c", cipher); //prints encrypted character

        }
        else if(plainText[i] >= 'A' && plainText[i] <= 'Z'){ //Same thing for uppercase
            cipherValue = ((int)plainText[i] - 'A' + key) % 26 + 'A';
            cipher = (char)cipherValue;
            printf("%c", cipher);
        }
        else{
            printf("%c", plainText[i]); //this leaves non-lettered characters as is (for ex: ?, !)
        }
        i++; // increments the index to next chara 
        
    }
    printf("\n");
}