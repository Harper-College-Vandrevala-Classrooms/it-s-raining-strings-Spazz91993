/*
Nick Spizzirri
9/29/2024
CSC122
*/

// Libraries + Headers
#include <iostream>
#include <string>
#include "RainingStrings.h"
using namespace std;

// Main Space
int main() {
    vector<string> businesses;
    string businessName;
    WelcomeMessage();
    do {
        cout << "Enter the name of the business, or any string: ";
        getline(cin, businessName);  // Allows alphanumeric and special characters
        businesses.push_back(businessName);

        // Sort the list of businesses alphabetically
        sortAndDisplayBusinesses(businesses);

    } while (askToContinue());

    GoodbyeMessage();
    return 0;
}