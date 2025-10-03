#include<iostream>
using namespace std;

class Hero{

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

    char setLevel(char ch){
        level = ch;
    }
};


int main(){

    // Static Allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('B');

    cout << "Health is : " << a.getHealth() << endl;
    cout << "Level is : " << a.getLevel() << endl;


    // Dynamic Allocation
    Hero *b = new Hero;
    b -> setHealth(40);
    b -> setLevel('D');

    cout << "Health is : " << b -> getHealth() << endl;
    cout << "Level is : " << b -> getLevel() << endl;
    
    return 0;
}