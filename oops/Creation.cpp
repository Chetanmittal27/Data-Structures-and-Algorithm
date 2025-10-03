#include<iostream>
using namespace std;
/*
// Creation of class
class Hero{

    int health;
};



int main(){
    
    // Creation of object
    Hero h1;                      // (h1 has some garbage value)

    cout << "size : " << sizeof(h1) << endl;
    return 0;
}

*/


// To access Hero class from different folder

#include<iostream>
#include "Hero.cpp"
using namespace std;

int main(){
    Hero h1;

    cout << "size : " << sizeof(h1) << endl;
    return 0;
}