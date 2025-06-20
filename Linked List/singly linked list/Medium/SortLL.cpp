// Brute force : using extra space
/*
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int>arr;
        ListNode* temp = head;

        while(temp != NULL){
            arr.push_back(temp -> val);
            temp = temp -> next;
        }

        temp = head;
        sort(arr.begin() , arr.end());

        int i = 0;
        while(temp != NULL){
            temp -> val = arr[i];
            i++;
            temp = temp -> next;
        }
        
        return head;
    }
};
*/


// Optimal approach
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

    ListNode* middleNode(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head -> next;

        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        return slow;
    }


    ListNode* mergeList(ListNode* left , ListNode* right){

        ListNode* dummyNode = new ListNode(-1);
        ListNode* temp = dummyNode;
        
        while(left != NULL && right != NULL){

            if(left -> val < right -> val){
                temp -> next = left;
                temp = left;
                left = left -> next;
            }

            else{
                temp -> next = right;
                temp = right;
                right = right -> next;
            }
        }

        if(left != NULL){
            temp -> next = left;
        }
        else{
            temp -> next = right;
        }

        return dummyNode -> next;
    }


    ListNode* sortList(ListNode* head) {
        
        if(head == NULL || head -> next == NULL){
            return head;
        }

        ListNode* middle = middleNode(head);
        ListNode* left = head;
        ListNode* right = middle -> next;
        middle -> next = nullptr;

        left = sortList(left);
        right = sortList(right);

        head = mergeList(left , right);
        return head;
    }
};