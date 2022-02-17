#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int health;
    int EP;
    int strength;
    int magicPower;
    int physicalDefense;
    int magicDefense;
    int speed;
    string class;
    string alignment;
    
    Character* user = new Player;
    cout << "Enter your name: ";
    cin >> name;
    user->setName(name);
    
    cout << "Select your class - (1)Mage, (2)Warrior, (3)Knight: "
    int choice;
    cin >> choice;
    switch(choice)
    {
        case 1:
	    //mage
	    break;
        case 2:
	    //warrior
	    break;
        case 3:
	    //knight
	    break;
    }

    return 0;
}
