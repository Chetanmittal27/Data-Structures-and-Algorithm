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

    Hero ramesh;

    ramesh.setHealth(40);
    
    // cout << ramesh.health << endl;
    cout << ramesh.getHealth() << endl;
    cout << ramesh.level << endl;

    return 0;
}