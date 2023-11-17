/*******************************************************
# Author:           Christopher Palileo
# Professor:        Caleb Fowler
# Class:            CISP 400
# Assignment:       Rock, Paper Scissor Game (ec1)
# Semester & Date:  Spring 2023: 10/27/2023
# Description:      Rock, Paper, Scissor Game
#              
#******************************************************/

#include <iostream>
using namespace std;

class GameStats {
private: 
    int GamesPlayed = 0;
    int YourScore = 0;
    int CompScore = 0;

public: 
    // Methods go here
};

class MenuManager {
public:
    void TitleScreen() {
        cout << "   ___                  _                 ___ _                 _    " << endl;
        cout << "  / _ \\__ _  ___   /\\_/(_)_ __   __ _    / __\\ |__   ___   ___ | |__ " << endl;
        cout << " / /_)/ _` |/ _ \\  \\_ _/ | '_ \\ / _` |  / /  | '_ \\ / _ \\ / _ \\| '_ \\" << endl; 
        cout << "/ ___/ (_| | (_) |  / \\| | | | | (_| | / /___| | | | (_) | (_) | |_) |" << endl;
        cout << "\\/    \\__,_|\\___/   \\_/|_|_| |_|\\__, | \\____/|_| |_|\\___/ \\___/|_.__/ " << endl;
        cout << "                                |___/                                 " << endl;
    }

    void PrintMenu() {
        cout << "\n**** What would you like to play? ****" << endl;
        cout << "<R>ock" << endl;
        cout << "<P>aper" << endl;
        cout << "<S>cissors" << endl;
        cout << "<Q>uit" << endl;
    }

        char GetMenuChoice(string prompt) {
        char choice = 'x';
        cout << prompt;
        cin >> choice;
        while (!cin || cin.peek() != '\n') {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "\nINVALID ENTRY, TRY AGAIN." << endl;
            cin >> choice;
        }
        cin.get();
        return choice;
    }

    void ExitGame(){
        cout << "\nAfter playing " << "##" << " games" << endl;
        cout << "You won " << "##" << " times" << endl;
        cout << "And the Computer won " << "##" << " times" << endl;
        cout << "Thank you for playing! Goodbye!\n" << endl;
    }

};


// class Game:MenuManager {
// private:
//     int PlayerScore = 0;
//     int CompScore = 0;
//     int GameCount = 0;
//     int SelectMove;

// public:
//     void PlayGame(){
//         PrintMenu();

//         GameCount += 1;

//     };

//     int DisplayScore(){
//         // logic to display score
//     };
// };


// class PlayerMoves {
// private:
//     char Choices [8] = {'R', 'r', 'P', 'p', 'S', 's', 'Q', 'q'};
// public:
//     char PlayerChoice() {
//         char choice;
//         cout << "Player would you like to choose (r)ock, (p)aper, or (s)scissors" << endl;
//         cin >> choice;
//         return choice;
//     };
// };


// MAIN FUNCTION 
int main() {
    MenuManager menu;
    char menuChoice;

    do {
        menu.TitleScreen();
        menu.PrintMenu();
        menuChoice = menu.GetMenuChoice("Enter letter of menu item: ");

        switch (menuChoice) {
            case 'R':
            case 'r':
                // Do this
            break;

            case 'P':
            case 'p':
                // Do this
            break;

            case 'S':
            case 's':
                // Do this
            break;

            case 'Q':
            case 'q':
                menuChoice = 'q';
            break;
        }
     } while (
        menuChoice != 'q'
    );

    menu.ExitGame();
    return 0;
};


