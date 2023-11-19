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
#include <cstdlib>
#include <ctime>
using namespace std;

class GameStats {
private: 
    int GamesPlayed = 0;
    int PlayerScore = 0;
    int CompScore = 0;

public: 
    void GameCompleted() {
        GamesPlayed++;
    }

    void PlayerScores() {
        PlayerScore++;
    }

    void CompScores() {
        CompScore++;
    }

    int GetGamesPlayed() const {return GamesPlayed; }
    int GetPlayerScore() const {return PlayerScore; }
    int GetCompScore() const {return CompScore; }
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

    void ExitGame(const GameStats& stats){
        cout << "\nAfter playing " << stats.GetGamesPlayed() << " games" << endl;
        cout << "You won " << stats.GetPlayerScore() << " times" << endl;
        cout << "And the Computer won " << stats.GetCompScore() << " times" << endl;
        cout << "Thank you for playing! Goodbye!\n" << endl;
    }


    void ClearScreen() {
        for (int i = 0; i < 100; ++i) {
            cout << '\n';
        }
    }


    void PressEnterToContinue() {
        cout << "\nPress Enter Twice to Continue...";
        cin.ignore(); 
        cin.get(); 
    }

};

class GameLogic : public GameStats, public MenuManager {
private: 
    char RandomSelect;
    char UserMove;
    char CompMove;

public: 

    // Random generate Comp move (rock, paper, scissors)
    int GenerateNumber() {
        srand(time(0));
        return rand() % 3 + 1;
    }

    char GenerateMove(){
        RandomSelect = GenerateNumber();
        if (RandomSelect == 1) {
            cout << "Computer plays: Rock" << endl;
            return 'r';
        } else if (RandomSelect == 2) {
            cout << "Computer plays: Paper" << endl;
            return 'p';
        } else if (RandomSelect == 3) {
            cout << "Computer plays: Scissors" << endl;
            return 's';
        }
    }

    // Take user input and check against Comp move to see who wins

    void DetermineWinner(char UserMove, char CompMove, GameStats& stats) {
        if (UserMove == 'r'){
            if (CompMove == 'r') {
                cout << "Tie, play again!" << endl;
            } else if (CompMove == 'p') {
                cout << "You loose!" << endl;
                stats.CompScores();
            } else if (CompMove == 's') {
                cout << "You win!" << endl;
                stats.PlayerScores();
            }
        } else if (UserMove == 'p') {
            if (CompMove == 'r') {
                cout << "You win!" << endl;
                stats.PlayerScores();
            } else if (CompMove == 'p') {
                cout << "Tie, play again!" << endl;
            } else if (CompMove == 's') {
                cout << "You loose!" << endl;
                stats.CompScores();
            }
        } else if (UserMove == 's') {
            if (CompMove == 'r') {
                cout << "You Loose!" << endl;
                stats.CompScores();
            } else if (CompMove == 'p') {
                cout << "You Win!" << endl;
                stats.PlayerScores();
            } else if (CompMove == 's') {
                cout << "Tie, Play again!" << endl;
            }            
        }
    }
};


// MAIN FUNCTION 
int main() {
    GameStats stats;
    MenuManager menu;
    GameLogic logic;
    char menuChoice;
    char userMove;
    char compMove;

    do {
        menu.ClearScreen();
        menu.TitleScreen();
        menu.PrintMenu();
        menuChoice = menu.GetMenuChoice("Enter letter of menu item: ");

        switch (menuChoice) {
            case 'R':
            case 'r':
                cout << "\n" << "You play: Rock" << endl;
                userMove = 'r';
                compMove = logic.GenerateMove();
                logic.DetermineWinner(userMove, compMove, stats);
                menu.PressEnterToContinue();
                stats.GameCompleted();
            break;

            case 'P':
            case 'p':
                cout << "\n" << "You play: Paper" << endl;
                userMove = 'p';
                compMove = logic.GenerateMove();
                logic.DetermineWinner(userMove, compMove, stats);
                menu.PressEnterToContinue();
                stats.GameCompleted();
            break;

            case 'S':
            case 's':
                cout << "\n" << "You play: Scissors" << endl;
                userMove = 's';
                compMove = logic.GenerateMove();
                logic.DetermineWinner(userMove, compMove, stats);
                menu.PressEnterToContinue();
                stats.GameCompleted();
            break;

            case 'Q':
            case 'q':
                menuChoice = 'q';
            break;
        }
     } while (
        menuChoice != 'q'
    );

    menu.ExitGame(stats);
    return 0;
};


