#include <iostream>
#include <string>
using namespace std;

int main() {
    // Print ASCII value of a character
    char character = 'f';
    cout << int(character) << endl;

    // Convert an integer to a character
    int letter_a=97;
    cout<<char(letter_a)<<endl;

    // Encrypt a string
    string message="Hello";
    string encryption;
    int key=3;

    // Encrypt the message by shifting characters
    for (size_t i = 0; i < message.length(); i++) {
        encryption += char(int(message[i]) + key);
    }
    cout << encryption << endl;
    return 0;
}