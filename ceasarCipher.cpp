/*
Developer: Niraj Nepal
Date: 2022-09-03
Program Name: Ceaser Cipher Encryption/Decryption
Summary: This is a simple program that will encrypt and decrypt a message using the Ceaser Cipher.
Credits/Inspirations: Classical Cryptography, Absorbed example from Tutorialspoint.com and modified it to my liking.
*/

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

char encrypt(int key, char text[]) { 
     string encrypted = "";                              //Empty string to store encrypted text
    int size = strlen(text);                             //Get the size of the text
    for (int i = 0; i < size; i++) {                     //Loop through the text
        encrypted += (char)(text[i] + key);              //Add the encrypted text to the string
    }
    cout<< encrypted;
}

char decrypt(int key, char text[]) {
    string encrypted = "";                              //Empty string to store decrypted text
    int size = strlen(text);                            //Get size of the textg
    for (int i = 0; i < size; i++) {                    //Loop through text
        encrypted += (char)(text[i] - key);             //Add the encrypted text to the string
    }
    cout<< encrypted;
}


int main(){
    cout << "Enter your message" << endl;
    char secret_msg[100];                               //Char array to store the message
    cin >> secret_msg;
    cout << "Please choose a key" <<endl;
    int key, option;
    char E, D;
    cin >> key;

    int size = strlen(secret_msg);
    cout << "Would you like to encrypt[ENTER 1] or decrypt[ENTER 2]?" << endl;
    cin >> option;
    if (option == 1) {
        E = encrypt(key, secret_msg);
    } else if (option == 2) {
        D = decrypt(key, secret_msg);
    }

   return 0;

}
