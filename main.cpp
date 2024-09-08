#include <iostream>
#include <cstring>
using namespace std;

struct Encryption{
    string encryption;
    char plaintext[200];
    char ciphertext[200];
    int key;
};

int main()
{
    char username[20], password[20];
    const char* default_username = "admin";
    const char* default_password = "admin";
    int options;
    char choice;

    Encryption e;

    cout << "Security System" << endl;
    cout << "---------------------------------------------------------" << endl;
    
    cout << "Enter the username: " << endl;
    cin >> username;
    
    cout << "Enter the password: " << endl;
    cin >> password;

    if (strcmp(username, default_username) == 0 && strcmp(password, default_password) == 0){
        cout << "Welcome to the system" << endl;
        
        do{
            cout << "Select an option" << endl;
            cout << "1. Encryption \t 2. Decryption \t 3. Exit" << endl;
            cin >> options;

            switch (options){
            case 1:
                cout << "Enter the encryption key: " << endl;
                cin >> e.key;
                cout << "Enter the plain text: " << endl;
                cin.ignore();
                cin.getline(e.plaintext, 200);
                e.encryption.clear();

                for (int i = 0; i < strlen(e.plaintext); i++){
                    e.encryption += char(int(e.plaintext[i]) + e.key);
                }
                cout << "The encrypted text is: \n" << e.encryption << endl;

                break;
            case 2:
                cout << "Enter the encryption key: " << endl;
                cin >> e.key;
                cout << "Enter the cipher text: " << endl;
                cin.ignore();
                cin.getline(e.ciphertext, 200);
                e.encryption.clear();

                for (int i = 0; i < strlen(e.ciphertext); i++){
                    e.encryption += char(int(e.ciphertext[i]) - e.key);
                }
                cout << "The decrypted text is: \n" << e.encryption << endl;
                break;
            case 3:
                cout << "You will be exited..." << endl;
                exit(0);
                break;
            default:
                cout << "Invalid option" << endl;
                break;
            }
            cout << "Do you want to continue? (Y/N)" << endl;
            cin >> choice;
        } while (choice == 'Y' || choice == 'y');
    }
    else{
        cout << "Invalid username or password" << endl;
    }

    return 0;
}
