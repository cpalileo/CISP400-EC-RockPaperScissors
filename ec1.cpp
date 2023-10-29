/*******************************************************
# Author:           Christopher Palileo
# Professor:        Caleb Fowler
# Class:            CISP 400
# Assignment:       Extra Credit 1: Rock Paper Scissors
# Semester & Date:  Spring 2023: 10/27/2023
# Description:      
#              
#******************************************************/

#include<iostream>
using namespace std;

class Game {
private:
    int PlayerScore;
    int CompScore;
    int GameCount;
public:
    void PlayGame(){
        // Game logic goes here
    };
    
    int DisplayScore(){
        // logic to display score
    };
};


class HumanPlayer {
private:
    char Choices ['R', 'r', 'P', 'p', 'S', 's'];
public:
    char PlayerChoice() {
        // Logic to make player choice
    }
};


class CompPlayer {
    void RandomGenerator() {
        // Logic to random generate computer move
    }
};

//function prototypes
void titleScreen();

int main() {
    titleScreen();
};

void titleScreen() {
    cout << "   ___                  _                 ___ _                 _    " << endl;
    cout << "  / _ \\__ _  ___   /\\_/(_)_ __   __ _    / __\\ |__   ___   ___ | |__ " << endl;
    cout << " / /_)/ _` |/ _ \\  \\_ _/ | '_ \\ / _` |  / /  | '_ \\ / _ \\ / _ \\| '_ \\" << endl; 
    cout << "/ ___/ (_| | (_) |  / \\| | | | | (_| | / /___| | | | (_) | (_) | |_) |" << endl;
    cout << "\\/    \\__,_|\\___/   \\_/|_|_| |_|\\__, | \\____/|_| |_|\\___/ \\___/|_.__/ " << endl;
    cout << "                                |___/                                 " << endl;
}
