// Given the head of a singly linked list, return the middle node of the linked list. If there are two middle nodes, return the second middle node.

// Method 1 
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/*
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        ListNode* temp = head;
        int n = 0;
        while(temp != NULL){
            n++;
            temp = temp -> next;
        }

        temp = head;

        int mid = (n / 2)  + 1;

        int cnt = 0;
        while(temp != NULL){
            cnt++;

            if(cnt == mid){
                break;
            }

            temp = temp -> next;
        }
        return temp;
    }
};
*/

// Optimal (Tortoise and Hair Method)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow;
    }
};