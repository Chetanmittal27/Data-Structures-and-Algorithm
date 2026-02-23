#include<iostream>
using namespace std;

void update (int n){                  // pass by value
    n++;
}

void update2(int &n){                 // pass by reference
    n++;
}

int main(){
/*
    int i = 5;
    int &j = i;

    cout<< i << " " << j << endl;
    i++;
    cout<< i << " " << j << endl;
    i++;
    cout<< i << " " << j << endl;
    j++;
    cout<< i << " " << j << endl;
*/  
    
    int n = 5;
    cout<<"before" << " "<<n<<endl;
    update2(n);
    cout<<"after" << " "<<n;
}