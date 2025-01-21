
#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(): val(0), next(nullptr){}
    ListNode(int x): val(x), next(nullptr){}
    ListNode(int x, ListNode *next): val(x), next(next){}
};

class Solution {
public:
    ListNode * createNode(){
        ListNode *head = new ListNode();
        ListNode *current = head;
        while (1)
        {
            int val;
            cin>>val;
            if(val < 0) break;
            current->next = new ListNode(val);
            current = current->next;
        }

        return head->next;
        

    }

    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *res = new ListNode(0, head);
        ListNode *current = head;
        ListNode *prev = res;
        while (current)
        {
            while (current->next && current->val == current->next->val)
            {
                current = current->next;
            }
            if(prev->next == current){
                prev = prev->next;
            }else{
                prev->next = current->next;
            }
            current = current->next;
        }
        return res->next;

    }
    

    void PrintNode(ListNode *head){
        while (head)
        {
            cout<<head->val;
            if(head->next != nullptr) cout<<" -> ";
            head = head->next;
        }
        
    }
    
};

int main() {
    Solution sol;
    ListNode *head = sol.createNode();
    ListNode *res = sol.deleteDuplicates(head);
    sol.PrintNode(res);
    return 0;
}
