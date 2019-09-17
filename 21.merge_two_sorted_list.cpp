class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
    
        ListNode *i,*j;
        i=l1;
        j=l2;
        ListNode *head=NULL, *tail=NULL;
        
        while(i!=NULL && j!=NULL){
            // ary[i]<ary[j]
            ListNode *toInsert;
            if(i->val < j->val){
                toInsert = i;
                i = i->next;
            }else{
                toInsert = j;
                j = j->next;
            }
            if(head==NULL){
                head = toInsert;
                tail = head;
            }else{
                tail->next = toInsert;
                tail = toInsert;
            }
        }
        
        if(i!=NULL){
            tail->next = i;
        }else if(j!=NULL){
            tail->next = j;
        }
        
        return head;
    }
};
