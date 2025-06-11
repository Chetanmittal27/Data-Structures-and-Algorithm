#include<iostream>
using namespace std;

void update(int **p2){

    // p2 = p2 + 1;

    // *p2 = *p2 + 1;

    **p2 = **p2 + 1;
}

int main(){
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout<<"before updating"<<endl;
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<p2<<endl;

    update(p2);

    cout<<"after updating"<<endl;
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<p2<<endl;
}