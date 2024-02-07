// #include <iostream>

class Hero {
    // properties
    private:
        int health;
        char level;
    public:
        int getHealth() {
            return health;
        }
        char getLevel() {
            return level;
        }
        void setHealth(int health) {
            this -> health = health;
        }
        void setLevel(char level) {
            this -> level = health;
        }
        // constructor
        Hero() {
            std::cout << "constructor called" << std::endl;
        }
};