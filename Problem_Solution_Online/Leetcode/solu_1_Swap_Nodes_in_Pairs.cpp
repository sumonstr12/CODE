
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
    ListNode* createnode(){
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

    ListNode* swapPairs(ListNode* head) {
        vector<int> arr;
        while (head)
        {
            arr.push_back(head->val);
            head = head->next;
        }

        for (size_t i = 0; i < arr.size() - 1; i+=2)
        {
            swap(arr[i], arr[i+1]);
        }
        ListNode *headN = new ListNode();
        ListNode *curr = headN;
        for(auto num: arr){
            curr->next = new ListNode(num);
            curr = curr->next;
        }
        
        return headN->next;
        
    }

    void printNode(ListNode *head){
        vector<int> ar;
        while (head)
        {
            cout<<head->val;
            if(head->next) cout<<" -> ";
            head = head->next;
        }
        
    }
    
};

int main() {

    Solution sol;

    // create linked list
    ListNode *head = sol.createnode();

    ListNode *res = sol.swapPairs(head);

    sol.printNode(res);
    
    
    return 0;
}
