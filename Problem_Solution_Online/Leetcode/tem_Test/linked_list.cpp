
#include <bits/stdc++.h>
using namespace std;

struct LinkNode{
    int val;
    LinkNode *next;
    LinkNode(): val(0), next(nullptr){}
    LinkNode(int x): val(x), next(nullptr){}
    LinkNode(int x, LinkNode *next): val(x), next(next){}
};

class Solution {
public:
    LinkNode* createnode(int arr[], int n){
        if(n == 0) return 0;
        LinkNode* head = new LinkNode(arr[0]);
        LinkNode* current = head;
        
        for (int i = 1; i < n; i++)
        {
            current->next = new LinkNode(arr[i]);
            current = current->next;
        }
        return head;

    }

    void printNode(LinkNode *head){
        while (head)
        {
            cout<< head->val;
            if(head->next) cout<<" -> ";
            head = head->next;
        }
        
    }
    
};

int main() {

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    Solution sol;

    // create linked list
    LinkNode *head = sol.createnode(arr, n);

    sol.printNode(head);
    
    
    return 0;
}
