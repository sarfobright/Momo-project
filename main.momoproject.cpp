#include <iostream>
using namespace std;

int main() {
    int balance = 1000;
    int attempts = 0;
    int pin = 0000;
    int option;

    // Authentication
    cout << "Enter your PIN: ";
    cin >> pin;
    while (pin != 0000 && attempts < 3) {
        attempts++;
        cout << "Invalid PIN. Please try again: ";
        cin >> pin;
    }
    if (attempts == 3) {
        cout << "You have exceeded the maximum number of attempts. Exiting program." << endl;
        return 0;
    }

    // Menu
    while (true) {
        cout << "\nWelcome to Mobile Money Service" << endl;
        cout << "1. Check balance" << endl;
        cout << "2. Send money" << endl;
        cout << "3. Reset/change PIN" << endl;
        cout << "4. Exit" << endl;
        cout << "Select an option: ";
        cin >> option;

        switch(option) {
            case 1: // Checking balance
                cout << "Your balance is: " << balance << endl;
                break;
            case 2: // Sending money
                int amount;
                cout << "Enter the amount to send: ";
                cin >> amount;
                if (amount > balance) {
                    cout << "Insufficient balance." << endl;
                } else {
                    balance -= amount;
                    cout << "Transaction successful. Your new balance is: " << balance << endl;
                }
                break;
            case 3: // Resetting/changing PIN
                cout << "Enter your new PIN: ";
                cin >> pin;
                cout << "PIN changed successfully." << endl;
                break;
            case 4: // Exit
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid option. Please try again." << endl;
                break;
        }
    }

    return 0;
}

