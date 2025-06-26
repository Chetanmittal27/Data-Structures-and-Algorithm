class Solution{
    public:
    ListNode* Remove_Duplicates(ListNode* head){

        ListNode* temp = head;
        unordered_map<int , int>mpp;

        while(temp != NULL){

            if(mpp.find(temp -> val) == mpp.end()){
                mpp.insert({temp -> val , 1});
                temp = temp -> next;
            }

            else{
                ListNode* nextNode = temp -> next;
                ListNode* prevNode = temp -> prev;

                if(nextNode) nextNode -> prev = prevNode;
                if(prevNode) prevNode -> next = nextNode;

                delete temp;
                temp = nextNode;
            }
        }
        return head;
    }
}