/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution {
  public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) {
        // code here
        Node* slow = head;
        Node* fast = head;
        
        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
            
            if(slow == fast){
                break;
            }
        }
        
        if(slow != fast){
            return;
        }
        
        slow = head;
        
        if(slow == fast){
            while(fast -> next != slow){
                fast = fast -> next;
            }
            fast -> next = nullptr;
        }
        
        else{
            while(slow -> next != fast -> next){
                slow = slow -> next;
                fast = fast -> next;
            }
            
            fast -> next = nullptr;
        }
    }
};