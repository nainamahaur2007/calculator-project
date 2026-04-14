#include <iostream>
using namespace std;

int main() {
    string username = "naina";
    string password = "1234";

    string u, p;

    cout << "===== LOGIN SYSTEM =====" << endl;

    cout << "Enter username: ";
    cin >> u;

    cout << "Enter password: ";
    cin >> p;

    if(u == username && p == password) {
        cout << "Login Successful! Welcome " << u << endl;
    } else {
        cout << "Invalid Credentials! Try again." << endl;
    }

    return 0;
}