#include<iostream>
using namespace std;

class Hero{
    
    public:
    char name[10];
    char level;
    private:
    int health;


    public:
    int getHealth(){
        return health;
    }

    void setHealth(int h){
        health = h;
    }
};

int main(){

// static allocation
    Hero chetan;


    // chetan.health = 34;
    chetan.level = 'A';

    cout << "health of chetan is : " << chetan.getHealth() << endl;
    // cout << "health is : " << chetan.health << endl;
    cout << "level is : " << chetan.level << endl;
    return 0;
}