class solution{
    public:
       ListNode* reverse_DLL(ListNode* head){

        if(head == NULL || head -> next == NULL){
            return head;
        }

        ListNode* temp = head;
        ListNode* prev = NULL;
        
        while(temp != NULL){
            prev = temp -> back;
            temp -> back = temp -> next;

            prev = temp;
            
            temp = temp -> back;
        }
        head = prev -> back;
        return head;
       }
}