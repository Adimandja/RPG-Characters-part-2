/* Program name: character.cpp
 * Author: Adolphe Dimandja
 * Date last updated: 7/28/2024
 * Purpose: Implementation file for the Character base class and derived classes (Fighter, Rogue, Magician, Cleric).
 */

#include "character.h"

// Character base class constructor
Character::Character(std::string name, std::string characterClass, double HP, double MP, int strength, int dexterity, int intelligence, int speed, int endurance, int faith)
    : name(name), characterClass(characterClass), HP(HP), MP(MP), strength(strength), dexterity(dexterity), intelligence(intelligence), speed(speed), endurance(endurance), faith(faith) {}

// Fighter class
Fighter::Fighter(std::string name) : Character(name, "Fighter", 300.0, 0.0, 16, 10, 5, 8, 15, 5) {}

std::string Fighter::toString() const {
    return name + " the " + characterClass + " stats:\n" +
           "HP: " + std::to_string(HP) + "\n" +
           "MP: " + std::to_string(MP) + "\n" +
           "Strength: " + std::to_string(strength) + "\n" +
           "Dexterity: " + std::to_string(dexterity) + "\n" +
           "Intelligence: " + std::to_string(intelligence) + "\n" +
           "Speed: " + std::to_string(speed) + "\n" +
           "Endurance: " + std::to_string(endurance) + "\n" +
           "Faith: " + std::to_string(faith) + "\n";
}

// Rogue class
Rogue::Rogue(std::string name) : Character(name, "Rogue", 200.0, 0.0, 10, 16, 16, 15, 8, 5) {}

std::string Rogue::toString() const {
    return name + " the " + characterClass + " stats:\n" +
           "HP: " + std::to_string(HP) + "\n" +
           "MP: " + std::to_string(MP) + "\n" +
           "Strength: " + std::to_string(strength) + "\n" +
           "Dexterity: " + std::to_string(dexterity) + "\n" +
           "Intelligence: " + std::to_string(intelligence) + "\n" +
           "Speed: " + std::to_string(speed) + "\n" +
           "Endurance: " + std::to_string(endurance) + "\n" +
           "Faith: " + std::to_string(faith) + "\n";
}

// Magician class
Magician::Magician(std::string name) : Character(name, "Magician", 250.0, 200.0, 5, 10, 16, 16, 5, 8) {}

std::string Magician::toString() const {
    return name + " the " + characterClass + " stats:\n" +
           "HP: " + std::to_string(HP) + "\n" +
           "MP: " + std::to_string(MP) + "\n" +
           "Strength: " + std::to_string(strength) + "\n" +
           "Dexterity: " + std::to_string(dexterity) + "\n" +
           "Intelligence: " + std::to_string(intelligence) + "\n" +
           "Speed: " + std::to_string(speed) + "\n" +
           "Endurance: " + std::to_string(endurance) + "\n" +
           "Faith: " + std::to_string(faith) + "\n";
}

// Cleric class
Cleric::Cleric(std::string name) : Character(name, "Cleric", 200.0, 200.0, 5, 10, 8, 16, 5, 16) {}

std::string Cleric::toString() const {
    return name + " the " + characterClass + " stats:\n" +
           "HP: " + std::to_string(HP) + "\n" +
           "MP: " + std::to_string(MP) + "\n" +
           "Strength: " + std::to_string(strength) + "\n" +
           "Dexterity: " + std::to_string(dexterity) + "\n" +
           "Intelligence: " + std::to_string(intelligence) + "\n" +
           "Speed: " + std::to_string(speed) + "\n" +
           "Endurance: " + std::to_string(endurance) + "\n" +
           "Faith: " + std::to_string(faith) + "\n";
}
