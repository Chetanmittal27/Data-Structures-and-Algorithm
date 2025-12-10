// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;

// class Node{
//     public: 
//         int data;
//         Node* left;
//         Node* right;
    
//     public:
//         Node(int d){
//             data = d;
//             left = nullptr;
//             right = nullptr;
//         }
// };

// Node* CreateBinaryTree(Node* root){

//     int val;
//     cout << "Enter the node" << endl;
//     cin >> val;

//     if(val == -1){
//         return NULL;
//     }

//     root = new Node(val);

//     cout << "Enter the node in the left of " << val << endl;
//     root -> left = CreateBinaryTree(root -> left);

//     cout << "Enter the node in the right of " << val << endl;
//     root -> right = CreateBinaryTree(root -> right);


//     return root;
// }


// vector<int>preorder(Node* root){

//     vector<int>ans;

//     if(root == NULL){
//         return ans;
//     }

//     stack<Node*>s;
//     s.push(root);

//     while(!s.empty()){

//         Node* temp = s.top();
//         s.pop();

//         ans.push_back(temp -> data);

//         if(temp -> right){
//             s.push(temp -> right);
//         }


//         if(temp -> left){
//             s.push(temp -> left);
//         }
//     }

//     return ans;
// }


// vector<int>inorder(Node* root){

//     vector<int>ans;

//     if(root == NULL) return ans;

//     stack<Node*>st;
//     Node* node = root;

//     while(true){

//         if(node != NULL){
//             st.push(node);
//             node = node -> left;
//         }

//         else{

//             if(st.empty()) break;
//             else{
//                 node = st.top();
//                 st.pop();

//                 ans.push_back(node -> data);
//                 node = node -> right;
//             }
//         }
//     }

//     return ans;
// }


// vector<int>postorder(Node* root){

//     vector<int>ans;

//     if(root == NULL) return ans;

//     stack<Node*>s;
//     Node* curr = root;

//     while(curr != NULL || !s.empty()){

//         if(curr != NULL){

//             s.push(curr);
//             curr = curr -> left;
//         }

//         else{

//             Node* temp = s.top() -> right;

//             if(temp == NULL){

//                 temp = s.top();
//                 s.pop();
//                 ans.push_back(temp -> data);

//                 while(!s.empty() && temp == s.top() -> right){

//                     temp = s.top();
//                     s.pop();
//                     ans.push_back(temp -> data);
//                 }
//             }

//             else{
//                 curr = temp;
//             }
//         }
//     }

//     return ans;
// }



// int main(){

//     Node* root = NULL;
//     root = CreateBinaryTree(root);

//     vector<int>result = inorder(root);

//     for(auto it : result){
//         cout << it << " ";
//     }


//     return 0;
// }



#include<iostream>
#include<stack>
#include<vector>

using namespace std;

class Node{

    public:
        int data;
        Node* left;
        Node* right;

    public:
        Node(int d){
            data = d;
            left = nullptr;
            right = nullptr;
        }
};


Node* CreateBinaryTree(Node* root){

    int val;
    cout << "Enter the node" << endl;
    cin >> val;

    if(val == -1){
        return NULL;
    }

    root = new Node(val);

    cout << "Enter the node in the left of the node " << val << endl;
    root -> left = CreateBinaryTree(root -> left);

    cout << "Enter the node in the right of the node " << val << endl;
    root -> right = CreateBinaryTree(root -> right);


    return root;
}


vector<int>preorder(Node* root){

    vector<int>ans;

    if(root == NULL) return ans;

    stack<Node*>stk;

    stk.push(root);

    while(!stk.empty()){

        Node* temp = stk.top();
        stk.pop();

        ans.push_back(temp -> data);

        if(temp -> right != NULL){
            stk.push(temp -> right);
        }


        if(temp -> left != NULL){
            stk.push(temp -> left);
        }
    }

    return ans;
}


vector<int>inorder(Node* root){

    vector<int>ans;

    if(root == NULL){
        return ans;
    }

    stack<Node*>stk;
    Node* node = root;

    while(true){

        if(node != NULL){
            stk.push(node);
            node = node -> left;
        }

        else{
            if(stk.empty()) break;

            else{
                node = stk.top();
                stk.pop();
                ans.push_back(node -> data);
                node = node -> right;
            }
        }
    }

    return ans;
}


vector<int>postorder(Node* root){

    vector<int>ans;

    if(root == NULL){
        return ans;
    }

    stack<Node*>s;
    Node* node = root;

    while(!s.empty() || node != NULL){

        if(node != NULL){
            s.push(node);
            node = node -> left;
        }


        else{

            Node* temp = s.top() -> right;

            if(temp == NULL){

                temp = s.top();
                s.pop();
                ans.push_back(temp -> data);

                while(!s.empty() && temp == s.top() -> right){
                    temp = s.top();
                    s.pop();
                    ans.push_back(temp -> data);
                }
            }

            else{
                node = temp;
            }
        }
    }

    return ans;
}

int main(){

    Node* root = NULL;
    root = CreateBinaryTree(root);

    vector<int>result = postorder(root);

    for(auto it : result){
        cout << it << " ";
    }


    return 0;
}