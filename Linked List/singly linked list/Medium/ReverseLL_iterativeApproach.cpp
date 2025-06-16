// Reverse a singly Linked List using iterative approach.
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 **/

 /*
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        if(head == NULL) return head;
        if(head -> next == NULL) return head;

        vector<int>arr;

        ListNode* temp = head;
        while(temp != NULL){
            arr.push_back(temp -> val);
            temp = temp -> next;
        }
        temp = head;

        int halfOfarray = arr.size() / 2;

        for(int i=0;i<halfOfarray;i++){
            swap(arr[i] , arr[arr.size() - i - 1]);
        }

        int j = 0;
        while(temp != NULL){
            temp -> val = arr[j];
            j++;
            temp = temp -> next;
        }
        return head;
    }
};
*/


// Better approach
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
    ListNode* reverseList(ListNode* head) {
        stack<int>stk;
        ListNode* temp = head;

        while(temp != NULL){
            stk.push(temp -> val);
            temp = temp -> next;
        }

        temp = head;
        while(temp != NULL){
            temp -> val = stk.top();
            stk.pop();
            temp = temp -> next;
        }
        return head;
    }
};
*/


// Optimal approach
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = NULL;

        while(temp != NULL){
            ListNode* front = temp -> next;
            temp -> next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
};