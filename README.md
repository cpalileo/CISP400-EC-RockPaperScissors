# rockpaperscissors

Requirements Met:
Menu Display: There's a PrintMenu method within the MenuManager class which shows the options to the user.

Player Choice: The HumanPlayer class has a method PlayerChoice that prompts the player to enter their choice.

Game Loop: The Game class seems to be designed to control the gameplay. It includes methods that could be used in a loop to play the game, although the loop itself is not implemented in the main function.

Requirements Not Met:
Game Loop Until Exit: The actual game loop where the game continues until the player chooses to exit is not implemented. The main function does not contain a loop.

Random Computer Choice: The CompPlayer class has a placeholder for a RandomGenerator method, but the logic for randomly determining the computer's choice is not implemented.

Win Counting: The code has variables PlayerScore and CompScore in the Game class to keep track of the scores, but there is no logic to update these scores based on the outcomes of individual games.

Determine Winner and Display Scores: There is no implemented method for determining the winner based on the score, nor is there a method to display the final scores after exiting the game loop.

Input Validation: There is a method GetMenuChoice that includes input validation, but it is not connected to the player's choice logic in the HumanPlayer class, which lacks validation for ensuring that the input is one of the valid choices (R, P, S).

Exit Option: There is an option to quit in the menu, but there is no logic to handle this option in the code to actually exit the game loop.

Game Count: There is a GameCount variable, but it is only incremented once in the PlayGame method, which is not correctly indicative of the number of games played.

Displaying Total Number of Hands Played: There is no method or logic that displays the total number of hands played after exiting the game.

Declaring the Game Winner: There is no method or logic that declares the game winner based on the total winning hands.

Other Issues and Improvements:
The MenuManager class's GetMenuChoice function consumes an extra character after reading the choice, which could lead to unexpected behavior.

The HumanPlayer class's PlayerChoice method does not use the Choices array and does not validate if the choice is one of the expected inputs.

The Game class inherits from MenuManager, which might not be necessary and could lead to a tighter coupling of the menu display logic with the game logic.

The DisplayScore method in the Game class is declared but not defined.

The char Choices[6] in HumanPlayer could be made static since it does not change and is the same for all instances.

The HumanPlayer class's PlayerChoice method does not ensure that the choice is either 'R', 'P', or 'S'.