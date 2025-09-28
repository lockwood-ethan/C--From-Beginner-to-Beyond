// RockPaperScissors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>

int main()
{
    std::cout << "*^*^*^* Welcome to {U}[L]{T}[R]{A} {D}[E]{A}[T]{H}[M]{A}[T]{C}[H] [Rock] | [Paper] | [Scissors] *^*^*^*" << std::endl;
    std::cout << std::endl;

    std::string possibleSelections[3] = { "Rock", "Paper", "Scissors" };
    std::string playerSelection;
    int playerNum;

draw_label:
    std::cout << "The champion must select Rock, Paper, or Scissors: ";
    std::cin >> playerSelection;

    if (playerSelection != "Rock" && playerSelection != "Paper" && playerSelection != "Scissors") {
        std::cout << "Invalid hand sign" << std::endl;
        goto draw_label;
    }

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(0, 2);

    int enemySelection = distrib(gen);

    if (enemySelection == 0) {
        std::cout << "The putrid enemy slime throws Rock.";
    }
    else if (enemySelection == 1) {
        std::cout << "The disgusting opposition vomit stain throws Paper.";
    }
    else {
        std::cout << "The horrid fecal skid mark of a foe throws Scissors.";
    }

    std::cout << std::endl;

    for (int x = 0; x < possibleSelections->size(); x++ ) {
        if (playerSelection == possibleSelections[x]) {
            playerNum = x;
        }
    }

    if (playerNum == 0) {
        std::cout << "The very muscular hero throws Rock.";
    }
    else if (playerNum == 1) {
        std::cout << "The handsome, chiseled protagonist throws Paper.";
    }
    else if (playerNum == 2) {
        std::cout << "The attractively roguish champion throws Scissors";
    }

    std::cout << std::endl;
    std::cout << std::endl;

    if (enemySelection == playerNum) {
        std::cout << "Draw, try again." << std::endl;
        goto draw_label;
    }
    else {
        if (playerNum == 0 && enemySelection == 1) {
            std::cout << "Paper covers Rock, the hero loses.";
        }
        else if (playerNum == 0 && enemySelection == 2) {
            std::cout << "Rock breaks Scissors, the hero prevails!";
        }
        else if (playerNum == 1 && enemySelection == 0) {
            std::cout << "Paper covers Rock, the hero prevails!";
        }
        else if (playerNum == 1 && enemySelection == 2) {
            std::cout << "Scissors cuts Paper, the hero loses.";
        }
        else if (playerNum == 2 && enemySelection == 1) {
            std::cout << "Scissors cuts Paper, the hero prevails!";
        }
        else if (playerNum == 2 && enemySelection == 0) {
            std::cout << "Rock breaks Scissors, the hero loses.";
        }
    }


    return 0;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
