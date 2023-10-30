/*******************************************************
# Author:           Christopher Palileo
# Professor:        Caleb Fowler
# Class:            CISP 400
# Assignment:       Rock, Paper Scissor Game (ec1)
# Semester & Date:  Spring 2023: 10/27/2023
# Description:      Rock, Paper, Scissor Game
#              
#******************************************************/

#include<iostream>
using namespace std;

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
        cout << "\n**** Main Menu ****" << endl;
        cout << "<A>dd Inventory" << endl;
        cout << "<D>elete Inventory" << endl;
        cout << "<E>dit Inventory" << endl;
        cout << "<P>rint Inventory" << endl;
        cout << "<Q>uit Program" << endl;
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

};

class HumanPlayer {
private:
    char Choices [6] = {'R', 'r', 'P', 'p', 'S', 's'};
public:
    char PlayerChoice() {
        char choice;
        cout << "Player would you like to choose (r)ock, (p)aper, or (s)cissors" << endl;
        cin >> choice;
        return choice;
    };
};


class Game:MenuManager {
private:
    int PlayerScore = 0;
    int CompScore = 0;
    int GameCount = 0;
    int SelectMove;
public:

    void PlayGame(){
        PrintMenu();
        GameCount += 1;

    };

    int DisplayScore(){
        // logic to display score
    };
};




class CompPlayer {
    void RandomGenerator() {
        // Logic to random generate computer move
    }
};


// MAIN FUNCTION 
int main() {
    MenuManager menu;
    Game game;

    menu.TitleScreen();
    game.PlayGame();
};


