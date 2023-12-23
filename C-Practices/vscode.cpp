#include <iostream>
#include <string>
const int MAX_WEAPONS = 5; 
using namespace std;
class GameCharacter {
public:
    GameCharacter(int initialHealth, int initialArmor, const string initialWeapons[MAX_WEAPONS], int numWeapons)
        : health(initialHealth), armor(initialArmor), numWeapons(numWeapons) {
        for (int i = 0; i < numWeapons; ++i) {
            weaponInventory[i] = initialWeapons[i];
        } 
    }
    int getHealth() const {
        return health;
    }
    int getArmor() const {
        return armor;
    }
    const string* getWeaponInventory() const {
        return weaponInventory;
    }
    int getNumWeapons() const {
        return numWeapons;
    }
private:
    int health;
    int armor;
    string weaponInventory[MAX_WEAPONS];
    int numWeapons;
};

int main() {
    string initialWeapons[] = {"Sword", "Shield"};
    GameCharacter player1(100, 50, initialWeapons, 2);

    cout << "Player 1 Health: " << player1.getHealth() << endl;
    cout << "Player 1 Armor: " << player1.getArmor() << endl;
    cout << "Player 1 Weapons: ";
    const string* weapons = player1.getWeaponInventory();
    for (int i = 0; i < player1.getNumWeapons(); ++i) {
        cout << weapons[i] << " ";
    }
    cout << endl;
    return  0;
}
