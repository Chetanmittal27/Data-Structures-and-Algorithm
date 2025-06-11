#include<iostream>
using namespace std;

class Hero {

    private:
    int health;
    public:
    char level;

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    int setHealth(int h){
        health = h;
    }

    void setLevel(char l){
        level = l;
    }
};

int main(){

// Dynamic Allocation
    Hero* chetan = new Hero;
    chetan->setHealth(34);
    chetan->setLevel('B');
    cout << "health is : " << chetan -> getHealth() << endl;
    cout << "level is : " << chetan -> getLevel() << endl;

    return 0;
}