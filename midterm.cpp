/******************************************************************************
# Author:           Ty Dolyniuk
# Assignment:       CS161 Midterm
# Date:             2/8/25
# Description:      User will input player names and amount of rocks that the
#                   players have in the rock collection championship.
# Input:            Player names(string), amount of rocks per player(int)
# Output:           Outputs the placements of each player(string) and the
#                   average number of rocks that the players had combined(float).
# Sources:          Midterm specifications, zyBooks textbook
#******************************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    float NUM_PLAYERS = 3;
    string player1;
    string player2;
    string player3;
    int player1Amt = 0;
    int player2Amt = 0;
    int player3Amt = 0;
    float rockAvg = 0.0;

    cout << "Welcome to the Rock Collecting Championship!" << endl;
    cout << "Enter Player 1 name: ";
    getline(cin,player1);
    cout << "How many rocks did " << player1 << " collect?" << endl;
    cin >> player1Amt;
    if (player1Amt < 0) {
        cout << "Input is invalid. Setting amount to 0." << endl;
        player1Amt = 0;
    }

    cout << "Enter Player 2 name: ";
    getline(cin,player2);
    getline(cin,player2);
    cout << "How many rocks did " << player2 << " collect?" << endl;
    cin >> player2Amt;
    if (player2Amt < 0) {
        cout << "Input is invalid. Setting amount to 0." << endl;
        player2Amt = 0;
    }

    cout << "Enter Player 3 name: ";
    getline(cin,player3);
    getline(cin,player3);
    cout << "How many rocks did " << player3 << " collect?" << endl;
    cin >> player3Amt;
    if (player3Amt < 0) {
        cout << "Input is invalid. Setting amount to 0." << endl;
        player3Amt = 0;
    }

    if (player1Amt == player2Amt && player1Amt == player3Amt) {
        cout << "All three players tied for first place! Amazing!" << endl;
    }
    else if (player1Amt == player2Amt) {
        if (player1Amt > player3Amt) {
            cout << player1 << " and " << player2 << " have tied for first!" << endl;
            cout << player3 << " is in second place." << endl;
        }
        else if (player3Amt > player1Amt) {
            cout << player3 << " is in first place!" << endl;
            cout << player1 << " and " << player2 << " have tied for second place." << endl;
        }
    }
    else if (player2Amt == player3Amt) {
        if (player2Amt > player1Amt) {
            cout << player2 << " and " << player3 << " have tied for first!" << endl;
            cout << player1 << " is in second place." << endl;
        }
        else if (player1Amt > player2Amt) {
            cout << player1 << " is in first place!" << endl;
            cout << player2 << " and " << player3 << " have tied for second place." << endl;
        }
    }
    else if (player3Amt == player1Amt) {
        if (player3Amt > player2Amt) {
            cout << player1 << " and " << player3 << " have tied for first!" << endl;
            cout << player2 << " is in second place." << endl;
        }
        else if (player2Amt > player3Amt) {
            cout << player2 << " is in first place!" << endl;
            cout << player1 << " and " << player3 << " have tied for second place." << endl;
        }
    }
    else if (player1Amt > player2Amt && player1Amt > player3Amt) {
        cout << player1 << " is in first place!" << endl;
        if (player2Amt > player3Amt) {
            cout << player2 << " is in second place." << endl;
            cout << player3 << " is in third place." << endl;
        }
        else if (player3Amt > player1Amt) {
            cout << player3 << " is in second place." << endl;
            cout << player2 << " is in third place." << endl;
        }
    }
    else if (player2Amt > player1Amt && player2Amt > player3Amt) {
        cout << player2 << " is in first place!" << endl;
        if (player1Amt > player3Amt) {
            cout << player1 << " is in second place." << endl;
            cout << player3 << " is in third place." << endl;
        }
        else if (player3Amt > player1Amt) {
            cout << player3 << " is in second place." << endl;
            cout << player1 << " is in third place." << endl;
        }
    }
    else if (player3Amt > player1Amt && player3Amt > player2Amt) {
        cout << player3 << " is in first place!" << endl;
        if (player1Amt > player2Amt) {
            cout << player1 << " is in second place." << endl;
            cout << player2 << " is in third place." << endl;
        }
        else if (player2Amt > player1Amt) {
            cout << player2 << " is in second place." << endl;
            cout << player1 << " is in third place." << endl;
        }
    }

    rockAvg = (player1Amt + player2Amt + player3Amt) / NUM_PLAYERS;

    cout << "The average number of rocks collected by the top three players is " << fixed << setprecision(2) << rockAvg << " rocks!" << endl;
    cout << "Thank you very much for participating in the Rock Collecting Championship!" << endl;
    return 0;
}
