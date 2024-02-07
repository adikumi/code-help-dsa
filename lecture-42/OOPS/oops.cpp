#include <iostream>
#include "hero.cpp"

int main() {
    Hero thor;
    // thor.health = 70;
    thor.setHealth(70);
    // thor.level = 'S';
    thor.setLevel('S');
    // std::cout << thor.health  << " "  << thor.level << std::endl;
    std::cout << thor.getHealth()  << " "  << thor.getLevel() << std::endl;
    std::cout << sizeof(thor) << std::endl;

    // dynamic memory allocation
    // creating a dynamic object
    Hero *ashu = new Hero;
    // ashu is the address of the object, not the object.
    // (*ashu).setHealth(1000);
    ashu->setHealth(1000);
    // (*ashu).setLevel('A');
    ashu->setLevel('A');
    std::cout << ashu->getHealth() << " " << ashu->getLevel() << std::endl;
    std::cout << sizeof(ashu) << std::endl;
    // deleting a dynamic object
    delete ashu;
    return 0;
}