#include<iostream>
using namespace std;

class Hero{

    public:
        int health;
        char level;
};


int main(){

    Hero Chetan;
    
    Chetan.health = 70;
    Chetan.level = 'A';


    cout << "Health of Hero Chetan is : " << Chetan.health << endl;
    cout << "Level is : " << Chetan.level << endl;
    return 0;
}