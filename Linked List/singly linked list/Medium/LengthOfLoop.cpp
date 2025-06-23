/*
Given the head of a singly linked list, find the length of the loop in the linked list if it exists. Return the length of the loop if it exists; otherwise, return 0.

A loop exists in a linked list if some node in the list can be reached again by continuously following the next pointer. Internally, pos is used to denote the index (0-based) of the node from where the loop starts.
Note that pos is not passed as a parameter.
*/


// Brute Force Approach
class Solution {
public:
    int findLengthOfLoop(ListNode *head) {

        ListNode* temp = head;

        unordered_map<ListNode* , int>mpp;
        int i = 1;

        while(temp != NULL){
            if(mpp.find(temp) == mpp.end()){
                mpp.insert({temp , i});
                i++;
                temp = temp -> next;
            }

            else{
                return i - mpp[temp];
            }
        }
        return 0;
    }
};



// Optimal Approach : Tortoise and Hair method
class Solution {
public:

    int length(ListNode* slow , ListNode* fast){
        int count = 1;
        while(fast -> next != slow){
            count++;
            fast = fast -> next;
        }
        return count;
    }
    
    int findLengthOfLoop(ListNode *head) {

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;

            if(slow == fast){
                return length(slow , fast);
            }
        }

        return 0;
    }
};