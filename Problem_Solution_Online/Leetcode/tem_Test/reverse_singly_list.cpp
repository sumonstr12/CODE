#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(): val(0), next(nullptr){}
    ListNode(int x): val(x), next(nullptr){}

};

class Solution{
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

    ListNode *reverseNode(ListNode *head){
        if(head == nullptr || head->next == nullptr) return head;

        ListNode *revhead = reverseNode(head->next);
        head->next->next = head;
        head->next = nullptr;
        return revhead;
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


int main(){
    Solution sol;

    ListNode *head = sol.createNode();
    head = sol.reverseNode(head);
    sol.PrintNode(head);
}