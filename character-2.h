/* Program name: character.h
 * Author: Adolphe Dimandja
 * Date last updated: 7/28/2024
 * Purpose: Header file for the Character base class and derived classes (Fighter, Rogue, Magician, Cleric).
 */

#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

class Character {
protected:
    std::string name;
    std::string characterClass;
    double HP;
    double MP;
    int strength;
    int dexterity;
    int intelligence;
    int speed;
    int endurance;
    int faith;

public:
    Character(std::string name, std::string characterClass, double HP, double MP, int strength, int dexterity, int intelligence, int speed, int endurance, int faith);

    virtual ~Character() {}

    virtual std::string toString() const = 0;
};

class Fighter : public Character {
public:
    Fighter(std::string name);

    std::string toString() const override;
};

class Rogue : public Character {
public:
    Rogue(std::string name);

    std::string toString() const override;
};

class Magician : public Character {
public:
    Magician(std::string name);

    std::string toString() const override;
};

class Cleric : public Character {
public:
    Cleric(std::string name);

    std::string toString() const override;
};

#endif // CHARACTER_H
