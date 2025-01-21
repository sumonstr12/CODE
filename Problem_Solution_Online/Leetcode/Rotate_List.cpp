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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr){
            return 0;
        }
        
        ListNode *current = head;
        int node = 0;
        // count nodes
        while (current)
        {
            node++;
            current = current->next;
        }
        int rot = k % node;
        current = head;
        int temp = 0;
        while (rot)
        {
            ListNode *run = current;
            int num = run->val;
            run = run->next;
            while (run != nullptr)
            {
                temp = run->val;
                run->val = num;
                num = temp;
                run = run->next;
            }
            current->val = temp;
            rot--;
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
    int k;
    cin>>k;
    Solution sol;
    ListNode *head = sol.createNode();
    ListNode *res = sol.rotateRight(head, k);
    sol.PrintNode(res);
    return 0;
}
