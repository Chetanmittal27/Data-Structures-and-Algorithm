// Brute force approach
/*

#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
       int data;
       Node* next;
       Node* back;

    public:
       Node(int d){
        data = d;
        next = nullptr;
        back = nullptr;
       }
};

Node* createDLL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        temp -> back = mover;
        mover = mover -> next;
    }
    return head;
}

vector<vector<int>>FindPairs(Node* head , int sum){

    vector<vector<int>>result;

    Node* temp1 = head;
    while(temp1 != NULL){
        Node* temp2 = temp1 -> next;

        while(temp2 != NULL){

            if(temp1 -> data + temp2 -> data == sum){
                result.push_back({temp1 -> data , temp2 -> data});
            }

            temp2 = temp2 -> next;
        }
        temp1 = temp1 -> next;
    }
    return result;
}


int main(){
    vector<int>arr = {1,2,3,4,9};
    Node* head = createDLL(arr);

    vector<vector<int>>pairs = FindPairs(head , 5);
    for(auto it : pairs){
        cout << "(" << it[0] << "," << it[1] << ")" << " ";
    }
    return 0;
}

*/

// Better approach
/*

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Node{
    public:
       int data;
       Node* next;
       Node* back;

    public:
       Node(int d){
        data = d;
        next = nullptr;
        back = nullptr;
       }
};

Node* createDLL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        temp -> back = mover;
        mover = mover -> next;
    }
    return head;
}

vector<vector<int>>FindPairs(Node* head , int sum){

    vector<vector<int>>result;

    unordered_map<int , int>mpp;
    int i = 1;

    Node* temp = head;

    while(temp != NULL){

        int remaining = sum - temp -> data;
        
        if(mpp.find(remaining) != mpp.end()){
            result.push_back({temp -> data , remaining});
        }

        else{
            mpp.insert({temp -> data , i});
        }

        temp = temp -> next;
        i++;
    }

    return result;
}


int main(){
    vector<int>arr = {1,2,3,4,9};
    Node* head = createDLL(arr);

    vector<vector<int>>pairs = FindPairs(head , 5);
    
    for(auto pair : pairs){
        cout << "(" << pair[0] << "," << pair[1] << ")" << endl;
    }
    return 0;
}

*/

// Optimal approach
#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
       int data;
       Node* next;
       Node* back;

    public:
       Node(int d){
        data = d;
        next = nullptr;
        back = nullptr;
       }
};

Node* createDLL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        temp -> back = mover;
        mover = mover -> next;
    }
    return head;
}

vector<vector<int>>FindPairs(Node* head , int sum){

    vector<vector<int>>result;

    Node* left = head;

    Node* right = head;
    while(right -> next != NULL){
        right = right -> next;
    }

    while(left -> data < right -> data){

        if(left->data + right->data > sum){
            right = right -> back;
        }

        else if(left -> data + right -> data < sum){
            left = left -> next;
        }

        else{
            result.push_back({left -> data , right -> data});
            left = left -> next;
            right = right -> back;
        }
    }
    return result;
}


int main(){
    vector<int>arr = {1,2,3,4,9};
    Node* head = createDLL(arr);

    vector<vector<int>>pairs = FindPairs(head , 5);
    
    for(auto pair : pairs){
        cout << "(" << pair[0] << "," << pair[1] << ")" << endl;
    }
    return 0;
}

