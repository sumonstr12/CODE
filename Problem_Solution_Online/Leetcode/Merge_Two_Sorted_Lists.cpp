#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(): val(0), next(nullptr){}
    ListNode(int x): val(x), next(nullptr){}
    ListNode(int x, ListNode *next): val(x), next(next){}
};

class Solution {
public:
    ListNode *createnode(){
        int val;
        cin>>val;
        ListNode *head = new ListNode(val);
        ListNode *current = head;
        while (1)
        {
            cin>> val;
            if(val < 0){
                break;
            }
            current->next = new ListNode(val);
            current = current->next;
        }
        return head;

    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *res = new ListNode();
        ListNode *current = res;
        

        while (list1 && list2)
        {
            if(list1->val < list2->val){
                current->next = new ListNode(list1->val);
                list1 = list1->next;
            }else{
                current->next = new ListNode(list2->val);
                list2 = list2->next;
            }
            current = current->next;
        }

        while (list1)
        {
            current->next = new ListNode(list1->val);
            list1 = list1->next;
            current = current->next;
        }

        while (list2)
        {
            current->next = new ListNode(list2->val);
            list2 = list2->next;
            current = current->next;
        }

        return res->next;
        
    }


    void printNode(ListNode *head){
        ListNode *curr = head;
        while (curr)    
        {
            cout<<curr->val;
            if(curr->next) cout<<" -> ";
            curr = curr->next;
        }
        
    }

};

int main() {

    Solution sol;
    ListNode *list1 = sol.createnode();
    ListNode *list2 = sol.createnode();

    ListNode *head = sol.mergeTwoLists(list1, list2);
    sol.printNode(head);
    return 0;
}
