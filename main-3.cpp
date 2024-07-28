/* Program name: main.cpp
 * Author: Adolphe Dimandja
 * Date last updated: 7/28/2024
 * Purpose: Main program to create a dynamic array of RPG characters, prompt user for character details, and display the details of each character.
 */

#include <iostream>
#include <string>
#include "character.h"

int main() {
    int numCharacters;
    std::cout << "How many characters do you want to create? ";
    std::cin >> numCharacters;

    Character** characters = new Character*[numCharacters];

    for (int i = 0; i < numCharacters; ++i) {
        std::string name;
        int classChoice;
        
        std::cout << "Enter name for character #" << (i + 1) << ": ";
        std::cin.ignore(); // To ignore the newline character left in the buffer
        std::getline(std::cin, name);
        
        std::cout << "What character class do you want " << name << " to be?\n";
        std::cout << "1. Fighter Class\n";
        std::cout << "2. Rogue Class\n";
        std::cout << "3. Magician Class\n";
        std::cout << "4. Cleric Class\n";
        std::cin >> classChoice;

        switch (classChoice) {
            case 1:
                characters[i] = new Fighter(name);
                break;
            case 2:
                characters[i] = new Rogue(name);
                break;
            case 3:
                characters[i] = new Magician(name);
                break;
            case 4:
                characters[i] = new Cleric(name);
                break;
            default:
                std::cout << "Invalid choice. Defaulting to Fighter.\n";
                characters[i] = new Fighter(name);
                break;
        }
    }

    std::cout << "\nYour Party:\n";
    for (int i = 0; i < numCharacters; ++i) {
        std::cout << characters[i]->toString() << "\n";
    }

    for (int i = 0; i < numCharacters; ++i) {
        delete characters[i];
    }
    delete[] characters;

    return 0;
}
