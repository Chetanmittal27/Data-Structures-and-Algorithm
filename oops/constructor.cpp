#include<iostream>
using namespace std;

class Hero{

    private:
    int health;
    public:
    char level;

// creation of constructor
    public:
    Hero(){
        cout << "Constructor is called" << endl;
    }
};

int main(){
// object created statically
    cout << "Hi" << endl;
    Hero h;
    cout << "Hello" << endl;


// object created dynamically
    Hero* chetan = new Hero();
    return 0;

}