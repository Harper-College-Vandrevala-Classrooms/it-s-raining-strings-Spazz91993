/*
Nick Spizzirri
9/29/2024
CSC122
*/

// Libraries + Headers
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Functions
void WelcomeMessage() {
    cout << "Welcome to the Super Duper Auto Sorting String List!\n"
        << "You can enter the names of businesses, or any other string, and this cool program will sort them for you.\n\n";
}

void GoodbyeMessage() {
    cout << "\nThank you for using the Super Duper Auto Sorting String List. Goodbye!\n";
}

void sortAndDisplayBusinesses(const vector<string>& businesses) {
    vector<string> sortedBusinesses = businesses;
    sort(sortedBusinesses.begin(), sortedBusinesses.end());
    cout << "\nCurrent list of strings (sorted):\n";
    for (const auto& business : sortedBusinesses) {
        cout << business << endl;
    }
    cout << endl;
}

bool askToContinue() {
    string again;
    cout << "Would you like to enter another string? (y or yes to continue, any other key to exit): ";
    getline(cin, again);
    transform(again.begin(), again.end(), again.begin(), tolower);
    return (again == "y" || again == "yes");
}