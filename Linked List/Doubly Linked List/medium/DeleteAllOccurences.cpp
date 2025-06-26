class Solution{
    public:
       ListNode* deleteAllOccurences(ListNode* head , int target){
          ListNode* temp = head;

          while(temp != NULL){

            if(temp -> val == target){

                ListNode* nextNode = temp -> next;
                ListNode* prevNode = temp -> prev;

                if(temp == head){
                    head = nextNode;
                    if(head) head -> prev = NULL;
                }

                else{
                    if(nextNode) nextNode -> prev = prevNode;
                    if(prevNode) prevNode -> next = nextNode;
                }

                delete temp;
                temp = nextNode;
            }

            else{
                temp = temp -> next;
            }
          }
          return head;
       }
}