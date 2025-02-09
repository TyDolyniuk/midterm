/******************************************************************************
# Author:           Ty Dolyniuk
# Assignment:       CS161 Midterm
# Date:             2/8/25
# Description:      
# Input:            (What the program asks for, and data type, e.g., string)
# Output:           (Summary of messages displayed by the program)
# Sources:          Midterm specifications, zyBooks textbook
#******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
int main() {
    int NUM_PLAYERS = 3;
    string player1;
    string player2;
    string player3;
    int player1Amt = 0;
    int player2Amt = 0;
    int player3Amt = 0;

    cout << "Welcome to the Rock Collecting Championship!" << endl;
    cout << "Enter Player 1 name: ";
    getline(cin,player1);
    cout << "How man rocks did " << player1 << " collect?" << endl;
    cin >> player1Amt;
    if (player1Amt < 0) {
        cout << "Input is invalid. Setting amount to 0." << endl;
        player1Amt = 0;
    }

    cout << "Enter Player 2 name: ";
    getline(cin,player2);
    getline(cin,player2);
    cout << "How man rocks did " << player2 << " collect?" << endl;
    cin >> player2Amt;
    if (player2Amt < 0) {
        cout << "Input is invalid. Setting amount to 0." << endl;
        player2Amt = 0;
    }

    cout << "Enter Player 3 name: ";
    getline(cin,player3);
    getline(cin,player3);
    cout << "How man rocks did " << player3 << " collect?" << endl;
    cin >> player3Amt;
    if (player3Amt < 0) {
        cout << "Input is invalid. Setting amount to 0." << endl;
        player3Amt = 0;
    }

    return 0;
}
