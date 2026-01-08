#include "Player.h"
#include "Warrior.h"
#include "Mage.h"
#include "Priest.h"
#include <iostream>
#include <vector>

using namespace std;

void clrscr()
{
    cout << "\033[2J\033[1;1H";
}

Race getPlayerRace(int raceVal)
{
    switch (raceVal)
    {
    case 1:
        return Race::HUMAN;
        break;
    case 2:
        return Race::ELF;
        break;
    case 3:
        return Race::DWARF;
        break;
    case 4:
        return Race::ORC;
        break;
    case 5:
        return Race::TROLL;
        break;
    default:
        return Race::HUMAN;
        break;
    }
}

int main()
{
    int menuChoice;
    int profession;
    int raceVal;
    Race race;
    string name;

    vector<Player *> players;

    while (true)
    {
        clrscr();
        cout << "*****RPG GAME PLAYER CREATOR*****" << endl;
        cout << "1. Create Player" << endl;
        cout << "2. View Players" << endl;
        cout << "3. Exit" << endl;

        cout << "\nSelect an option: ";
        cin >> menuChoice;
        cin.get();

        if (menuChoice == 1)
        {
            clrscr();
            cout << "1. Warrior\n2. Priest\n3. Mage" << endl;
            cout << "Select the player profession (Type the option number):  ";
            cin >> profession;
            cin.get();
            cout << "\n1. Human\n2. Elf\n3. Dwarf\n4. Orc\n5. Troll" << endl;
            cout << "Select the player race (Type the option number): ";
            cin >> raceVal;
            cin.get();
            race = getPlayerRace(raceVal);
            cout << "Choose a player name: ";
            cin >> name;
            cin.get();
            Player *player;
            if (profession == 1)
            {
                player = new Warrior(name, race, 200, 0);
            }
            else if (profession == 2)
            {
                player = new Priest(name, race, 100, 200);
            }
            else if (profession == 3)
            {
                player = new Mage(name, race, 150, 150);
            }
            players.push_back(player);
            cout << "Player created!" << endl;
            cin.get();
        }
        else if (menuChoice == 2)
        {
            clrscr();
            if (players.size() > 0)
            {
                for (auto player : players)
                {
                    cout << "[" << player->getName() << "] I'm a " << player->whatRace() << " and my attack is: " << player->attack() << endl;
                }
            }
            else
            {
                cout << "No players in da house..." << endl;
            }
            cin.get();
        }
    }

    // cout << "You've seleced the option " << menuChoice << endl;
    return 0;
}