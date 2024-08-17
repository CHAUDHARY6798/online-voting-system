#include <iostream>

using namespace std;

// Function to convert decimal to hexadecimal
string decimalToHexadecimal(int decimal) {
    string hexadecimal = "";
    char hexChars[] = "0123456789ABCDEF";
    while (decimal > 0) {
        hexadecimal = hexChars[decimal % 16] + hexadecimal;
        decimal /= 16;
    }
    return hexadecimal;
}

// Function to convert decimal to octal
string decimalToOctal(int decimal) {
    string octal = "";
    while (decimal > 0) {
        octal = to_string(decimal % 8) + octal;
        decimal /= 8;
    }
    return octal;
}

int main() {
    int decimal;
    int choice;

    do {
        cout << "Menu:\n";
        cout << "1. Convert Decimal to Hexadecimal\n";
        cout << "2. Convert Decimal to Octal\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter decimal number: ";
                cin >> decimal;
                cout << "Hexadecimal: 0x" << decimalToHexadecimal(decimal) << endl;
                break;
            case 2:
                cout << "Enter decimal number: ";
                cin >> decimal;
                cout << "Octal: 0" << decimalToOctal(decimal) << endl;
                break;
            case 3:
                cout << "Exiting program...\n";
                break;
                cout << "Invalid choice! Please enter a valid option.\n";
        }
    } while (choice != 3);

    return 0;
}
