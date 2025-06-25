/*
Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.
For example, the following two linked lists begin to intersect at node c1:
*/

// Brute force Approach
/*

class Solution {
    public:
        ListNode* getIntersectionNode(ListNode* headA , ListNode* headB){

            unordered_set<ListNode*>st;

            ListNode* tempA = headA;
            ListNode* tempB = headB;

            while(tempA != NULL){
                st.insert(tempA);
                tempA = tempA -> next;
            }

            while(tempB != NULL){
                if(st.find(tempB) == st.end()){
                    st.insert(tempB);
                }
                else{
                    return tempB;
                }
            }

            return NULL;
        }

}

*/

// Better approach
/*

class Solution {
public:

    ListNode* collision_point(ListNode* headA , ListNode* headB , int d){
        while(d){
            d--;
            headB = headB -> next;
        }

        while(headA != headB){
            headA = headA -> next;
            headB = headB -> next;
        }

        return headA;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* tempA = headA;
        ListNode* tempB = headB;

        int c1 = 0 , c2 = 0;
        while(tempA != NULL){
            c1++;
            tempA = tempA -> next;
        }

        while(tempB != NULL){
            c2++;
            tempB = tempB -> next;
        }

        if(c1 < c2){
            return collision_point(headA , headB , c2-c1);
        }

        else{
            return collision_point(headB , headA , c1-c2);
        }
    }
};

*/

// optimised
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        if(headA == NULL || headB == NULL) return NULL;
        
        ListNode* tempA = headA;
        ListNode* tempB = headB;

        while(tempA != tempB){

            tempA = tempA ? tempA -> next : headB;
            tempB = tempB ? tempB -> next : headA;
        }
        return tempA;
    }
};