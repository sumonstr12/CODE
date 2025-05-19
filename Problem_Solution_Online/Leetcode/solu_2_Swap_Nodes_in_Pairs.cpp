#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(): val(0), next(nullptr){}
    ListNode(int x): val(x), next(nullptr){}
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
    // Don't swap address, just swap value of every address
    ListNode* swapPairs(ListNode* head){
        ListNode *curr = head;
        while (curr != nullptr && curr->next != nullptr)
        {
            swap(curr->val, curr->next->val);
            curr = curr->next->next;
        }
        
        return head;
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
    ListNode *res = sol.swapPairs(head);
    sol.PrintNode(res);
    return 0;
}
